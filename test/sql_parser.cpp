#include "thirdparty/microtest/microtest.h"

#include <iostream>
#include <map>
#include <string>

#include "SQLParser.h"
#include "parser/bison_parser.h"
#include "sql_asserts.h"

using namespace hsql;

void test_tokens(const std::string& query, const std::vector<int16_t>& expected_tokens) {
  std::vector<int16_t> tokens;
  ASSERT(SQLParser::tokenize(query, &tokens));

  ASSERT_EQ(expected_tokens.size(), tokens.size());

  for (unsigned i = 0; i < expected_tokens.size(); ++i) {
    ASSERT_EQ(expected_tokens[i], tokens[i]);
  }
}

TEST(SQLParserTokenizeTest) {
  test_tokens("SELECT * FROM test;", {SQL_SELECT, '*', SQL_FROM, SQL_IDENTIFIER, ';'});
  test_tokens("SELECT a, 'b' FROM test WITH HINT;",
              {SQL_SELECT, SQL_IDENTIFIER, ',', SQL_STRING, SQL_FROM, SQL_IDENTIFIER, SQL_WITH, SQL_HINT, ';'});
  test_tokens("SELECT \"a string\" FROM test;",
              {SQL_SELECT, SQL_STRING, SQL_FROM, SQL_IDENTIFIER, ';'});
  test_tokens("SELECT 9223372036854775808;", {SQL_SELECT, SQL_BIGINTVAL, ';'});
}

// H10 (adapted from hyrise/sql-parser#262): will induce a memory leak if allocations by the lexer are not cleaned up.
TEST(SQLParserTokenizeLeakRegressionTest) {
  test_tokens("'string_1' 'string_2' 'string_3';", {SQL_STRING, SQL_STRING, SQL_STRING, ';'});
  test_tokens("ident_1 ident_2;", {SQL_IDENTIFIER, SQL_IDENTIFIER, ';'});
  test_tokens("1.5 2e-2 .5;", {SQL_FLOATVAL, SQL_FLOATVAL, SQL_FLOATVAL, ';'});
  test_tokens("9223372036854775808 9223372036854775809;", {SQL_BIGINTVAL, SQL_BIGINTVAL, ';'});
}

// H11
TEST(SQLParserLexerErrorTest) {
  const std::vector<std::string> invalid_queries = {
      "SELECT 1 @ 2",
      "SELECT 1; @",
      "SELECT 1; \"unterminated",
      "SELECT 1; 'unterminated",
  };

  for (const auto& query : invalid_queries) {
    SQLParserResult result;
    SQLParser::parse(query, &result);
    ASSERT_FALSE(result.isValid());
    ASSERT_NOTNULL(result.errorMsg());

    std::vector<int16_t> tokens;
    ASSERT_FALSE(SQLParser::tokenize(query, &tokens));
  }
}

TEST(SQLParserTokenizeStringifyTest) {
  const std::string query = "SELECT * FROM test;";
  std::vector<int16_t> tokens;
  ASSERT(SQLParser::tokenize(query, &tokens));

  // Make u16string.
  std::u16string token_string(tokens.cbegin(), tokens.cend());

  // Check if u16 string is cacheable.
  std::map<std::u16string, std::string> cache;
  cache[token_string] = query;

  ASSERT(query == cache[token_string]);
  ASSERT(&query != &cache[token_string]);
}
