/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE HSQL_STYPE
#define YYLTYPE HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse hsql_parse
#define yylex hsql_lex
#define yyerror hsql_error
#define yydebug hsql_debug
#define yynerrs hsql_nerrs

/* First part of user prologue.  */
#line 2 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

// clang-format on
#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char* msg) {
  result->setIsValid(false);
  result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
  return 0;
}
// clang-format off

#line 109 "bison_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_BIGINTVAL = 5,                  /* BIGINTVAL  */
  YYSYMBOL_FLOATVAL = 6,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 7,                     /* INTVAL  */
  YYSYMBOL_NULLSAFEEQUALS = 8,             /* NULLSAFEEQUALS  */
  YYSYMBOL_DEALLOCATE = 9,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 10,                /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 11,                 /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 12,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 13,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 14,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 15,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 16,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 17,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 18,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 19,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 20,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 21,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 22,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 23,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 24,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 25,                   /* EXPLAIN  */
  YYSYMBOL_ENCODING = 26,                  /* ENCODING  */
  YYSYMBOL_INTEGER = 27,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 28,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 29,                   /* PREPARE  */
  YYSYMBOL_SCHEMAS = 30,                   /* SCHEMAS  */
  YYSYMBOL_CHARACTER_VARYING = 31,         /* CHARACTER_VARYING  */
  YYSYMBOL_REAL = 32,                      /* REAL  */
  YYSYMBOL_DECIMAL = 33,                   /* DECIMAL  */
  YYSYMBOL_SMALLINT = 34,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 35,                    /* BIGINT  */
  YYSYMBOL_SPATIAL = 36,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 37,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 38,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 39,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 40,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 41,                    /* COLUMN  */
  YYSYMBOL_CREATE = 42,                    /* CREATE  */
  YYSYMBOL_DELETE = 43,                    /* DELETE  */
  YYSYMBOL_DIRECT = 44,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 45,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 46,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 47,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 48,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 49,                   /* EXTRACT  */
  YYSYMBOL_CAST = 50,                      /* CAST  */
  YYSYMBOL_FORMAT = 51,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 52,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 53,                    /* HAVING  */
  YYSYMBOL_IMPORT = 54,                    /* IMPORT  */
  YYSYMBOL_INSERT = 55,                    /* INSERT  */
  YYSYMBOL_ISNULL = 56,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 57,                    /* OFFSET  */
  YYSYMBOL_RENAME = 58,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 59,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 60,                    /* SELECT  */
  YYSYMBOL_SORTED = 61,                    /* SORTED  */
  YYSYMBOL_TABLES = 62,                    /* TABLES  */
  YYSYMBOL_UNLOAD = 63,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 64,                    /* UPDATE  */
  YYSYMBOL_VALUES = 65,                    /* VALUES  */
  YYSYMBOL_AFTER = 66,                     /* AFTER  */
  YYSYMBOL_ALTER = 67,                     /* ALTER  */
  YYSYMBOL_CROSS = 68,                     /* CROSS  */
  YYSYMBOL_DELTA = 69,                     /* DELTA  */
  YYSYMBOL_FLOAT = 70,                     /* FLOAT  */
  YYSYMBOL_GROUP = 71,                     /* GROUP  */
  YYSYMBOL_INDEX = 72,                     /* INDEX  */
  YYSYMBOL_INNER = 73,                     /* INNER  */
  YYSYMBOL_LIMIT = 74,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 75,                     /* LOCAL  */
  YYSYMBOL_MERGE = 76,                     /* MERGE  */
  YYSYMBOL_MINUS = 77,                     /* MINUS  */
  YYSYMBOL_ORDER = 78,                     /* ORDER  */
  YYSYMBOL_OVER = 79,                      /* OVER  */
  YYSYMBOL_OUTER = 80,                     /* OUTER  */
  YYSYMBOL_RIGHT = 81,                     /* RIGHT  */
  YYSYMBOL_TABLE = 82,                     /* TABLE  */
  YYSYMBOL_UNION = 83,                     /* UNION  */
  YYSYMBOL_USING = 84,                     /* USING  */
  YYSYMBOL_WHERE = 85,                     /* WHERE  */
  YYSYMBOL_CALL = 86,                      /* CALL  */
  YYSYMBOL_CASE = 87,                      /* CASE  */
  YYSYMBOL_CHAR = 88,                      /* CHAR  */
  YYSYMBOL_COPY = 89,                      /* COPY  */
  YYSYMBOL_DATE = 90,                      /* DATE  */
  YYSYMBOL_DATETIME = 91,                  /* DATETIME  */
  YYSYMBOL_DESC = 92,                      /* DESC  */
  YYSYMBOL_DIV = 93,                       /* DIV  */
  YYSYMBOL_DROP = 94,                      /* DROP  */
  YYSYMBOL_ELSE = 95,                      /* ELSE  */
  YYSYMBOL_FILE = 96,                      /* FILE  */
  YYSYMBOL_FROM = 97,                      /* FROM  */
  YYSYMBOL_FULL = 98,                      /* FULL  */
  YYSYMBOL_HASH = 99,                      /* HASH  */
  YYSYMBOL_HINT = 100,                     /* HINT  */
  YYSYMBOL_INTO = 101,                     /* INTO  */
  YYSYMBOL_JOIN = 102,                     /* JOIN  */
  YYSYMBOL_LEFT = 103,                     /* LEFT  */
  YYSYMBOL_LIKE = 104,                     /* LIKE  */
  YYSYMBOL_LOAD = 105,                     /* LOAD  */
  YYSYMBOL_LONG = 106,                     /* LONG  */
  YYSYMBOL_NULL = 107,                     /* NULL  */
  YYSYMBOL_PARTITION = 108,                /* PARTITION  */
  YYSYMBOL_PLAN = 109,                     /* PLAN  */
  YYSYMBOL_SHOW = 110,                     /* SHOW  */
  YYSYMBOL_TEXT = 111,                     /* TEXT  */
  YYSYMBOL_THEN = 112,                     /* THEN  */
  YYSYMBOL_TIME = 113,                     /* TIME  */
  YYSYMBOL_VIEW = 114,                     /* VIEW  */
  YYSYMBOL_WHEN = 115,                     /* WHEN  */
  YYSYMBOL_WITH = 116,                     /* WITH  */
  YYSYMBOL_ADD = 117,                      /* ADD  */
  YYSYMBOL_ALL = 118,                      /* ALL  */
  YYSYMBOL_AND = 119,                      /* AND  */
  YYSYMBOL_ASC = 120,                      /* ASC  */
  YYSYMBOL_END = 121,                      /* END  */
  YYSYMBOL_FOR = 122,                      /* FOR  */
  YYSYMBOL_INT = 123,                      /* INT  */
  YYSYMBOL_NOT = 124,                      /* NOT  */
  YYSYMBOL_OFF = 125,                      /* OFF  */
  YYSYMBOL_SET = 126,                      /* SET  */
  YYSYMBOL_TOP = 127,                      /* TOP  */
  YYSYMBOL_AS = 128,                       /* AS  */
  YYSYMBOL_BY = 129,                       /* BY  */
  YYSYMBOL_IF = 130,                       /* IF  */
  YYSYMBOL_IN = 131,                       /* IN  */
  YYSYMBOL_IS = 132,                       /* IS  */
  YYSYMBOL_OF = 133,                       /* OF  */
  YYSYMBOL_ON = 134,                       /* ON  */
  YYSYMBOL_OR = 135,                       /* OR  */
  YYSYMBOL_TO = 136,                       /* TO  */
  YYSYMBOL_NO = 137,                       /* NO  */
  YYSYMBOL_ARRAY = 138,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 139,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 140,                    /* ILIKE  */
  YYSYMBOL_MOD = 141,                      /* MOD  */
  YYSYMBOL_SECOND = 142,                   /* SECOND  */
  YYSYMBOL_MINUTE = 143,                   /* MINUTE  */
  YYSYMBOL_HOUR = 144,                     /* HOUR  */
  YYSYMBOL_DAY = 145,                      /* DAY  */
  YYSYMBOL_MONTH = 146,                    /* MONTH  */
  YYSYMBOL_YEAR = 147,                     /* YEAR  */
  YYSYMBOL_SECONDS = 148,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 149,                  /* MINUTES  */
  YYSYMBOL_HOURS = 150,                    /* HOURS  */
  YYSYMBOL_DAYS = 151,                     /* DAYS  */
  YYSYMBOL_MONTHS = 152,                   /* MONTHS  */
  YYSYMBOL_YEARS = 153,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 154,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 155,                     /* TRUE  */
  YYSYMBOL_FALSE = 156,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 157,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 158,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 159,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 160,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 161,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 162,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 163,                     /* SKIP  */
  YYSYMBOL_LOCKED = 164,                   /* LOCKED  */
  YYSYMBOL_SHARE = 165,                    /* SHARE  */
  YYSYMBOL_RANGE = 166,                    /* RANGE  */
  YYSYMBOL_ROWS = 167,                     /* ROWS  */
  YYSYMBOL_GROUPS = 168,                   /* GROUPS  */
  YYSYMBOL_UNBOUNDED = 169,                /* UNBOUNDED  */
  YYSYMBOL_FOLLOWING = 170,                /* FOLLOWING  */
  YYSYMBOL_PRECEDING = 171,                /* PRECEDING  */
  YYSYMBOL_CURRENT_ROW = 172,              /* CURRENT_ROW  */
  YYSYMBOL_UNIQUE = 173,                   /* UNIQUE  */
  YYSYMBOL_PRIMARY = 174,                  /* PRIMARY  */
  YYSYMBOL_FOREIGN = 175,                  /* FOREIGN  */
  YYSYMBOL_KEY = 176,                      /* KEY  */
  YYSYMBOL_REFERENCES = 177,               /* REFERENCES  */
  YYSYMBOL_BITSHIFTLEFT = 178,             /* BITSHIFTLEFT  */
  YYSYMBOL_BITSHIFTRIGHT = 179,            /* BITSHIFTRIGHT  */
  YYSYMBOL_LOGICALAND = 180,               /* LOGICALAND  */
  YYSYMBOL_LOGICALOR = 181,                /* LOGICALOR  */
  YYSYMBOL_182_ = 182,                     /* '='  */
  YYSYMBOL_EQUALS = 183,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 184,                /* NOTEQUALS  */
  YYSYMBOL_185_ = 185,                     /* '<'  */
  YYSYMBOL_186_ = 186,                     /* '>'  */
  YYSYMBOL_LESS = 187,                     /* LESS  */
  YYSYMBOL_GREATER = 188,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 189,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 190,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 191,                  /* NOTNULL  */
  YYSYMBOL_192_ = 192,                     /* '|'  */
  YYSYMBOL_193_ = 193,                     /* '^'  */
  YYSYMBOL_194_ = 194,                     /* '&'  */
  YYSYMBOL_195_ = 195,                     /* '+'  */
  YYSYMBOL_196_ = 196,                     /* '-'  */
  YYSYMBOL_197_ = 197,                     /* '*'  */
  YYSYMBOL_198_ = 198,                     /* '/'  */
  YYSYMBOL_199_ = 199,                     /* '%'  */
  YYSYMBOL_UMINUS = 200,                   /* UMINUS  */
  YYSYMBOL_201_ = 201,                     /* '['  */
  YYSYMBOL_202_ = 202,                     /* ']'  */
  YYSYMBOL_203_ = 203,                     /* '('  */
  YYSYMBOL_204_ = 204,                     /* ')'  */
  YYSYMBOL_205_ = 205,                     /* '.'  */
  YYSYMBOL_206_ = 206,                     /* ';'  */
  YYSYMBOL_207_ = 207,                     /* ','  */
  YYSYMBOL_208_ = 208,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 209,                 /* $accept  */
  YYSYMBOL_input = 210,                    /* input  */
  YYSYMBOL_statement_list = 211,           /* statement_list  */
  YYSYMBOL_statement = 212,                /* statement  */
  YYSYMBOL_preparable_statement = 213,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 214,                /* opt_hints  */
  YYSYMBOL_hint_list = 215,                /* hint_list  */
  YYSYMBOL_hint = 216,                     /* hint  */
  YYSYMBOL_transaction_statement = 217,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 218,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 219,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 220,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 221,        /* execute_statement  */
  YYSYMBOL_import_statement = 222,         /* import_statement  */
  YYSYMBOL_file_type = 223,                /* file_type  */
  YYSYMBOL_file_path = 224,                /* file_path  */
  YYSYMBOL_opt_import_export_options = 225, /* opt_import_export_options  */
  YYSYMBOL_import_export_options = 226,    /* import_export_options  */
  YYSYMBOL_csv_option = 227,               /* csv_option  */
  YYSYMBOL_export_statement = 228,         /* export_statement  */
  YYSYMBOL_show_statement = 229,           /* show_statement  */
  YYSYMBOL_create_statement = 230,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 231,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 232,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 233,               /* table_elem  */
  YYSYMBOL_column_def = 234,               /* column_def  */
  YYSYMBOL_column_type = 235,              /* column_type  */
  YYSYMBOL_opt_time_precision = 236,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 237, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 238,   /* opt_column_constraints  */
  YYSYMBOL_column_constraints = 239,       /* column_constraints  */
  YYSYMBOL_column_constraint = 240,        /* column_constraint  */
  YYSYMBOL_table_constraint = 241,         /* table_constraint  */
  YYSYMBOL_references_spec = 242,          /* references_spec  */
  YYSYMBOL_drop_statement = 243,           /* drop_statement  */
  YYSYMBOL_opt_exists = 244,               /* opt_exists  */
  YYSYMBOL_alter_statement = 245,          /* alter_statement  */
  YYSYMBOL_alter_action = 246,             /* alter_action  */
  YYSYMBOL_drop_action = 247,              /* drop_action  */
  YYSYMBOL_delete_statement = 248,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 249,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 250,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 251,          /* opt_column_list  */
  YYSYMBOL_update_statement = 252,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 253,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 254,            /* update_clause  */
  YYSYMBOL_select_statement = 255,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 256, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 257, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 258,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 259,          /* select_no_paren  */
  YYSYMBOL_set_operator = 260,             /* set_operator  */
  YYSYMBOL_set_type = 261,                 /* set_type  */
  YYSYMBOL_opt_all = 262,                  /* opt_all  */
  YYSYMBOL_select_clause = 263,            /* select_clause  */
  YYSYMBOL_opt_distinct = 264,             /* opt_distinct  */
  YYSYMBOL_select_list = 265,              /* select_list  */
  YYSYMBOL_opt_from_clause = 266,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 267,              /* from_clause  */
  YYSYMBOL_opt_where = 268,                /* opt_where  */
  YYSYMBOL_opt_group = 269,                /* opt_group  */
  YYSYMBOL_opt_having = 270,               /* opt_having  */
  YYSYMBOL_opt_order = 271,                /* opt_order  */
  YYSYMBOL_order_list = 272,               /* order_list  */
  YYSYMBOL_order_desc = 273,               /* order_desc  */
  YYSYMBOL_opt_order_type = 274,           /* opt_order_type  */
  YYSYMBOL_opt_null_ordering = 275,        /* opt_null_ordering  */
  YYSYMBOL_opt_top = 276,                  /* opt_top  */
  YYSYMBOL_opt_limit = 277,                /* opt_limit  */
  YYSYMBOL_expr_list = 278,                /* expr_list  */
  YYSYMBOL_opt_extended_literal_list = 279, /* opt_extended_literal_list  */
  YYSYMBOL_extended_literal_list = 280,    /* extended_literal_list  */
  YYSYMBOL_casted_extended_literal = 281,  /* casted_extended_literal  */
  YYSYMBOL_extended_literal = 282,         /* extended_literal  */
  YYSYMBOL_expr_alias = 283,               /* expr_alias  */
  YYSYMBOL_expr = 284,                     /* expr  */
  YYSYMBOL_operand = 285,                  /* operand  */
  YYSYMBOL_scalar_expr = 286,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 287,               /* unary_expr  */
  YYSYMBOL_binary_expr = 288,              /* binary_expr  */
  YYSYMBOL_logic_expr = 289,               /* logic_expr  */
  YYSYMBOL_in_expr = 290,                  /* in_expr  */
  YYSYMBOL_case_expr = 291,                /* case_expr  */
  YYSYMBOL_case_list = 292,                /* case_list  */
  YYSYMBOL_exists_expr = 293,              /* exists_expr  */
  YYSYMBOL_comp_expr = 294,                /* comp_expr  */
  YYSYMBOL_function_expr = 295,            /* function_expr  */
  YYSYMBOL_opt_window = 296,               /* opt_window  */
  YYSYMBOL_opt_partition = 297,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 298,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 299,               /* frame_type  */
  YYSYMBOL_frame_bound = 300,              /* frame_bound  */
  YYSYMBOL_extract_expr = 301,             /* extract_expr  */
  YYSYMBOL_cast_expr = 302,                /* cast_expr  */
  YYSYMBOL_datetime_field = 303,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 304,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 305,           /* duration_field  */
  YYSYMBOL_array_expr = 306,               /* array_expr  */
  YYSYMBOL_array_index = 307,              /* array_index  */
  YYSYMBOL_between_expr = 308,             /* between_expr  */
  YYSYMBOL_column_name = 309,              /* column_name  */
  YYSYMBOL_literal = 310,                  /* literal  */
  YYSYMBOL_string_literal = 311,           /* string_literal  */
  YYSYMBOL_bool_literal = 312,             /* bool_literal  */
  YYSYMBOL_num_literal = 313,              /* num_literal  */
  YYSYMBOL_int_literal = 314,              /* int_literal  */
  YYSYMBOL_null_literal = 315,             /* null_literal  */
  YYSYMBOL_date_literal = 316,             /* date_literal  */
  YYSYMBOL_interval_literal = 317,         /* interval_literal  */
  YYSYMBOL_param_expr = 318,               /* param_expr  */
  YYSYMBOL_table_ref = 319,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 320,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 321, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 322,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 323,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 324,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 325,               /* table_name  */
  YYSYMBOL_opt_index_name = 326,           /* opt_index_name  */
  YYSYMBOL_table_alias = 327,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 328,          /* opt_table_alias  */
  YYSYMBOL_alias = 329,                    /* alias  */
  YYSYMBOL_opt_alias = 330,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 331,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 332,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 333,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 334,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 335,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 336,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 337,              /* with_clause  */
  YYSYMBOL_with_description_list = 338,    /* with_description_list  */
  YYSYMBOL_with_description = 339,         /* with_description  */
  YYSYMBOL_join_clause = 340,              /* join_clause  */
  YYSYMBOL_opt_join_type = 341,            /* opt_join_type  */
  YYSYMBOL_natural_join_type = 342,        /* natural_join_type  */
  YYSYMBOL_join_condition = 343,           /* join_condition  */
  YYSYMBOL_ident_commalist = 344           /* ident_commalist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  209
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  377
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  693

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   444


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   199,   194,     2,
     203,   204,   197,   195,   207,   196,   205,   198,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   206,
     185,   182,   186,   208,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   201,     2,   202,   193,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   192,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   183,   184,   187,
     188,   189,   190,   191,   200
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   349,   349,   368,   374,   378,   385,   389,   393,   394,
     395,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   412,   413,   415,   419,   424,   428,   438,   439,   440,
     442,   442,   448,   454,   456,   460,   472,   478,   495,   510,
     512,   513,   514,   516,   530,   534,   544,   548,   572,   580,
     593,   600,   615,   635,   636,   641,   652,   665,   677,   684,
     691,   700,   701,   703,   707,   712,   713,   715,   723,   724,
     725,   726,   727,   728,   729,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   745,   746,   748,   749,
     750,   752,   753,   755,   759,   763,   768,   776,   777,   778,
     779,   781,   782,   783,   785,   793,   799,   805,   811,   817,
     818,   825,   831,   833,   843,   850,   861,   868,   876,   877,
     884,   891,   895,   900,   910,   914,   918,   930,   930,   932,
     933,   942,   943,   945,   959,   971,   976,   980,   984,   989,
     990,   992,  1007,  1008,  1010,  1012,  1013,  1015,  1017,  1018,
    1020,  1024,  1026,  1027,  1029,  1030,  1032,  1036,  1041,  1043,
    1044,  1045,  1047,  1048,  1070,  1071,  1073,  1074,  1075,  1076,
    1077,  1078,  1083,  1087,  1093,  1094,  1096,  1100,  1105,  1105,
    1109,  1117,  1118,  1120,  1129,  1129,  1129,  1129,  1129,  1131,
    1132,  1132,  1132,  1132,  1132,  1132,  1132,  1132,  1133,  1133,
    1137,  1137,  1139,  1140,  1141,  1142,  1143,  1145,  1145,  1146,
    1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,
    1157,  1158,  1159,  1160,  1162,  1163,  1164,  1165,  1167,  1168,
    1169,  1170,  1174,  1175,  1176,  1177,  1179,  1180,  1182,  1183,
    1185,  1186,  1187,  1188,  1189,  1190,  1191,  1192,  1196,  1197,
    1198,  1199,  1203,  1204,  1206,  1207,  1212,  1213,  1214,  1218,
    1219,  1220,  1222,  1223,  1224,  1225,  1226,  1228,  1230,  1232,
    1233,  1234,  1235,  1236,  1237,  1239,  1240,  1241,  1242,  1243,
    1244,  1246,  1246,  1248,  1250,  1252,  1253,  1255,  1256,  1257,
    1258,  1259,  1260,  1262,  1262,  1262,  1262,  1262,  1262,  1262,
    1264,  1266,  1267,  1269,  1270,  1272,  1273,  1275,  1277,  1288,
    1289,  1300,  1332,  1341,  1341,  1348,  1348,  1350,  1350,  1357,
    1361,  1366,  1374,  1380,  1384,  1389,  1390,  1392,  1392,  1394,
    1394,  1396,  1397,  1399,  1399,  1405,  1406,  1408,  1412,  1417,
    1423,  1430,  1431,  1432,  1433,  1435,  1436,  1437,  1443,  1443,
    1445,  1447,  1451,  1456,  1466,  1474,  1482,  1489,  1497,  1506,
    1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,  1516,  1517,
    1518,  1519,  1520,  1521,  1522,  1524,  1530,  1534
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "BIGINTVAL", "FLOATVAL", "INTVAL", "NULLSAFEEQUALS", "DEALLOCATE",
  "PARAMETERS", "INTERSECT", "TEMPORARY", "TIMESTAMP", "DISTINCT",
  "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE", "BETWEEN", "CASCADE",
  "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE", "EXPLAIN", "ENCODING",
  "INTEGER", "NATURAL", "PREPARE", "SCHEMAS", "CHARACTER_VARYING", "REAL",
  "DECIMAL", "SMALLINT", "BIGINT", "SPATIAL", "VARCHAR", "VIRTUAL",
  "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE",
  "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL",
  "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA",
  "SELECT", "SORTED", "TABLES", "UNLOAD", "UPDATE", "VALUES", "AFTER",
  "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT",
  "LOCAL", "MERGE", "MINUS", "ORDER", "OVER", "OUTER", "RIGHT", "TABLE",
  "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE",
  "DATETIME", "DESC", "DIV", "DROP", "ELSE", "FILE", "FROM", "FULL",
  "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL",
  "PARTITION", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN",
  "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "NOT", "OFF",
  "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "NO",
  "ARRAY", "CONCAT", "ILIKE", "MOD", "SECOND", "MINUTE", "HOUR", "DAY",
  "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS",
  "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE", "RANGE",
  "ROWS", "GROUPS", "UNBOUNDED", "FOLLOWING", "PRECEDING", "CURRENT_ROW",
  "UNIQUE", "PRIMARY", "FOREIGN", "KEY", "REFERENCES", "BITSHIFTLEFT",
  "BITSHIFTRIGHT", "LOGICALAND", "LOGICALOR", "'='", "EQUALS", "NOTEQUALS",
  "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'|'",
  "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS", "'['", "']'",
  "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "transaction_statement", "opt_transaction_keyword",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path",
  "opt_import_export_options", "import_export_options", "csv_option",
  "export_statement", "show_statement", "create_statement",
  "opt_not_exists", "table_elem_commalist", "table_elem", "column_def",
  "column_type", "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraints", "column_constraint",
  "table_constraint", "references_spec", "drop_statement", "opt_exists",
  "alter_statement", "alter_action", "drop_action", "delete_statement",
  "truncate_statement", "insert_statement", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_null_ordering",
  "opt_top", "opt_limit", "expr_list", "opt_extended_literal_list",
  "extended_literal_list", "casted_extended_literal", "extended_literal",
  "expr_alias", "expr", "operand", "scalar_expr", "unary_expr",
  "binary_expr", "logic_expr", "in_expr", "case_expr", "case_list",
  "exists_expr", "comp_expr", "function_expr", "opt_window",
  "opt_partition", "opt_frame_clause", "frame_type", "frame_bound",
  "extract_expr", "cast_expr", "datetime_field", "datetime_field_plural",
  "duration_field", "array_expr", "array_index", "between_expr",
  "column_name", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "null_literal", "date_literal",
  "interval_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "opt_index_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_locking_clause",
  "opt_locking_clause_list", "locking_clause", "row_lock_mode",
  "opt_row_lock_policy", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "natural_join_type", "join_condition",
  "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,    61,   437,   438,    60,    62,   439,   440,   441,
     442,   443,   124,    94,    38,    43,    45,    42,    47,    37,
     444,    91,    93,    40,    41,    46,    59,    44,    63
};
#endif

#define YYPACT_NINF (-614)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-368)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1017,    68,    66,    77,   142,    66,   140,    81,    96,   104,
      66,   173,    20,   159,    42,   266,   129,   129,   129,   289,
      88,  -614,   195,  -614,   195,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,   -24,  -614,   315,
     115,  -614,   127,   235,  -614,   207,   207,   207,    66,   336,
      66,   220,  -614,   250,   -24,   255,    51,   250,   250,   250,
      66,  -614,   222,   179,  -614,  -614,  -614,  -614,  -614,  -614,
     552,   293,  -614,  -614,   294,    60,  -614,   341,  -614,   409,
      48,   412,   305,   433,    66,    66,   369,  -614,   388,   244,
     483,   440,    66,   300,   304,   489,   489,   489,   495,    66,
      66,  -614,   310,   266,  -614,   316,    83,   521,  -614,  -614,
    -614,   -24,   402,   411,   -24,     0,  -614,  -614,  -614,  -614,
     765,   343,   540,  -614,   541,  -614,  -614,    32,  -614,   346,
     344,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,   508,  -614,   423,   -52,   244,   446,
    -614,   489,   555,    24,   380,   -43,  -614,  -614,   471,  -614,
    -614,  -614,   -66,   -66,   -66,  -614,  -614,  -614,  -614,  -614,
     564,  -614,  -614,  -614,   446,   490,  -614,  -614,    60,  -614,
    -614,   446,   490,   446,   210,   457,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,   356,  -614,   488,  -614,  -614,  -614,    48,  -614,    66,
     579,   467,    23,   460,   -14,   386,   387,   395,  -614,   229,
     473,   391,   568,  -614,   351,   337,   547,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,   503,  -614,   -32,   405,  -614,   446,   483,
    -614,   572,  -614,  -614,   417,   144,  -614,   369,  -614,   419,
      46,  -614,   527,   398,  -614,    57,     0,   -24,   429,  -614,
     285,     0,   337,   569,   133,     4,  -614,   457,  -614,   481,
    -614,  -614,   435,   543,  -614,  1091,   441,   472,   474,    59,
    -614,  -614,  -614,   467,    16,    22,   592,   488,   446,   446,
     216,    73,   450,   568,   802,   446,   -45,   452,   279,   446,
     446,   446,   446,   568,   568,  -614,   568,   568,    40,   454,
     -41,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,    83,    66,  -614,   656,    48,   337,  -614,   250,   144,
     657,   659,   336,   660,    76,  -614,  -614,    48,  -614,   564,
      21,   369,  -614,   446,  -614,   662,  -614,  -614,  -614,  -614,
     446,  -614,  -614,   664,   457,   446,   446,  -614,   484,  -614,
     507,   -71,  -614,  1091,   555,   489,  -614,  -614,   470,  -614,
     477,  -614,  -614,   486,  -614,  -614,   491,  -614,  -614,  -614,
    -614,   492,  -614,  -614,   201,   555,   493,   494,  -614,    23,
    -614,   595,   446,    90,  -614,   487,   580,   214,   362,    86,
     446,   446,  -614,   592,   589,  -120,  -614,  -614,  -614,   -38,
    -614,   -38,   826,   658,   -67,   826,   568,   568,   505,   351,
    -614,   591,   509,   826,   -67,   106,   106,   826,   826,   826,
     897,   897,   897,   897,   506,   691,   961,   -45,   -45,   -67,
     -67,   -67,   513,  -614,  -614,    84,   706,   120,  -614,  -614,
    -614,  -614,  -614,   174,   134,  -614,   467,  -614,   342,  -614,
     510,  -614,    38,  -614,   645,  -614,  -614,  -614,   715,  -614,
    -614,   337,   337,   655,  -614,   555,  -614,   556,  -614,   517,
     164,  -614,   720,   721,  -614,   727,   728,   740,  -614,  -614,
     642,  -614,   574,    66,  -614,   201,  -614,  -614,   183,   555,
     555,  -614,   549,  -614,   223,    26,   750,  -614,   446,  1091,
     446,   446,  -614,   406,   397,   550,  -614,   568,   682,   826,
     351,   553,   224,  -614,  -614,  -614,  -614,  -614,   752,   336,
    -614,  -614,   554,   512,   661,  -614,  -614,   679,   680,   681,
     665,    21,   763,  -614,  -614,  -614,   639,   716,  -614,  -614,
     102,  -614,  -614,  -614,   566,   260,   570,   575,   576,  -614,
    -614,   244,  -614,  -614,  -614,   264,   278,   670,   595,   595,
     446,  -614,   320,   577,   337,   502,  -614,   446,  -614,   802,
     568,   581,   295,  -614,  -614,  -614,  -614,    38,  -614,   692,
     693,    21,   703,   685,    21,  -614,  -614,  -614,    21,   389,
     585,   446,   446,  -614,  -614,  -614,  -614,   782,  -614,  -614,
    -614,  -614,  -614,   614,   663,   490,  -614,  -614,   322,  -614,
    -614,  -614,   337,   802,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,    21,  -614,   242,   555,   398,   337,   590,  -614,   446,
     108,   595,  -614,   593,   446,   324,  -614,   398,  -614,  -614,
    -614,   596,    37,  -614,   555,   337,  -614,  -614,  -614,    91,
      39,   232,  -614,  -614,   330,  -614,  -614,   674,  -614,  -614,
    -614,    39,  -614
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    31,    31,     0,
       2,     3,    22,    20,    22,    19,     9,    10,     8,    12,
      17,    18,    14,    15,    13,    16,    11,     0,   348,     0,
     323,   115,    34,     0,    55,    62,    62,    62,     0,     0,
       0,     0,   322,   110,     0,     0,     0,   110,   110,   110,
       0,    53,     0,   350,   351,    30,    27,    29,    28,     1,
       4,     0,     7,     6,   165,   124,   125,   155,   107,     0,
     175,     0,     0,   326,     0,     0,   149,    38,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     5,     0,     0,   143,   137,   138,
     136,     0,   140,     0,     0,   171,   324,   300,   306,   303,
     305,     0,     0,   307,     0,   301,   302,     0,   312,     0,
     174,   176,   178,   180,   293,   294,   295,   304,   296,   297,
     298,   299,    33,    32,     0,   325,     0,     0,   119,     0,
     114,     0,     0,     0,     0,   149,   121,   109,     0,   132,
     131,    39,    42,    42,    42,   108,   105,   106,   353,   352,
       0,   305,   164,   142,     0,   155,   128,   127,   129,   139,
     135,     0,   155,     0,     0,   336,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     309,     0,   308,   311,   181,   182,    35,     0,    61,     0,
       0,   349,     0,     0,   287,     0,     0,     0,   288,     0,
       0,     0,     0,   291,     0,   148,   184,   191,   192,   193,
     186,   188,   194,   187,   207,   195,   196,   197,   198,   190,
     185,   200,   201,     0,   376,     0,     0,   117,     0,     0,
     120,     0,   111,   112,     0,     0,    52,   149,    51,    25,
       0,    23,   146,   144,   172,   334,   171,     0,   154,   156,
     161,   171,   167,   169,   166,     0,   133,   335,   337,     0,
     310,   177,     0,     0,    58,     0,     0,     0,     0,     0,
      63,    65,    66,   349,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   203,     0,   202,     0,     0,     0,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   123,   122,   110,     0,
       0,     0,     0,     0,     0,    48,    37,     0,    21,     0,
       0,   149,   145,     0,   332,     0,   333,   183,   126,   130,
       0,   160,   159,   162,   336,     0,     0,   341,     0,   343,
       0,   347,   338,     0,     0,     0,    84,    78,     0,    80,
      90,    81,    68,     0,    75,    76,     0,    72,    73,    79,
      82,    87,    77,    69,    92,     0,     0,     0,    57,     0,
      60,   253,     0,   289,   292,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,   199,   189,   224,   226,
     225,   227,   242,     0,   214,   220,     0,     0,     0,     0,
     205,     0,   223,   222,   213,   218,   219,   240,   241,   243,
     244,   245,   246,   247,   217,   215,   216,   209,   208,   211,
     210,   212,     0,    36,   377,     0,     0,     0,    49,    46,
      44,    50,    41,     0,     0,    24,   349,   147,   313,   315,
       0,   317,   330,   316,   151,   173,   331,   157,     0,   158,
     134,   170,   168,     0,   344,     0,   346,     0,   339,     0,
       0,    56,     0,     0,    74,     0,     0,     0,    83,    99,
       0,    98,     0,     0,    67,    91,    93,    95,     0,     0,
       0,    64,     0,   248,     0,   143,     0,   238,     0,     0,
       0,     0,   232,     0,     0,     0,   283,     0,     0,   221,
       0,     0,     0,   206,   284,   116,   113,    40,     0,     0,
      47,    26,     0,     0,     0,   359,   365,   363,   366,   361,
       0,     0,     0,   329,   321,   327,     0,   153,   163,   342,
     347,   345,   179,    59,     0,     0,     0,     0,     0,   100,
      97,   119,    94,    96,   102,     0,     0,   255,   253,   253,
       0,   290,     0,     0,   236,     0,   235,     0,   239,   285,
       0,     0,     0,   230,   228,    45,    43,   330,   368,   372,
     374,     0,   370,     0,     0,   362,   364,   360,     0,   314,
     331,     0,     0,   141,   340,    71,    89,     0,    85,    70,
      86,   104,   101,     0,     0,   155,   249,   250,     0,   267,
     268,   233,   237,   286,   231,   229,   318,   371,   373,   354,
     369,     0,   356,   367,     0,   150,   152,     0,   103,     0,
     258,   253,   355,     0,     0,     0,    88,   254,   259,   260,
     261,     0,     0,   251,     0,   375,   357,   328,   252,     0,
       0,     0,   266,   256,     0,   265,   263,     0,   264,   262,
     358,     0,   257
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -614,  -614,  -614,   725,  -614,   778,  -614,   444,  -614,   416,
    -614,  -614,  -614,  -614,  -331,   -87,   375,   455,   332,  -614,
    -614,  -614,   396,  -614,   399,  -614,  -356,  -614,  -614,  -614,
    -614,   292,  -614,  -468,  -614,   -42,  -614,  -614,  -614,  -614,
    -614,  -614,  -146,  -614,  -614,   560,  -191,   -85,  -614,   245,
     -50,   -19,  -614,  -614,   -83,  -276,  -614,  -614,  -614,  -122,
    -614,  -614,  -174,  -614,   442,  -614,  -614,  -614,   -23,  -300,
    -614,  -280,   604,   612,   453,  -149,  -208,  -614,  -614,  -614,
    -614,  -614,  -614,   515,  -614,  -614,  -614,  -478,  -614,  -614,
    -614,  -613,  -614,  -614,  -130,  -614,  -614,  -614,  -614,  -614,
    -614,   -61,  -614,  -614,   690,   -99,  -614,  -614,   697,  -614,
    -614,  -482,  -242,  -614,  -614,  -614,     1,  -614,  -614,   211,
     561,  -614,   445,  -614,   548,  -614,   257,  -614,  -614,  -614,
     717,  -614,  -614,  -614,  -614,  -362
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    72,   260,   261,    23,    66,
      24,   143,    25,    26,    88,   162,   256,   354,   355,    27,
      28,    29,    83,   289,   290,   291,   404,   508,   504,   514,
     515,   516,   292,   517,    30,    92,    31,   252,   253,    32,
      33,    34,   153,    35,   155,   156,    36,   175,   176,   177,
      76,   111,   112,   180,    77,   174,   262,   361,   362,   150,
     567,   623,   115,   268,   269,   373,   489,   107,   185,   263,
     129,   130,   131,   132,   264,   265,   226,   227,   228,   229,
     230,   231,   232,   301,   233,   234,   235,   523,   635,   671,
     672,   683,   236,   237,   198,   199,   200,   238,   239,   240,
     241,   242,   134,   135,   136,   137,   138,   139,   140,   141,
     477,   478,   479,   480,   481,    51,   482,   146,   563,   564,
     565,   367,   276,   277,   278,   381,   498,    37,    38,    63,
      64,   483,   560,   613,   676,   245
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     225,   266,   213,    41,    94,   425,    44,   172,   271,   163,
     164,    52,   304,    56,   306,    98,    99,   100,   412,   133,
     284,   470,   500,    40,    40,   413,   285,   499,   178,   182,
     173,   178,   270,   250,   272,   274,    74,   118,   119,   120,
     173,   364,   149,   518,   679,   210,   679,   583,   316,    86,
     254,    89,   117,   118,   119,   120,   680,   183,   114,   436,
     364,   101,   495,    60,   243,   465,   440,   687,   377,    40,
     300,   108,   321,   280,   184,   308,   211,   474,   692,   619,
      42,   309,   536,   441,    74,   147,   148,   363,   118,   246,
     171,   496,   497,   158,   321,   304,   323,    39,   121,   346,
     166,   167,   410,   247,    61,   432,   433,   109,   434,   435,
     636,   637,   524,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   570,   341,   356,   653,   255,   122,   542,
     133,   378,   311,   110,   437,    43,   133,   350,    96,   417,
     418,   212,   338,   339,   340,   123,   341,   585,   586,   267,
     428,   429,   430,   431,   249,   658,   562,   416,   420,   379,
     351,   438,   343,   593,   307,   344,   309,   350,    48,    54,
     380,   531,   369,   673,   178,   365,   124,    97,   421,   294,
     376,   295,   310,    49,   422,   352,   286,   287,   288,   316,
     548,   421,   124,   125,   126,    50,   681,   532,   681,   682,
     282,   682,    45,   214,   117,   118,   119,   120,   606,   414,
     411,   270,    46,    54,   476,   549,   491,   492,   538,   539,
     589,    57,   214,   117,   118,   119,   120,   311,   312,   484,
     602,    58,   462,   368,   127,   321,   415,   323,   374,   590,
     358,   353,   309,   359,    47,    53,   128,    55,   215,   216,
     217,   685,   686,   408,   496,   497,   409,   218,   310,    62,
     553,   533,   534,    59,   668,   669,   670,   215,   216,   217,
     472,   353,    75,   473,   133,   552,   218,    65,   545,    69,
     638,   207,   665,   525,    70,   526,   133,   219,   501,    93,
     122,   336,   337,   338,   339,   340,   466,   341,   509,   344,
     554,    71,   684,   311,   312,   555,   219,   123,    78,   122,
      79,   655,   556,   557,   547,   510,   663,   473,   273,   599,
      80,   299,    81,   309,   220,   309,   123,    82,   551,    87,
     558,   207,   529,   463,   299,   559,    90,   168,   221,   310,
     102,   310,   108,   220,   214,   117,   118,   119,   120,   667,
     117,   118,   119,   120,   124,   125,   126,   221,   573,   649,
     553,   344,   652,   535,   511,   512,   664,   371,   513,   592,
      91,   594,   595,   124,   125,   126,   103,   584,   109,   541,
     344,    95,   643,   105,   311,   312,   311,   312,   309,   215,
     216,   217,   688,   689,   309,   372,   222,   223,   218,   662,
     554,    74,   116,   224,   310,   555,   142,   553,   128,   113,
     310,   106,   556,   557,   110,   222,   223,   588,   604,   144,
     363,   363,   224,    67,    68,   631,   145,   128,   219,   309,
     558,   122,    84,    85,  -367,   559,   122,   152,   642,   214,
     117,   118,   119,   120,   149,   310,   309,   554,   123,   311,
     312,   660,   555,   123,   626,   311,   312,   627,   632,   556,
     557,   344,   310,   656,   530,   220,   214,   117,   118,   119,
     120,   309,   633,   427,   151,   344,   154,   558,   157,   221,
     601,  -367,   559,   161,   215,   216,   217,   310,   165,   645,
     311,   312,   363,   218,   159,   124,   125,   126,   160,   597,
     124,   125,   126,    54,   581,   675,   309,   311,   312,   170,
     179,   302,   216,   217,   639,   309,   661,   596,   677,   363,
     218,   344,   310,   219,   690,   173,   122,   344,   257,   258,
     181,   310,   311,   312,   202,   203,   201,   222,   223,  -319,
     206,   207,   127,   123,   224,   313,   208,   209,   244,   128,
     219,     1,   248,   122,   128,   251,   314,   259,   113,     2,
     220,   214,   117,   118,   119,   120,     3,   311,   312,   275,
     123,     4,   283,    15,   221,   608,   311,   312,   293,   296,
     297,     5,   305,   609,     6,     7,  -320,   303,   298,   316,
     124,   125,   126,   315,   342,   363,     8,     9,   345,   383,
     610,   221,  -349,   348,   611,   612,    10,   216,   217,    11,
     349,   309,   357,   641,   360,   218,   375,   124,   125,   126,
     186,   187,   188,   189,   190,   191,   370,   310,   384,   385,
     316,    12,   222,   223,   405,   321,    13,   323,   406,   224,
     407,   317,    74,   423,   128,   219,   426,   439,   122,   464,
     493,   468,    14,   469,   471,   486,   313,   488,    15,   222,
     223,   318,   494,   502,   522,   123,   224,   528,   319,   320,
     503,   128,   311,   312,   324,   325,   321,   322,   323,   505,
     313,   527,   303,   437,   506,   507,   519,   520,   543,   334,
     335,   336,   337,   338,   339,   340,   221,   341,   540,   546,
     341,    16,    17,    18,   315,   544,   566,   561,   568,   569,
     571,   572,   124,   125,   126,   324,   325,   574,   575,   326,
     327,   328,   329,   330,   576,   577,   331,   332,   315,   333,
     334,   335,   336,   337,   338,   339,   340,   578,   341,   579,
     580,   316,   587,   591,   598,  -349,   605,   603,   607,   615,
     616,   617,   317,   614,   222,   223,   620,   618,   621,   622,
     625,   224,   647,   648,   628,   316,   128,   537,   634,   629,
     630,   640,   424,   650,   316,   644,   317,   651,   654,   657,
     320,   513,   659,   691,   666,   104,   674,   321,   322,   323,
     678,   600,    73,   475,   467,   550,   424,   582,   521,   347,
     313,   281,   487,   279,   320,   419,   485,   204,   646,   490,
     169,   321,   322,   323,   205,   382,   366,   624,     0,     0,
     321,     0,   323,     0,  -368,     0,   324,   325,     0,     0,
     326,   327,   328,   329,   330,     0,     0,   331,   332,     0,
     333,   334,   335,   336,   337,   338,   339,   340,   315,   341,
     324,   325,     0,     0,   326,   327,   328,   329,   330,   324,
     325,   331,   332,     0,   333,   334,   335,   336,   337,   338,
     339,   340,   315,   341,     0,   335,   336,   337,   338,   339,
     340,     0,   341,     0,     0,   316,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   317,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   316,
       0,     0,     0,     0,     0,     0,   424,     0,     0,     0,
    -368,     0,     0,     0,   320,     0,     0,     0,     0,     0,
       0,   321,   322,   323,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   315,     0,     0,     0,     0,   320,     0,
       0,     0,     0,     0,     0,   321,  -368,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     324,   325,     0,     0,   326,   327,   328,   329,   330,     0,
     316,   331,   332,     0,   333,   334,   335,   336,   337,   338,
     339,   340,     0,   341,   324,   325,     0,     0,  -368,  -368,
    -368,   329,   330,     0,     0,   331,   332,     0,   333,   334,
     335,   336,   337,   338,   339,   340,     1,   341,     0,   320,
       0,     0,     0,     0,     2,     0,   321,     0,   323,     0,
       0,     3,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     0,   316,     0,     5,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,   324,   325,     0,     0,     0,
       0,    10,  -368,  -368,    11,     0,  -368,  -368,     0,   333,
     334,   335,   336,   337,   338,   339,   340,     0,   341,     0,
     321,     0,   323,     0,   386,     0,    12,     0,     0,     0,
       0,    13,     0,     0,     0,     0,     0,     0,   387,     0,
       0,     0,   388,   389,   390,   391,   392,    14,   393,     0,
       0,     0,     0,    15,     0,     0,   394,     0,     0,   324,
     325,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   336,   337,   338,   339,
     340,   395,   341,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,    18,   396,
       0,   397,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,     0,     0,
       0,     0,   400,     0,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   402,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   403
};

static const yytype_int16 yycheck[] =
{
     149,   175,   148,     2,    54,   305,     5,   106,   182,    96,
      97,    10,   220,    12,   222,    57,    58,    59,   294,    80,
     211,   352,   384,     3,     3,     3,     3,   383,   111,   114,
      14,   114,   181,   155,   183,   184,    60,     5,     6,     7,
      14,     3,    85,   405,     7,    97,     7,   515,    93,    48,
     116,    50,     4,     5,     6,     7,    19,    57,    77,    19,
       3,    60,   133,    21,   151,   345,   107,   680,    64,     3,
     219,    11,   139,   203,    74,   224,   128,   357,   691,   561,
       3,   119,   202,   124,    60,    84,    85,   207,     5,    65,
       7,   162,   163,    92,   139,   303,   141,    29,    50,   248,
      99,   100,   293,   153,    62,   313,   314,    47,   316,   317,
     588,   589,   412,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   495,   201,   257,   618,   203,    90,   439,
     201,   137,   180,    83,   104,     3,   207,     3,    97,   298,
     299,   203,   197,   198,   199,   107,   201,   519,   520,   178,
     309,   310,   311,   312,   207,   633,   128,   297,    95,   165,
      26,   131,   204,   529,   224,   207,   119,     3,    97,   203,
     176,    95,   267,   661,   267,   128,   154,   136,   115,   203,
      57,   205,   135,    97,   121,    51,   173,   174,   175,    93,
      26,   115,   154,   155,   156,   101,   169,   121,   169,   172,
     209,   172,    72,     3,     4,     5,     6,     7,   549,   197,
     204,   370,    82,   203,   203,    51,   375,   376,   436,   437,
     204,    72,     3,     4,     5,     6,     7,   180,   181,   361,
     540,    82,   341,   266,   196,   139,   296,   141,   271,   525,
     204,   107,   119,   207,   114,    82,   208,    12,    48,    49,
      50,   170,   171,   204,   162,   163,   207,    57,   135,     3,
      28,   420,   421,   114,   166,   167,   168,    48,    49,    50,
     204,   107,    37,   207,   345,   476,    57,   158,   204,     0,
     590,   207,   654,   203,   206,   205,   357,    87,   385,    54,
      90,   195,   196,   197,   198,   199,   348,   201,   107,   207,
      68,   116,   674,   180,   181,    73,    87,   107,     3,    90,
     205,   621,    80,    81,   204,   124,    84,   207,   118,   537,
     203,   115,    97,   119,   124,   119,   107,   130,   204,     3,
      98,   207,   128,   342,   115,   103,   126,   102,   138,   135,
     128,   135,    11,   124,     3,     4,     5,     6,     7,   659,
       4,     5,     6,     7,   154,   155,   156,   138,   204,   611,
      28,   207,   614,   423,   173,   174,   134,    92,   177,   528,
     130,   530,   531,   154,   155,   156,   207,   204,    47,   439,
     207,   136,   600,   100,   180,   181,   180,   181,   119,    48,
      49,    50,   170,   171,   119,   120,   196,   197,    57,   651,
      68,    60,     3,   203,   135,    73,     4,    28,   208,    78,
     135,   127,    80,    81,    83,   196,   197,   204,   204,   124,
     207,   207,   203,    17,    18,   581,     3,   208,    87,   119,
      98,    90,    46,    47,   102,   103,    90,   203,   597,     3,
       4,     5,     6,     7,    85,   135,   119,    68,   107,   180,
     181,   635,    73,   107,   204,   180,   181,   207,   204,    80,
      81,   207,   135,   622,   112,   124,     3,     4,     5,     6,
       7,   119,   204,   204,    96,   207,     3,    98,    48,   138,
     540,   102,   103,     4,    48,    49,    50,   135,     3,   204,
     180,   181,   207,    57,   204,   154,   155,   156,   204,   112,
     154,   155,   156,   203,   513,   664,   119,   180,   181,   203,
     118,    48,    49,    50,   204,   119,   204,   121,   204,   207,
      57,   207,   135,    87,   204,    14,    90,   207,   163,   164,
     129,   135,   180,   181,     4,     4,   203,   196,   197,   207,
     204,   207,   196,   107,   203,     8,    48,   134,     3,   208,
      87,     9,   182,    90,   208,    94,    19,     3,    78,    17,
     124,     3,     4,     5,     6,     7,    24,   180,   181,   122,
     107,    29,     3,   116,   138,    73,   180,   181,   128,   203,
     203,    39,   201,    81,    42,    43,   207,   124,   203,    93,
     154,   155,   156,    56,   101,   207,    54,    55,   203,   128,
      98,   138,    60,    41,   102,   103,    64,    49,    50,    67,
     203,   119,   203,   121,    97,    57,    57,   154,   155,   156,
     142,   143,   144,   145,   146,   147,   207,   135,   203,    96,
      93,    89,   196,   197,   203,   139,    94,   141,   176,   203,
     176,   104,    60,   203,   208,    87,   204,   203,    90,     3,
     176,     4,   110,     4,     4,     3,     8,     3,   116,   196,
     197,   124,   165,   203,    79,   107,   203,    97,   131,   132,
     203,   208,   180,   181,   178,   179,   139,   140,   141,   203,
       8,   204,   124,   104,   203,   203,   203,   203,   107,   193,
     194,   195,   196,   197,   198,   199,   138,   201,   203,     3,
     201,   159,   160,   161,    56,   202,    71,   207,     3,    64,
     164,   204,   154,   155,   156,   178,   179,     7,     7,   182,
     183,   184,   185,   186,     7,     7,   189,   190,    56,   192,
     193,   194,   195,   196,   197,   198,   199,     7,   201,   107,
     176,    93,   203,     3,   204,   203,     4,   204,   204,    80,
      80,    80,   104,   102,   196,   197,     3,   102,   129,    53,
     204,   203,    80,    80,   204,    93,   208,   119,   108,   204,
     204,   204,   124,    80,    93,   204,   104,   102,   203,     7,
     132,   177,   129,   119,   204,    70,   203,   139,   140,   141,
     204,   119,    24,   359,   349,   473,   124,   515,   409,   249,
       8,   207,   370,   201,   132,   300,   363,   127,   607,   374,
     103,   139,   140,   141,   127,   277,   265,   570,    -1,    -1,
     139,    -1,   141,    -1,     8,    -1,   178,   179,    -1,    -1,
     182,   183,   184,   185,   186,    -1,    -1,   189,   190,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,    56,   201,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   178,
     179,   189,   190,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,    56,   201,    -1,   194,   195,   196,   197,   198,
     199,    -1,   201,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    93,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
     104,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,
      93,   189,   190,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   178,   179,    -1,    -1,   182,   183,
     184,   185,   186,    -1,    -1,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,     9,   201,    -1,   132,
      -1,    -1,    -1,    -1,    17,    -1,   139,    -1,   141,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    39,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,   178,   179,    -1,    -1,    -1,
      -1,    64,   185,   186,    67,    -1,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,    -1,   201,    -1,
     139,    -1,   141,    -1,    13,    -1,    89,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    32,    33,    34,    35,   110,    37,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    45,    -1,    -1,   178,
     179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,   198,
     199,    70,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,   160,   161,    88,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     9,    17,    24,    29,    39,    42,    43,    54,    55,
      64,    67,    89,    94,   110,   116,   159,   160,   161,   210,
     211,   212,   213,   217,   219,   221,   222,   228,   229,   230,
     243,   245,   248,   249,   250,   252,   255,   336,   337,    29,
       3,   325,     3,     3,   325,    72,    82,   114,    97,    97,
     101,   324,   325,    82,   203,   258,   325,    72,    82,   114,
      21,    62,     3,   338,   339,   158,   218,   218,   218,     0,
     206,   116,   214,   214,    60,   258,   259,   263,     3,   205,
     203,    97,   130,   231,   231,   231,   325,     3,   223,   325,
     126,   130,   244,   258,   259,   136,    97,   136,   244,   244,
     244,   325,   128,   207,   212,   100,   127,   276,    11,    47,
      83,   260,   261,    78,   260,   271,     3,     4,     5,     6,
       7,    50,    90,   107,   154,   155,   156,   196,   208,   279,
     280,   281,   282,   310,   311,   312,   313,   314,   315,   316,
     317,   318,     4,   220,   124,     3,   326,   325,   325,    85,
     268,    96,   203,   251,     3,   253,   254,    48,   325,   204,
     204,     4,   224,   224,   224,     3,   325,   325,   258,   339,
     203,     7,   314,    14,   264,   256,   257,   258,   263,   118,
     262,   129,   256,    57,    74,   277,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   303,   304,
     305,   203,     4,     4,   313,   317,   204,   207,    48,   134,
      97,   128,   203,   251,     3,    48,    49,    50,    57,    87,
     124,   138,   196,   197,   203,   284,   285,   286,   287,   288,
     289,   290,   291,   293,   294,   295,   301,   302,   306,   307,
     308,   309,   310,   224,     3,   344,    65,   259,   182,   207,
     268,    94,   246,   247,   116,   203,   225,   225,   225,     3,
     215,   216,   265,   278,   283,   284,   271,   260,   272,   273,
     284,   271,   284,   118,   284,   122,   331,   332,   333,   282,
     303,   281,   325,     3,   255,     3,   173,   174,   175,   232,
     233,   234,   241,   128,   203,   205,   203,   203,   203,   115,
     284,   292,    48,   124,   285,   201,   285,   259,   284,   119,
     135,   180,   181,     8,    19,    56,    93,   104,   124,   131,
     132,   139,   140,   141,   178,   179,   182,   183,   184,   185,
     186,   189,   190,   192,   193,   194,   195,   196,   197,   198,
     199,   201,   101,   204,   207,   203,   284,   254,    41,   203,
       3,    26,    51,   107,   226,   227,   268,   203,   204,   207,
      97,   266,   267,   207,     3,   128,   329,   330,   277,   256,
     207,    92,   120,   274,   277,    57,    57,    64,   137,   165,
     176,   334,   333,   128,   203,    96,    13,    27,    31,    32,
      33,    34,    35,    37,    45,    70,    88,    90,    91,   106,
     111,   113,   123,   157,   235,   203,   176,   176,   204,   207,
     255,   204,   264,     3,   197,   259,   303,   284,   284,   292,
      95,   115,   121,   203,   124,   278,   204,   204,   284,   284,
     284,   284,   285,   285,   285,   285,    19,   104,   131,   203,
     107,   124,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   314,   325,     3,   280,   244,   226,     4,     4,
     223,     4,   204,   207,   280,   216,   203,   319,   320,   321,
     322,   323,   325,   340,   268,   283,     3,   273,     3,   275,
     331,   284,   284,   176,   165,   133,   162,   163,   335,   235,
     344,   224,   203,   203,   237,   203,   203,   203,   236,   107,
     124,   173,   174,   177,   238,   239,   240,   242,   344,   203,
     203,   233,    79,   296,   278,   203,   205,   204,    97,   128,
     112,    95,   121,   284,   284,   259,   202,   119,   285,   285,
     203,   259,   278,   107,   202,   204,     3,   204,    26,    51,
     227,   204,   255,    28,    68,    73,    80,    81,    98,   103,
     341,   207,   128,   327,   328,   329,    71,   269,     3,    64,
     344,   164,   204,   204,     7,     7,     7,     7,     7,   107,
     176,   325,   240,   242,   204,   344,   344,   203,   204,   204,
     264,     3,   284,   235,   284,   284,   121,   112,   204,   285,
     119,   259,   278,   204,   204,     4,   223,   204,    73,    81,
      98,   102,   103,   342,   102,    80,    80,    80,   102,   320,
       3,   129,    53,   270,   335,   204,   204,   207,   204,   204,
     204,   251,   204,   204,   108,   297,   296,   296,   278,   204,
     204,   121,   284,   285,   204,   204,   328,    80,    80,   321,
      80,   102,   321,   320,   203,   278,   284,     7,   242,   129,
     271,   204,   321,    84,   134,   344,   204,   278,   166,   167,
     168,   298,   299,   296,   203,   284,   343,   204,   204,     7,
      19,   169,   172,   300,   344,   170,   171,   300,   170,   171,
     204,   119,   300
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   209,   210,   211,   211,   211,   212,   212,   212,   212,
     212,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   217,   217,
     218,   218,   219,   220,   221,   221,   222,   222,   223,   224,
     225,   225,   225,   226,   226,   226,   226,   226,   226,   227,
     227,   228,   228,   229,   229,   229,   230,   230,   230,   230,
     230,   231,   231,   232,   232,   233,   233,   234,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   236,   236,   237,   237,
     237,   238,   238,   239,   239,   239,   239,   240,   240,   240,
     240,   241,   241,   241,   242,   243,   243,   243,   243,   244,
     244,   245,   246,   247,   248,   249,   250,   250,   251,   251,
     252,   253,   253,   254,   255,   255,   255,   256,   256,   257,
     257,   258,   258,   259,   259,   260,   261,   261,   261,   262,
     262,   263,   264,   264,   265,   266,   266,   267,   268,   268,
     269,   269,   270,   270,   271,   271,   272,   272,   273,   274,
     274,   274,   275,   275,   276,   276,   277,   277,   277,   277,
     277,   277,   278,   278,   279,   279,   280,   280,   281,   281,
     282,   282,   282,   283,   284,   284,   284,   284,   284,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     286,   286,   287,   287,   287,   287,   287,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   289,   289,   289,   289,   290,   290,
     290,   290,   291,   291,   291,   291,   292,   292,   293,   293,
     294,   294,   294,   294,   294,   294,   294,   294,   295,   295,
     295,   295,   296,   296,   297,   297,   298,   298,   298,   299,
     299,   299,   300,   300,   300,   300,   300,   301,   302,   303,
     303,   303,   303,   303,   303,   304,   304,   304,   304,   304,
     304,   305,   305,   306,   307,   308,   308,   309,   309,   309,
     309,   309,   309,   310,   310,   310,   310,   310,   310,   310,
     311,   312,   312,   313,   313,   314,   314,   315,   316,   317,
     317,   317,   318,   319,   319,   320,   320,   321,   321,   322,
     322,   323,   324,   325,   325,   326,   326,   327,   327,   328,
     328,   329,   329,   330,   330,   331,   331,   332,   332,   333,
     333,   334,   334,   334,   334,   335,   335,   335,   336,   336,
     337,   338,   338,   339,   340,   340,   340,   340,   340,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   342,   342,
     342,   342,   342,   342,   342,   343,   344,   344
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     1,     3,     1,     4,     2,     2,     2,
       1,     0,     4,     1,     2,     5,     7,     6,     1,     1,
       4,     3,     0,     4,     2,     4,     2,     3,     1,     2,
       2,     5,     5,     2,     3,     2,     8,     7,     6,     9,
       7,     3,     0,     1,     3,     1,     1,     3,     1,     1,
       4,     4,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     3,     0,     5,     3,
       0,     1,     0,     1,     2,     1,     2,     2,     1,     1,
       2,     5,     4,     6,     3,     4,     4,     3,     4,     2,
       0,     5,     1,     4,     4,     2,     8,     5,     3,     0,
       5,     1,     3,     3,     2,     2,     6,     1,     1,     1,
       3,     3,     3,     4,     6,     2,     1,     1,     1,     1,
       0,     8,     1,     0,     1,     1,     0,     2,     2,     0,
       3,     0,     2,     0,     3,     0,     1,     3,     3,     1,
       1,     0,     0,     2,     2,     0,     2,     2,     4,     2,
       4,     0,     1,     3,     1,     0,     1,     3,     1,     6,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     3,     3,     3,     3,     5,     6,
       5,     6,     4,     6,     3,     5,     4,     5,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       6,     8,     6,     0,     3,     0,     2,     5,     0,     1,
       1,     1,     2,     2,     2,     2,     1,     6,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     6,     1,     1,     3,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     1,     1,     3,     1,     1,     1,     4,     1,
       3,     2,     1,     1,     3,     1,     0,     1,     5,     1,
       0,     2,     1,     1,     0,     1,     0,     1,     2,     3,
       5,     1,     3,     1,     2,     2,     1,     0,     1,     0,
       2,     1,     3,     3,     4,     5,     4,     6,     8,     1,
       2,     1,     2,     1,     2,     1,     1,     0,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 194 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2204 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 194 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2210 "bison_parser.cpp"
        break;

    case YYSYMBOL_BIGINTVAL: /* BIGINTVAL  */
