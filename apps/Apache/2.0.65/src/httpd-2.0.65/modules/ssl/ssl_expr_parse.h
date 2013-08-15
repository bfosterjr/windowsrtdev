/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum ssl_expr_yytokentype {
     T_TRUE = 258,
     T_FALSE = 259,
     T_DIGIT = 260,
     T_ID = 261,
     T_STRING = 262,
     T_REGEX = 263,
     T_REGEX_I = 264,
     T_FUNC_FILE = 265,
     T_OP_EQ = 266,
     T_OP_NE = 267,
     T_OP_LT = 268,
     T_OP_LE = 269,
     T_OP_GT = 270,
     T_OP_GE = 271,
     T_OP_REG = 272,
     T_OP_NRE = 273,
     T_OP_IN = 274,
     T_OP_OR = 275,
     T_OP_AND = 276,
     T_OP_NOT = 277
   };
#endif
/* Tokens.  */
#define T_TRUE 258
#define T_FALSE 259
#define T_DIGIT 260
#define T_ID 261
#define T_STRING 262
#define T_REGEX 263
#define T_REGEX_I 264
#define T_FUNC_FILE 265
#define T_OP_EQ 266
#define T_OP_NE 267
#define T_OP_LT 268
#define T_OP_LE 269
#define T_OP_GT 270
#define T_OP_GE 271
#define T_OP_REG 272
#define T_OP_NRE 273
#define T_OP_IN 274
#define T_OP_OR 275
#define T_OP_AND 276
#define T_OP_NOT 277




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 39 "ssl_expr_parse.y"

    char     *cpVal;
    ssl_expr *exVal;



/* Line 1685 of yacc.c  */
#line 102 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define ssl_expr_yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE ssl_expr_yylval;


