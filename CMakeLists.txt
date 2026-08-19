cmake_minimum_required(VERSION 3.12)

project(hyrise_sql_parser
    LANGUAGES CXX
)

find_package(BISON 3.0 REQUIRED)
find_package(FLEX 2.6 REQUIRED)

include(CTest)

set(PARSER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/parser)
set(GENERATED_PARSER_FILES
    ${PARSER_DIR}/bison_parser.cpp
    ${PARSER_DIR}/bison_parser.h
    ${PARSER_DIR}/flex_lexer.cpp
    ${PARSER_DIR}/flex_lexer.h
)

# bison_parser.y and flex_lexer.l are needed at the same time for other
# compilation targets, so we wrap it in a single custom command here.
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

add_executable(sqlparser_tests
    test/auto_query_file_test.cpp
    test/prepare_tests.cpp
    test/select_tests.cpp
    test/sql_parser.cpp
    test/sql_tests.cpp
    test/tpc_h_tests.cpp
)

target_compile_features(sqlparser_tests PRIVATE cxx_std_17)
target_include_directories(sqlparser_tests PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/test
)
target_link_libraries(sqlparser_tests PRIVATE sqlparser)

# The tests include generated parser headers, so ensure generation and the
# library build complete before compiling the test target.
add_dependencies(sqlparser_tests sqlparser)

if(BUILD_TESTING)
    add_test(
        NAME sqlparser_unit_tests
        COMMAND sqlparser_tests
            -f test/queries/queries-good.sql
            -f test/queries/queries-bad.sql
    )
    set_tests_properties(sqlparser_unit_tests PROPERTIES
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )
endif()

install(TARGETS sqlparser)