#line 194 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2216 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 181 "bison_parser.y"
            { }
#line 2222 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 181 "bison_parser.y"
            { }
#line 2228 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2241 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2247 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2253 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2266 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2279 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2285 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2291 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2297 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 194 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2303 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2309 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2315 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 181 "bison_parser.y"
            { }
#line 2321 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 194 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2327 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_import_export_options: /* opt_import_export_options  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2333 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_export_options: /* import_export_options  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2339 "bison_parser.cpp"
        break;

    case YYSYMBOL_csv_option: /* csv_option  */
#line 203 "bison_parser.y"
            {
  free(((*yyvaluep).csv_option_t)->second);
  delete (((*yyvaluep).csv_option_t));
}
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2354 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2360 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2366 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 181 "bison_parser.y"
            { }
#line 2372 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2385 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2391 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2397 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 181 "bison_parser.y"
            { }
#line 2403 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 181 "bison_parser.y"
            { }
#line 2409 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2415 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2421 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraints: /* column_constraints  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2427 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 181 "bison_parser.y"
            { }
#line 2433 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2439 "bison_parser.cpp"
        break;

    case YYSYMBOL_references_spec: /* references_spec  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).references_spec_t)); }
#line 2445 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2451 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 181 "bison_parser.y"
            { }
#line 2457 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2463 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2469 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2475 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2481 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2487 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2493 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 186 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2506 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2512 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2525 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2531 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2537 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2549 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2555 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2561 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2567 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2573 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 181 "bison_parser.y"
            { }
#line 2579 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2585 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 181 "bison_parser.y"
            { }
#line 2591 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2604 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2610 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2616 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2622 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2628 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2634 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2647 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2660 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2666 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 181 "bison_parser.y"
            { }
#line 2672 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_null_ordering: /* opt_null_ordering  */
#line 181 "bison_parser.y"
            { }
