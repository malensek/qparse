cmake_minimum_required(VERSION 3.12)

project(hyrise_sql_parser
    LANGUAGES CXX
)

find_package(BISON 3.0 REQUIRED)
find_package(FLEX 2.6 REQUIRED)

set(PARSER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/parser)
set(GENERATED_PARSER_FILES
    ${PARSER_DIR}/bison_parser.cpp
    ${PARSER_DIR}/bison_parser.h
    ${PARSER_DIR}/flex_lexer.cpp
    ${PARSER_DIR}/flex_lexer.h
)

# bison_parser.y and flex_lexer.l include each other's generated header, and
# both are included relative to ${PARSER_DIR} (e.g. "../sql/statements.h"), so
# generation must happen in-place there rather than in a separate build
# directory. Both tools are run from a single custom command (rather than via
# separate BISON_TARGET/FLEX_TARGET calls) so that any source needing either
# generated header only has to depend on one recipe, instead of requiring
# OBJECT_DEPENDS edges into two independent custom commands, which the
# Makefile generator can invoke redundantly under parallel builds.
add_custom_command(
    OUTPUT ${GENERATED_PARSER_FILES}
    COMMAND ${BISON_EXECUTABLE} bison_parser.y --output=bison_parser.cpp --defines=bison_parser.h --verbose
    COMMAND ${FLEX_EXECUTABLE} flex_lexer.l
    WORKING_DIRECTORY ${PARSER_DIR}
    DEPENDS ${PARSER_DIR}/bison_parser.y ${PARSER_DIR}/flex_lexer.l
    COMMENT "Generating SQL parser (bison) and lexer (flex)"
    VERBATIM
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

# src/SQLParser.cpp includes both generated headers directly but isn't itself
# one of the custom command's outputs, so it needs an explicit dependency on
# one of them to be scheduled after code generation runs.
set_source_files_properties(src/SQLParser.cpp
    PROPERTIES OBJECT_DEPENDS ${PARSER_DIR}/bison_parser.h
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
