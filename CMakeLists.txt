cmake_minimum_required(VERSION 3.12)

project(hyrise_sql_parser
    LANGUAGES CXX
)

add_library(sqlparser STATIC)
add_library(hyrise_sql_parser::sqlparser ALIAS sqlparser)

target_compile_features(sqlparser PUBLIC cxx_std_17)
set_target_properties(sqlparser PROPERTIES
    POSITION_INDEPENDENT_CODE ON
)

target_include_directories(sqlparser PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_sources(sqlparser PRIVATE
    src/SQLParser.cpp
    src/SQLParserResult.cpp
    src/parser/bison_parser.cpp
    src/parser/flex_lexer.cpp
    src/sql/CreateStatement.cpp
    src/sql/Expr.cpp
    src/sql/PrepareStatement.cpp
    src/sql/SQLStatement.cpp
    src/sql/statements.cpp
    src/util/sqlhelper.cpp
)

set_source_files_properties(
    src/parser/bison_parser.cpp
    PROPERTIES COMPILE_OPTIONS "-Wno-unused-but-set-variable;-Wno-free-nonheap-object"
)

set_source_files_properties(
    src/parser/flex_lexer.cpp
    PROPERTIES COMPILE_OPTIONS "-Wno-sign-compare;-Wno-register"
)

install(TARGETS sqlparser)