#line 2678 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2684 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2690 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2703 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_extended_literal_list: /* opt_extended_literal_list  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2716 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal_list: /* extended_literal_list  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2729 "bison_parser.cpp"
        break;

    case YYSYMBOL_casted_extended_literal: /* casted_extended_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2735 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal: /* extended_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2741 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2747 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2753 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2759 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2765 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2771 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2777 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2783 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2789 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2795 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2801 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2807 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2813 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2819 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2825 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2838 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2844 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 181 "bison_parser.y"
            { }
#line 2850 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2856 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2862 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2868 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 181 "bison_parser.y"
            { }
#line 2874 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 181 "bison_parser.y"
            { }
#line 2880 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 181 "bison_parser.y"
            { }
#line 2886 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2892 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2898 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2904 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2910 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2916 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2922 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2928 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2934 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2940 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2946 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2952 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2958 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2964 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2970 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2976 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2982 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 195 "bison_parser.y"
            {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2995 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 3001 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 3007 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 182 "bison_parser.y"
            {
  free(((*yyvaluep).table_name).name);
  free(((*yyvaluep).table_name).schema);
}
#line 3016 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 194 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 3022 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 3028 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 3034 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 3040 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 3046 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 3052 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 3058 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 3064 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 181 "bison_parser.y"
            { }
#line 3070 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 181 "bison_parser.y"
            { }
#line 3076 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 3082 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 3088 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 3094 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 3100 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 3106 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 181 "bison_parser.y"
            { }
#line 3112 "bison_parser.cpp"
        break;

    case YYSYMBOL_natural_join_type: /* natural_join_type  */
#line 181 "bison_parser.y"
            { }
#line 3118 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 207 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 3124 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 186 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 3137 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 81 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3244 "bison_parser.cpp"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: statement_list  */
#line 349 "bison_parser.y"
                       {
  for (SQLStatement* stmt : *(yyvsp[0].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[0].stmt_vec);
  }
#line 3472 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 368 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3483 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';'  */
#line 374 "bison_parser.y"
                     {
  yylloc.string_length = 0;
  (yyval.stmt_vec) = (yyvsp[-1].stmt_vec);
}
#line 3492 "bison_parser.cpp"
    break;

  case 5: /* statement_list: statement_list ';' statement  */
#line 378 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3503 "bison_parser.cpp"
    break;

  case 6: /* statement: prepare_statement opt_hints  */
#line 385 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3512 "bison_parser.cpp"
    break;

  case 7: /* statement: preparable_statement opt_hints  */
#line 389 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3521 "bison_parser.cpp"
    break;

  case 8: /* statement: show_statement  */
#line 393 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3527 "bison_parser.cpp"
    break;

  case 9: /* statement: import_statement  */
#line 394 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3533 "bison_parser.cpp"
    break;

  case 10: /* statement: export_statement  */
#line 395 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3539 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: select_statement  */
#line 397 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3545 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: create_statement  */
#line 398 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3551 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: insert_statement  */
#line 399 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3557 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: delete_statement  */
#line 400 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3563 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: truncate_statement  */
#line 401 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3569 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: update_statement  */
#line 402 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3575 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: drop_statement  */
#line 403 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3581 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: alter_statement  */
#line 404 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3587 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: execute_statement  */
#line 405 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3593 "bison_parser.cpp"
    break;

  case 20: /* preparable_statement: transaction_statement  */
#line 406 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3599 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 412 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3605 "bison_parser.cpp"
    break;

  case 22: /* opt_hints: %empty  */
#line 413 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3611 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint  */
#line 415 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3620 "bison_parser.cpp"
    break;

  case 24: /* hint_list: hint_list ',' hint  */
#line 419 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3629 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER  */
#line 424 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3638 "bison_parser.cpp"
    break;

  case 26: /* hint: IDENTIFIER '(' extended_literal_list ')'  */
#line 428 "bison_parser.y"
                                           {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3648 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 438 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3654 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 439 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3660 "bison_parser.cpp"
    break;

  case 29: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 440 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3666 "bison_parser.cpp"
    break;

  case 32: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 448 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3676 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER  */
#line 456 "bison_parser.y"
                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3685 "bison_parser.cpp"
    break;

  case 35: /* execute_statement: EXECUTE IDENTIFIER '(' opt_extended_literal_list ')'  */
#line 460 "bison_parser.y"
                                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3695 "bison_parser.cpp"
    break;

  case 36: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 472 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3706 "bison_parser.cpp"
    break;

  case 37: /* import_statement: COPY table_name FROM file_path opt_import_export_options opt_where  */
#line 478 "bison_parser.y"
                                                                     {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_export_option_t)->format);
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
  if ((yyvsp[-1].import_export_option_t)->encoding) {
    (yyval.import_stmt)->encoding = (yyvsp[-1].import_export_option_t)->encoding;
    (yyvsp[-1].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[-1].import_export_option_t)->csv_options) {
    (yyval.import_stmt)->csv_options = (yyvsp[-1].import_export_option_t)->csv_options;
    (yyvsp[-1].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[-1].import_export_option_t);
}
#line 3727 "bison_parser.cpp"
    break;

  case 38: /* file_type: IDENTIFIER  */
#line 495 "bison_parser.y"
                       {
  if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
    (yyval.import_type_t) = kImportCSV;
  } else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
    (yyval.import_type_t) = kImportTbl;
  } else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
    (yyval.import_type_t) = kImportBinary;
  } else {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[0].sval));
}
#line 3746 "bison_parser.cpp"
    break;

  case 39: /* file_path: STRING  */
#line 510 "bison_parser.y"
                   { (yyval.sval) = (yyvsp[0].sval); }
#line 3752 "bison_parser.cpp"
    break;

  case 40: /* opt_import_export_options: WITH '(' import_export_options ')'  */
#line 512 "bison_parser.y"
                                                               { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3758 "bison_parser.cpp"
    break;

  case 41: /* opt_import_export_options: '(' import_export_options ')'  */
#line 513 "bison_parser.y"
                                { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3764 "bison_parser.cpp"
    break;

  case 42: /* opt_import_export_options: %empty  */
#line 514 "bison_parser.y"
              { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3770 "bison_parser.cpp"
    break;

  case 43: /* import_export_options: import_export_options ',' FORMAT file_type  */
#line 516 "bison_parser.y"
                                                                   {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  if ((yyvsp[-3].import_export_option_t)->csv_options && (yyvsp[0].import_type_t) != kImportCSV && (yyvsp[0].import_type_t) != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) are only allowed for CSV files.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3789 "bison_parser.cpp"
    break;

  case 44: /* import_export_options: FORMAT file_type  */
#line 530 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3798 "bison_parser.cpp"
    break;

  case 45: /* import_export_options: import_export_options ',' ENCODING STRING  */
#line 534 "bison_parser.y"
                                            {
  if ((yyvsp[-3].import_export_option_t)->encoding) {
    delete (yyvsp[-3].import_export_option_t);
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Encoding type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->encoding = (yyvsp[0].sval);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3813 "bison_parser.cpp"
    break;

  case 46: /* import_export_options: ENCODING STRING  */
#line 544 "bison_parser.y"
                  {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3822 "bison_parser.cpp"
    break;

  case 47: /* import_export_options: import_export_options ',' csv_option  */
#line 548 "bison_parser.y"
                                       {
  if ((yyvsp[-2].import_export_option_t)->format != kImportAuto && (yyvsp[-2].import_export_option_t)->format != kImportCSV) {
    delete (yyvsp[-2].import_export_option_t);
    free((yyvsp[0].csv_option_t)->second);
    delete (yyvsp[0].csv_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) are only allowed for CSV files.");
    YYERROR;
  }

  if ((yyvsp[-2].import_export_option_t)->csv_options == nullptr) {
    (yyvsp[-2].import_export_option_t)->csv_options = new CsvOptions{};
  }

  if (!(yyvsp[-2].import_export_option_t)->csv_options->accept_csv_option((yyvsp[0].csv_option_t))) {
    free((yyvsp[0].csv_option_t)->second);
    delete (yyvsp[0].csv_option_t);
    delete (yyvsp[-2].import_export_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) cannot be provided more than once.");
    YYERROR;
  }

  delete (yyvsp[0].csv_option_t);
  (yyval.import_export_option_t) = (yyvsp[-2].import_export_option_t);
}
#line 3851 "bison_parser.cpp"
    break;

  case 48: /* import_export_options: csv_option  */
#line 572 "bison_parser.y"
             {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->csv_options = new CsvOptions{};
  (yyval.import_export_option_t)->csv_options->accept_csv_option((yyvsp[0].csv_option_t));

  delete (yyvsp[0].csv_option_t);
}
#line 3863 "bison_parser.cpp"
    break;

  case 49: /* csv_option: IDENTIFIER STRING  */
#line 580 "bison_parser.y"
                               {
  if (strcasecmp((yyvsp[-1].sval), "DELIMITER") == 0) {
    (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Delimiter, (yyvsp[0].sval));
  } else if (strcasecmp((yyvsp[-1].sval), "QUOTE") == 0) {
    (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Quote, (yyvsp[0].sval));
  } else {
    free((yyvsp[-1].sval));
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Unknown CSV option.");
    YYERROR;
  }
  free((yyvsp[-1].sval));
}
#line 3881 "bison_parser.cpp"
    break;

  case 50: /* csv_option: NULL STRING  */
#line 593 "bison_parser.y"
              { (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Null, (yyvsp[0].sval)); }
#line 3887 "bison_parser.cpp"
    break;

  case 51: /* export_statement: COPY table_name TO file_path opt_import_export_options  */
#line 600 "bison_parser.y"
                                                                          {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->csv_options) {
    (yyval.export_stmt)->csv_options = (yyvsp[0].import_export_option_t)->csv_options;
    (yyvsp[0].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3907 "bison_parser.cpp"
    break;

  case 52: /* export_statement: COPY select_with_paren TO file_path opt_import_export_options  */
#line 615 "bison_parser.y"
                                                                {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->csv_options) {
    (yyval.export_stmt)->csv_options = (yyvsp[0].import_export_option_t)->csv_options;
    (yyvsp[0].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3926 "bison_parser.cpp"
    break;

  case 53: /* show_statement: SHOW TABLES  */
#line 635 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3932 "bison_parser.cpp"
    break;

  case 54: /* show_statement: SHOW COLUMNS table_name  */
#line 636 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3942 "bison_parser.cpp"
    break;

  case 55: /* show_statement: DESCRIBE table_name  */
#line 641 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3952 "bison_parser.cpp"
    break;

  case 56: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 652 "bison_parser.y"
                                                                                         {
  (yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
  (yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
  if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
    free((yyvsp[-2].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[-2].sval));
  (yyval.create_stmt)->filePath = (yyvsp[0].sval);
}
#line 3970 "bison_parser.cpp"
    break;

  case 57: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 665 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
  if (result->errorMsg()) {
    delete (yyval.create_stmt);
    YYERROR;
  }
}
#line 3987 "bison_parser.cpp"
    break;

  case 58: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 677 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3999 "bison_parser.cpp"
    break;

  case 59: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 684 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 4011 "bison_parser.cpp"
    break;

  case 60: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 691 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4024 "bison_parser.cpp"
    break;

  case 61: /* opt_not_exists: IF NOT EXISTS  */
#line 700 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 4030 "bison_parser.cpp"
    break;

  case 62: /* opt_not_exists: %empty  */
#line 701 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4036 "bison_parser.cpp"
    break;

  case 63: /* table_elem_commalist: table_elem  */
#line 703 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 4045 "bison_parser.cpp"
    break;

  case 64: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 707 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 4054 "bison_parser.cpp"
    break;

  case 65: /* table_elem: column_def  */
#line 712 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 4060 "bison_parser.cpp"
    break;

  case 66: /* table_elem: table_constraint  */
#line 713 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 4066 "bison_parser.cpp"
    break;

  case 67: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 715 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraints_t)->constraints, (yyvsp[0].column_constraints_t)->references);
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
  delete (yyvsp[0].column_constraints_t);
}
#line 4078 "bison_parser.cpp"
    break;

  case 68: /* column_type: BIGINT  */
#line 723 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 4084 "bison_parser.cpp"
    break;

  case 69: /* column_type: BOOLEAN  */
#line 724 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 4090 "bison_parser.cpp"
    break;

  case 70: /* column_type: CHAR '(' INTVAL ')'  */
#line 725 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 4096 "bison_parser.cpp"
    break;

  case 71: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 726 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4102 "bison_parser.cpp"
    break;

  case 72: /* column_type: DATE  */
#line 727 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 4108 "bison_parser.cpp"
    break;

  case 73: /* column_type: DATETIME  */
#line 728 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4114 "bison_parser.cpp"
    break;

  case 74: /* column_type: DECIMAL opt_decimal_specification  */
#line 729 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 4123 "bison_parser.cpp"
    break;

  case 75: /* column_type: DOUBLE  */
#line 733 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 4129 "bison_parser.cpp"
    break;

  case 76: /* column_type: FLOAT  */
#line 734 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 4135 "bison_parser.cpp"
    break;

  case 77: /* column_type: INT  */
#line 735 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4141 "bison_parser.cpp"
    break;

  case 78: /* column_type: INTEGER  */
#line 736 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4147 "bison_parser.cpp"
    break;

  case 79: /* column_type: LONG  */
#line 737 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 4153 "bison_parser.cpp"
    break;

  case 80: /* column_type: REAL  */
#line 738 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 4159 "bison_parser.cpp"
    break;

  case 81: /* column_type: SMALLINT  */
#line 739 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 4165 "bison_parser.cpp"
    break;

  case 82: /* column_type: TEXT  */
#line 740 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 4171 "bison_parser.cpp"
    break;

  case 83: /* column_type: TIME opt_time_precision  */
#line 741 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 4177 "bison_parser.cpp"
    break;

  case 84: /* column_type: TIMESTAMP  */
#line 742 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4183 "bison_parser.cpp"
    break;

  case 85: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 743 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4189 "bison_parser.cpp"
    break;

  case 86: /* opt_time_precision: '(' INTVAL ')'  */
#line 745 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 4195 "bison_parser.cpp"
    break;

  case 87: /* opt_time_precision: %empty  */
#line 746 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 4201 "bison_parser.cpp"
    break;

  case 88: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 748 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4207 "bison_parser.cpp"
    break;

  case 89: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 749 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4213 "bison_parser.cpp"
    break;

  case 90: /* opt_decimal_specification: %empty  */
#line 750 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4219 "bison_parser.cpp"
    break;

  case 91: /* opt_column_constraints: column_constraints  */
#line 752 "bison_parser.y"
                                            { (yyval.column_constraints_t) = (yyvsp[0].column_constraints_t); }
#line 4225 "bison_parser.cpp"
    break;

  case 92: /* opt_column_constraints: %empty  */
#line 753 "bison_parser.y"
              { (yyval.column_constraints_t) = new ColumnConstraints(); }
#line 4231 "bison_parser.cpp"
    break;

  case 93: /* column_constraints: column_constraint  */
#line 755 "bison_parser.y"
                                       {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
}
#line 4240 "bison_parser.cpp"
    break;

  case 94: /* column_constraints: column_constraints column_constraint  */
#line 759 "bison_parser.y"
                                       {
  (yyvsp[-1].column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4249 "bison_parser.cpp"
    break;

  case 95: /* column_constraints: references_spec  */
#line 763 "bison_parser.y"
                  {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyval.column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
}
#line 4259 "bison_parser.cpp"
    break;

  case 96: /* column_constraints: column_constraints references_spec  */
#line 768 "bison_parser.y"
                                     {
  // Multiple foreign keys for the same column could be possible, so we do not raise an error in that case.
  // Think of foreign keys referenced on multiple levels (returned item references sold item references items).
  (yyvsp[-1].column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyvsp[-1].column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4271 "bison_parser.cpp"
    break;

  case 97: /* column_constraint: PRIMARY KEY  */
#line 776 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4277 "bison_parser.cpp"
    break;

  case 98: /* column_constraint: UNIQUE  */
#line 777 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4283 "bison_parser.cpp"
    break;

  case 99: /* column_constraint: NULL  */
#line 778 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4289 "bison_parser.cpp"
    break;

  case 100: /* column_constraint: NOT NULL  */
#line 779 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4295 "bison_parser.cpp"
    break;

  case 101: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 781 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4301 "bison_parser.cpp"
    break;

  case 102: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 782 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4307 "bison_parser.cpp"
    break;

  case 103: /* table_constraint: FOREIGN KEY '(' ident_commalist ')' references_spec  */
#line 783 "bison_parser.y"
                                                      { (yyval.table_constraint_t) = new ForeignKeyConstraint((yyvsp[-2].str_vec), (yyvsp[0].references_spec_t)); }
#line 4313 "bison_parser.cpp"
    break;

  case 104: /* references_spec: REFERENCES table_name opt_column_list  */
#line 785 "bison_parser.y"
                                                        { (yyval.references_spec_t) = new ReferencesSpecification((yyvsp[-1].table_name).schema, (yyvsp[-1].table_name).name, (yyvsp[0].str_vec)); }
#line 4319 "bison_parser.cpp"
    break;

  case 105: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 793 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4330 "bison_parser.cpp"
    break;

  case 106: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 799 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4341 "bison_parser.cpp"
    break;

  case 107: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 805 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4351 "bison_parser.cpp"
    break;

  case 108: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 811 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4361 "bison_parser.cpp"
    break;

  case 109: /* opt_exists: IF EXISTS  */
#line 817 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4367 "bison_parser.cpp"
    break;

  case 110: /* opt_exists: %empty  */
#line 818 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4373 "bison_parser.cpp"
    break;

  case 111: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 825 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4383 "bison_parser.cpp"
    break;

  case 112: /* alter_action: drop_action  */
#line 831 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4389 "bison_parser.cpp"
    break;

  case 113: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 833 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4398 "bison_parser.cpp"
    break;

  case 114: /* delete_statement: DELETE FROM table_name opt_where  */
#line 843 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4409 "bison_parser.cpp"
    break;

  case 115: /* truncate_statement: TRUNCATE table_name  */
#line 850 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4419 "bison_parser.cpp"
    break;

  case 116: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' extended_literal_list ')'  */
#line 861 "bison_parser.y"
                                                                                               {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4431 "bison_parser.cpp"
    break;

  case 117: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 868 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4443 "bison_parser.cpp"
    break;

  case 118: /* opt_column_list: '(' ident_commalist ')'  */
#line 876 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4449 "bison_parser.cpp"
    break;

  case 119: /* opt_column_list: %empty  */
#line 877 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4455 "bison_parser.cpp"
    break;

  case 120: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 884 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4466 "bison_parser.cpp"
    break;

  case 121: /* update_clause_commalist: update_clause  */
#line 891 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4475 "bison_parser.cpp"
    break;

  case 122: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 895 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4484 "bison_parser.cpp"
    break;

  case 123: /* update_clause: IDENTIFIER '=' expr  */
#line 900 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4494 "bison_parser.cpp"
    break;

  case 124: /* select_statement: opt_with_clause select_with_paren  */
#line 910 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4503 "bison_parser.cpp"
    break;

  case 125: /* select_statement: opt_with_clause select_no_paren  */
#line 914 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4512 "bison_parser.cpp"
    break;

  case 126: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 918 "bison_parser.y"
                                                                                                 {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
}
#line 4528 "bison_parser.cpp"
    break;

  case 129: /* select_within_set_operation_no_parentheses: select_clause  */
#line 932 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4534 "bison_parser.cpp"
    break;

  case 130: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 933 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4547 "bison_parser.cpp"
    break;

  case 131: /* select_with_paren: '(' select_no_paren ')'  */
#line 942 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4553 "bison_parser.cpp"
    break;

  case 132: /* select_with_paren: '(' select_with_paren ')'  */
#line 943 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4559 "bison_parser.cpp"
    break;

  case 133: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 945 "bison_parser.y"
                                                                       {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit)) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec)) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4578 "bison_parser.cpp"
    break;

  case 134: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 959 "bison_parser.y"
                                                                                                {
  (yyval.select_stmt) = (yyvsp[-5].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
}
#line 4594 "bison_parser.cpp"
    break;

  case 135: /* set_operator: set_type opt_all  */
#line 971 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4603 "bison_parser.cpp"
    break;

  case 136: /* set_type: UNION  */
#line 976 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4612 "bison_parser.cpp"
    break;

  case 137: /* set_type: INTERSECT  */
#line 980 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4621 "bison_parser.cpp"
    break;

  case 138: /* set_type: EXCEPT  */
#line 984 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4630 "bison_parser.cpp"
    break;

  case 139: /* opt_all: ALL  */
#line 989 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4636 "bison_parser.cpp"
    break;

  case 140: /* opt_all: %empty  */
#line 990 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4642 "bison_parser.cpp"
    break;

  case 141: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group opt_having  */
#line 992 "bison_parser.y"
                                                                                                       {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-6].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-5].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-4].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-3].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-2].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[-1].group_t);
  if ((yyvsp[-1].group_t)) {
    (yyval.select_stmt)->groupBy->having = (yyvsp[0].expr);
  } else {
    (yyval.select_stmt)->having = (yyvsp[0].expr);
  }
}
#line 4661 "bison_parser.cpp"
    break;

  case 142: /* opt_distinct: DISTINCT  */
#line 1007 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4667 "bison_parser.cpp"
    break;

  case 143: /* opt_distinct: %empty  */
#line 1008 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4673 "bison_parser.cpp"
    break;

  case 145: /* opt_from_clause: from_clause  */
#line 1012 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4679 "bison_parser.cpp"
    break;

  case 146: /* opt_from_clause: %empty  */
#line 1013 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4685 "bison_parser.cpp"
    break;

  case 147: /* from_clause: FROM table_ref  */
#line 1015 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4691 "bison_parser.cpp"
    break;

  case 148: /* opt_where: WHERE expr  */
#line 1017 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4697 "bison_parser.cpp"
    break;

  case 149: /* opt_where: %empty  */
#line 1018 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4703 "bison_parser.cpp"
    break;

  case 150: /* opt_group: GROUP BY expr_list  */
#line 1020 "bison_parser.y"
                               {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[0].expr_vec);
}
#line 4712 "bison_parser.cpp"
    break;

  case 151: /* opt_group: %empty  */
#line 1024 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4718 "bison_parser.cpp"
    break;

  case 152: /* opt_having: HAVING expr  */
#line 1026 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4724 "bison_parser.cpp"
    break;

  case 153: /* opt_having: %empty  */
#line 1027 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4730 "bison_parser.cpp"
    break;

  case 154: /* opt_order: ORDER BY order_list  */
#line 1029 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4736 "bison_parser.cpp"
    break;

  case 155: /* opt_order: %empty  */
#line 1030 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4742 "bison_parser.cpp"
    break;

  case 156: /* order_list: order_desc  */
#line 1032 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4751 "bison_parser.cpp"
    break;

  case 157: /* order_list: order_list ',' order_desc  */
#line 1036 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4760 "bison_parser.cpp"
    break;

  case 158: /* order_desc: expr opt_order_type opt_null_ordering  */
#line 1041 "bison_parser.y"
                                                   { (yyval.order) = new OrderDescription((yyvsp[-1].order_type), (yyvsp[-2].expr), (yyvsp[0].null_ordering_t)); }
#line 4766 "bison_parser.cpp"
    break;

  case 159: /* opt_order_type: ASC  */
#line 1043 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4772 "bison_parser.cpp"
    break;

  case 160: /* opt_order_type: DESC  */
#line 1044 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4778 "bison_parser.cpp"
    break;

  case 161: /* opt_order_type: %empty  */
#line 1045 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4784 "bison_parser.cpp"
    break;

  case 162: /* opt_null_ordering: %empty  */
#line 1047 "bison_parser.y"
                                { (yyval.null_ordering_t) = NullOrdering::Undefined; }
#line 4790 "bison_parser.cpp"
    break;

  case 163: /* opt_null_ordering: IDENTIFIER IDENTIFIER  */
#line 1048 "bison_parser.y"
                        {
  auto null_ordering = NullOrdering::Undefined;
  if (strcasecmp((yyvsp[-1].sval), "nulls") == 0) {
    if (strcasecmp((yyvsp[0].sval), "first") == 0) {
      null_ordering = NullOrdering::First;
    } else if (strcasecmp((yyvsp[0].sval), "last") == 0) {
      null_ordering = NullOrdering::Last;
    }
  }
  free((yyvsp[-1].sval));
  free((yyvsp[0].sval));

  if (null_ordering == NullOrdering::Undefined) {
    yyerror(&yyloc, result, scanner, "Expected NULLS FIRST or NULLS LAST ordering.");
    YYERROR;
  }

  (yyval.null_ordering_t) = null_ordering;
}
#line 4814 "bison_parser.cpp"
    break;

  case 164: /* opt_top: TOP int_literal  */
#line 1070 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4820 "bison_parser.cpp"
    break;

  case 165: /* opt_top: %empty  */
#line 1071 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4826 "bison_parser.cpp"
    break;

  case 166: /* opt_limit: LIMIT expr  */
#line 1073 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4832 "bison_parser.cpp"
    break;

  case 167: /* opt_limit: OFFSET expr  */
#line 1074 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4838 "bison_parser.cpp"
    break;

  case 168: /* opt_limit: LIMIT expr OFFSET expr  */
#line 1075 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4844 "bison_parser.cpp"
    break;

  case 169: /* opt_limit: LIMIT ALL  */
#line 1076 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4850 "bison_parser.cpp"
    break;

  case 170: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 1077 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4856 "bison_parser.cpp"
    break;

  case 171: /* opt_limit: %empty  */
#line 1078 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4862 "bison_parser.cpp"
    break;

  case 172: /* expr_list: expr_alias  */
#line 1083 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4871 "bison_parser.cpp"
    break;

  case 173: /* expr_list: expr_list ',' expr_alias  */
#line 1087 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4880 "bison_parser.cpp"
    break;

  case 174: /* opt_extended_literal_list: extended_literal_list  */
#line 1093 "bison_parser.y"
                                                  { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4886 "bison_parser.cpp"
    break;

  case 175: /* opt_extended_literal_list: %empty  */
#line 1094 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4892 "bison_parser.cpp"
    break;

  case 176: /* extended_literal_list: casted_extended_literal  */
#line 1096 "bison_parser.y"
                                                {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4901 "bison_parser.cpp"
    break;

  case 177: /* extended_literal_list: extended_literal_list ',' casted_extended_literal  */
#line 1100 "bison_parser.y"
                                                    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4910 "bison_parser.cpp"
    break;

  case 179: /* casted_extended_literal: CAST '(' extended_literal AS column_type ')'  */
#line 1105 "bison_parser.y"
                                                                                          {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4918 "bison_parser.cpp"
    break;

  case 180: /* extended_literal: literal  */
#line 1109 "bison_parser.y"
                           {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4931 "bison_parser.cpp"
    break;

  case 181: /* extended_literal: '-' num_literal  */
#line 1117 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4937 "bison_parser.cpp"
    break;

  case 182: /* extended_literal: '-' interval_literal  */
#line 1118 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4943 "bison_parser.cpp"
    break;

  case 183: /* expr_alias: expr opt_alias  */
#line 1120 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4956 "bison_parser.cpp"
    break;

  case 189: /* operand: '(' expr ')'  */
#line 1131 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4962 "bison_parser.cpp"
    break;

  case 199: /* operand: '(' select_no_paren ')'  */
#line 1133 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4970 "bison_parser.cpp"
    break;

  case 202: /* unary_expr: '-' operand  */
#line 1139 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4976 "bison_parser.cpp"
    break;

  case 203: /* unary_expr: NOT operand  */
#line 1140 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4982 "bison_parser.cpp"
    break;

  case 204: /* unary_expr: operand ISNULL  */
#line 1141 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4988 "bison_parser.cpp"
    break;

  case 205: /* unary_expr: operand IS NULL  */
#line 1142 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4994 "bison_parser.cpp"
    break;

  case 206: /* unary_expr: operand IS NOT NULL  */
#line 1143 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 5000 "bison_parser.cpp"
    break;

  case 208: /* binary_expr: operand '-' operand  */
#line 1145 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 5006 "bison_parser.cpp"
    break;

  case 209: /* binary_expr: operand '+' operand  */
#line 1146 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 5012 "bison_parser.cpp"
    break;

  case 210: /* binary_expr: operand '/' operand  */
#line 1147 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 5018 "bison_parser.cpp"
    break;

  case 211: /* binary_expr: operand '*' operand  */
#line 1148 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 5024 "bison_parser.cpp"
    break;

  case 212: /* binary_expr: operand '%' operand  */
#line 1149 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 5030 "bison_parser.cpp"
    break;

  case 213: /* binary_expr: operand MOD operand  */
#line 1150 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMod, (yyvsp[0].expr)); }
#line 5036 "bison_parser.cpp"
    break;

  case 214: /* binary_expr: operand DIV operand  */
#line 1151 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpDiv, (yyvsp[0].expr)); }
#line 5042 "bison_parser.cpp"
    break;

  case 215: /* binary_expr: operand '^' operand  */
#line 1152 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpBitXor, (yyvsp[0].expr)); }
#line 5048 "bison_parser.cpp"
    break;

  case 216: /* binary_expr: operand '&' operand  */
#line 1153 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpBitAnd, (yyvsp[0].expr)); }
#line 5054 "bison_parser.cpp"
    break;

  case 217: /* binary_expr: operand '|' operand  */
#line 1154 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpBitOr, (yyvsp[0].expr)); }
#line 5060 "bison_parser.cpp"
    break;

  case 218: /* binary_expr: operand BITSHIFTLEFT operand  */
#line 1155 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpBitShiftLeft, (yyvsp[0].expr)); }
#line 5066 "bison_parser.cpp"
    break;

  case 219: /* binary_expr: operand BITSHIFTRIGHT operand  */
#line 1156 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpBitShiftRight, (yyvsp[0].expr)); }
#line 5072 "bison_parser.cpp"
    break;

  case 220: /* binary_expr: operand LIKE operand  */
#line 1157 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 5078 "bison_parser.cpp"
    break;

  case 221: /* binary_expr: operand NOT LIKE operand  */
#line 1158 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 5084 "bison_parser.cpp"
    break;

  case 222: /* binary_expr: operand ILIKE operand  */
#line 1159 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 5090 "bison_parser.cpp"
    break;

  case 223: /* binary_expr: operand CONCAT operand  */
#line 1160 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 5096 "bison_parser.cpp"
    break;

  case 224: /* logic_expr: expr AND expr  */
#line 1162 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 5102 "bison_parser.cpp"
    break;

  case 225: /* logic_expr: expr LOGICALAND expr  */
#line 1163 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 5108 "bison_parser.cpp"
    break;

  case 226: /* logic_expr: expr OR expr  */
#line 1164 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 5114 "bison_parser.cpp"
    break;

  case 227: /* logic_expr: expr LOGICALOR expr  */
#line 1165 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 5120 "bison_parser.cpp"
    break;

  case 228: /* in_expr: operand IN '(' expr_list ')'  */
#line 1167 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 5126 "bison_parser.cpp"
    break;

  case 229: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1168 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 5132 "bison_parser.cpp"
    break;

  case 230: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1169 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 5138 "bison_parser.cpp"
    break;

  case 231: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1170 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 5144 "bison_parser.cpp"
    break;

  case 232: /* case_expr: CASE expr case_list END  */
#line 1174 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 5150 "bison_parser.cpp"
    break;

  case 233: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1175 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 5156 "bison_parser.cpp"
    break;

  case 234: /* case_expr: CASE case_list END  */
#line 1176 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 5162 "bison_parser.cpp"
    break;

  case 235: /* case_expr: CASE case_list ELSE expr END  */
#line 1177 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 5168 "bison_parser.cpp"
    break;

  case 236: /* case_list: WHEN expr THEN expr  */
#line 1179 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5174 "bison_parser.cpp"
    break;

  case 237: /* case_list: case_list WHEN expr THEN expr  */
#line 1180 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5180 "bison_parser.cpp"
    break;

  case 238: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1182 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 5186 "bison_parser.cpp"
    break;

  case 239: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1183 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 5192 "bison_parser.cpp"
    break;

  case 240: /* comp_expr: operand '=' operand  */
#line 1185 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5198 "bison_parser.cpp"
    break;

  case 241: /* comp_expr: operand EQUALS operand  */
#line 1186 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5204 "bison_parser.cpp"
    break;

  case 242: /* comp_expr: operand NULLSAFEEQUALS operand  */
#line 1187 "bison_parser.y"
                                 { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNullSafeEquals, (yyvsp[0].expr)); }
#line 5210 "bison_parser.cpp"
    break;

  case 243: /* comp_expr: operand NOTEQUALS operand  */
#line 1188 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 5216 "bison_parser.cpp"
    break;

  case 244: /* comp_expr: operand '<' operand  */
#line 1189 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 5222 "bison_parser.cpp"
    break;

  case 245: /* comp_expr: operand '>' operand  */
#line 1190 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 5228 "bison_parser.cpp"
    break;

  case 246: /* comp_expr: operand LESSEQ operand  */
#line 1191 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 5234 "bison_parser.cpp"
    break;

  case 247: /* comp_expr: operand GREATEREQ operand  */
#line 1192 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 5240 "bison_parser.cpp"
    break;

  case 248: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1196 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5246 "bison_parser.cpp"
    break;

  case 249: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1197 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5252 "bison_parser.cpp"
    break;

  case 250: /* function_expr: IDENTIFIER '.' IDENTIFIER '(' ')' opt_window  */
#line 1198 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), (yyvsp[-5].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5258 "bison_parser.cpp"
    break;

  case 251: /* function_expr: IDENTIFIER '.' IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1199 "bison_parser.y"
                                                                      { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-7].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5264 "bison_parser.cpp"
    break;

  case 252: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1203 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 5270 "bison_parser.cpp"
    break;

  case 253: /* opt_window: %empty  */
#line 1204 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 5276 "bison_parser.cpp"
    break;

  case 254: /* opt_partition: PARTITION BY expr_list  */
#line 1206 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 5282 "bison_parser.cpp"
    break;

  case 255: /* opt_partition: %empty  */
#line 1207 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 5288 "bison_parser.cpp"
    break;

  case 256: /* opt_frame_clause: frame_type frame_bound  */
#line 1212 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 5294 "bison_parser.cpp"
    break;

  case 257: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1213 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 5300 "bison_parser.cpp"
    break;

  case 258: /* opt_frame_clause: %empty  */
#line 1214 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 5308 "bison_parser.cpp"
    break;

  case 259: /* frame_type: RANGE  */
#line 1218 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 5314 "bison_parser.cpp"
    break;

  case 260: /* frame_type: ROWS  */
#line 1219 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 5320 "bison_parser.cpp"
    break;

  case 261: /* frame_type: GROUPS  */
#line 1220 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 5326 "bison_parser.cpp"
    break;

  case 262: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1222 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5332 "bison_parser.cpp"
    break;

  case 263: /* frame_bound: INTVAL PRECEDING  */
#line 1223 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5338 "bison_parser.cpp"
    break;

  case 264: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1224 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5344 "bison_parser.cpp"
    break;

  case 265: /* frame_bound: INTVAL FOLLOWING  */
#line 1225 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5350 "bison_parser.cpp"
    break;

  case 266: /* frame_bound: CURRENT_ROW  */
#line 1226 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5356 "bison_parser.cpp"
    break;

  case 267: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1228 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5362 "bison_parser.cpp"
    break;

  case 268: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1230 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5368 "bison_parser.cpp"
    break;

  case 269: /* datetime_field: SECOND  */
#line 1232 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5374 "bison_parser.cpp"
    break;

  case 270: /* datetime_field: MINUTE  */
#line 1233 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5380 "bison_parser.cpp"
    break;

  case 271: /* datetime_field: HOUR  */
#line 1234 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5386 "bison_parser.cpp"
    break;

  case 272: /* datetime_field: DAY  */
#line 1235 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5392 "bison_parser.cpp"
    break;

  case 273: /* datetime_field: MONTH  */
#line 1236 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5398 "bison_parser.cpp"
    break;

  case 274: /* datetime_field: YEAR  */
#line 1237 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5404 "bison_parser.cpp"
    break;

  case 275: /* datetime_field_plural: SECONDS  */
#line 1239 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5410 "bison_parser.cpp"
    break;

  case 276: /* datetime_field_plural: MINUTES  */
#line 1240 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5416 "bison_parser.cpp"
    break;

  case 277: /* datetime_field_plural: HOURS  */
#line 1241 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5422 "bison_parser.cpp"
    break;

  case 278: /* datetime_field_plural: DAYS  */
#line 1242 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5428 "bison_parser.cpp"
    break;

  case 279: /* datetime_field_plural: MONTHS  */
#line 1243 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5434 "bison_parser.cpp"
    break;

  case 280: /* datetime_field_plural: YEARS  */
#line 1244 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5440 "bison_parser.cpp"
    break;

  case 283: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1248 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5446 "bison_parser.cpp"
    break;

  case 284: /* array_index: operand '[' int_literal ']'  */
#line 1250 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5452 "bison_parser.cpp"
    break;

  case 285: /* between_expr: operand BETWEEN operand AND operand  */
#line 1252 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5458 "bison_parser.cpp"
    break;

  case 286: /* between_expr: operand NOT BETWEEN operand AND operand  */
#line 1253 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeBetween((yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5464 "bison_parser.cpp"
    break;

  case 287: /* column_name: IDENTIFIER  */
#line 1255 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5470 "bison_parser.cpp"
    break;

  case 288: /* column_name: OFFSET  */
#line 1256 "bison_parser.y"
         { (yyval.expr) = Expr::makeColumnRef(strdup("offset")); }
#line 5476 "bison_parser.cpp"
    break;

  case 289: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1257 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5482 "bison_parser.cpp"
    break;

  case 290: /* column_name: IDENTIFIER '.' IDENTIFIER '.' IDENTIFIER  */
#line 1258 "bison_parser.y"
                                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[-4].sval), (yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5488 "bison_parser.cpp"
    break;

  case 291: /* column_name: '*'  */
#line 1259 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5494 "bison_parser.cpp"
    break;

  case 292: /* column_name: IDENTIFIER '.' '*'  */
#line 1260 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5500 "bison_parser.cpp"
    break;

  case 300: /* string_literal: STRING  */
#line 1264 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5506 "bison_parser.cpp"
    break;

  case 301: /* bool_literal: TRUE  */
#line 1266 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5512 "bison_parser.cpp"
    break;

  case 302: /* bool_literal: FALSE  */
#line 1267 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5518 "bison_parser.cpp"
    break;

  case 303: /* num_literal: FLOATVAL  */
#line 1269 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5524 "bison_parser.cpp"
    break;

  case 305: /* int_literal: INTVAL  */
#line 1272 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5530 "bison_parser.cpp"
    break;

  case 306: /* int_literal: BIGINTVAL  */
#line 1273 "bison_parser.y"
            { (yyval.expr) = Expr::makeLiteralIntString((yyvsp[0].sval)); }
#line 5536 "bison_parser.cpp"
    break;

  case 307: /* null_literal: NULL  */
#line 1275 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5542 "bison_parser.cpp"
    break;

  case 308: /* date_literal: DATE STRING  */
#line 1277 "bison_parser.y"
                           {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 5557 "bison_parser.cpp"
    break;

  case 309: /* interval_literal: INTVAL duration_field  */
#line 1288 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5563 "bison_parser.cpp"
    break;

  case 310: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1289 "bison_parser.y"
                                 {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 5579 "bison_parser.cpp"
    break;

  case 311: /* interval_literal: INTERVAL STRING  */
#line 1300 "bison_parser.y"
                  {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 5615 "bison_parser.cpp"
    break;

  case 312: /* param_expr: '?'  */
#line 1332 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5625 "bison_parser.cpp"
    break;

  case 314: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1341 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5636 "bison_parser.cpp"
    break;

  case 318: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1350 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5647 "bison_parser.cpp"
    break;

  case 319: /* table_ref_commalist: table_ref_atomic  */
#line 1357 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5656 "bison_parser.cpp"
    break;

  case 320: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1361 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5665 "bison_parser.cpp"
    break;

  case 321: /* table_ref_name: table_name opt_table_alias  */
#line 1366 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5677 "bison_parser.cpp"
    break;

  case 322: /* table_ref_name_no_alias: table_name  */
#line 1374 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5687 "bison_parser.cpp"
    break;

  case 323: /* table_name: IDENTIFIER  */
#line 1380 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5696 "bison_parser.cpp"
    break;

  case 324: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1384 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5705 "bison_parser.cpp"
    break;

  case 325: /* opt_index_name: IDENTIFIER  */
#line 1389 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5711 "bison_parser.cpp"
    break;

  case 326: /* opt_index_name: %empty  */
#line 1390 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5717 "bison_parser.cpp"
    break;

  case 328: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1392 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5723 "bison_parser.cpp"
    break;

  case 330: /* opt_table_alias: %empty  */
#line 1394 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5729 "bison_parser.cpp"
    break;

  case 331: /* alias: AS IDENTIFIER  */
#line 1396 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5735 "bison_parser.cpp"
    break;

  case 332: /* alias: IDENTIFIER  */
#line 1397 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5741 "bison_parser.cpp"
    break;

  case 334: /* opt_alias: %empty  */
#line 1399 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5747 "bison_parser.cpp"
    break;

  case 335: /* opt_locking_clause: opt_locking_clause_list  */
#line 1405 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5753 "bison_parser.cpp"
    break;

  case 336: /* opt_locking_clause: %empty  */
#line 1406 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5759 "bison_parser.cpp"
    break;

  case 337: /* opt_locking_clause_list: locking_clause  */
#line 1408 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5768 "bison_parser.cpp"
    break;

  case 338: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1412 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5777 "bison_parser.cpp"
    break;

  case 339: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1417 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5788 "bison_parser.cpp"
    break;

  case 340: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1423 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5799 "bison_parser.cpp"
    break;

  case 341: /* row_lock_mode: UPDATE  */
#line 1430 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5805 "bison_parser.cpp"
    break;

  case 342: /* row_lock_mode: NO KEY UPDATE  */
#line 1431 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5811 "bison_parser.cpp"
    break;

  case 343: /* row_lock_mode: SHARE  */
#line 1432 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5817 "bison_parser.cpp"
    break;

  case 344: /* row_lock_mode: KEY SHARE  */
#line 1433 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5823 "bison_parser.cpp"
    break;

  case 345: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1435 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5829 "bison_parser.cpp"
    break;

  case 346: /* opt_row_lock_policy: NOWAIT  */
#line 1436 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5835 "bison_parser.cpp"
    break;

  case 347: /* opt_row_lock_policy: %empty  */
#line 1437 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5841 "bison_parser.cpp"
    break;

  case 349: /* opt_with_clause: %empty  */
#line 1443 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5847 "bison_parser.cpp"
    break;

  case 350: /* with_clause: WITH with_description_list  */
#line 1445 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5853 "bison_parser.cpp"
    break;

  case 351: /* with_description_list: with_description  */
#line 1447 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5862 "bison_parser.cpp"
    break;

  case 352: /* with_description_list: with_description_list ',' with_description  */
#line 1451 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5871 "bison_parser.cpp"
    break;

  case 353: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1456 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5881 "bison_parser.cpp"
    break;

  case 354: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1466 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->natural = true;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5894 "bison_parser.cpp"
    break;

  case 355: /* join_clause: table_ref_atomic NATURAL natural_join_type JOIN nonjoin_table_ref_atomic  */
#line 1474 "bison_parser.y"
                                                                           {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-2].join_type);
  (yyval.table)->join->natural = true;
  (yyval.table)->join->left = (yyvsp[-4].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5907 "bison_parser.cpp"
    break;

  case 356: /* join_clause: table_ref_atomic CROSS JOIN nonjoin_table_ref_atomic  */
#line 1482 "bison_parser.y"
                                                       {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinCross;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5919 "bison_parser.cpp"
    break;

  case 357: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1489 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5932 "bison_parser.cpp"
    break;

  case 358: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1497 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5945 "bison_parser.cpp"
    break;

  case 359: /* opt_join_type: INNER  */
#line 1506 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5951 "bison_parser.cpp"
    break;

  case 360: /* opt_join_type: LEFT OUTER  */
#line 1507 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5957 "bison_parser.cpp"
    break;

  case 361: /* opt_join_type: LEFT  */
#line 1508 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5963 "bison_parser.cpp"
    break;

  case 362: /* opt_join_type: RIGHT OUTER  */
#line 1509 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5969 "bison_parser.cpp"
    break;

  case 363: /* opt_join_type: RIGHT  */
#line 1510 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5975 "bison_parser.cpp"
    break;

  case 364: /* opt_join_type: FULL OUTER  */
#line 1511 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5981 "bison_parser.cpp"
    break;

  case 365: /* opt_join_type: OUTER  */
#line 1512 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5987 "bison_parser.cpp"
    break;

  case 366: /* opt_join_type: FULL  */
#line 1513 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5993 "bison_parser.cpp"
    break;

  case 367: /* opt_join_type: %empty  */
#line 1514 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5999 "bison_parser.cpp"
    break;

  case 368: /* natural_join_type: INNER  */
#line 1516 "bison_parser.y"
                          { (yyval.join_type) = kJoinInner; }
#line 6005 "bison_parser.cpp"
    break;

  case 369: /* natural_join_type: LEFT OUTER  */
#line 1517 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 6011 "bison_parser.cpp"
    break;

  case 370: /* natural_join_type: LEFT  */
#line 1518 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 6017 "bison_parser.cpp"
    break;

  case 371: /* natural_join_type: RIGHT OUTER  */
#line 1519 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 6023 "bison_parser.cpp"
    break;

  case 372: /* natural_join_type: RIGHT  */
#line 1520 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 6029 "bison_parser.cpp"
    break;

  case 373: /* natural_join_type: FULL OUTER  */
#line 1521 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 6035 "bison_parser.cpp"
    break;

  case 374: /* natural_join_type: FULL  */
#line 1522 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 6041 "bison_parser.cpp"
    break;

  case 376: /* ident_commalist: IDENTIFIER  */
#line 1530 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 6050 "bison_parser.cpp"
    break;

  case 377: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1534 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 6059 "bison_parser.cpp"
    break;


#line 6063 "bison_parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != SQL_HSQL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1540 "bison_parser.y"


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

// clang-format on
