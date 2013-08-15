/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with ssl_expr_yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 35 "ssl_expr_parse.y"

#include "mod_ssl.h"


/* Line 189 of yacc.c  */
#line 77 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 39 "ssl_expr_parse.y"

    char     *cpVal;
    ssl_expr *exVal;



/* Line 214 of yacc.c  */
#line 164 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define ssl_expr_yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 176 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 ssl_expr_yytype_uint8;
#else
typedef unsigned char ssl_expr_yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 ssl_expr_yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char ssl_expr_yytype_int8;
#else
typedef short int ssl_expr_yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 ssl_expr_yytype_uint16;
#else
typedef unsigned short int ssl_expr_yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 ssl_expr_yytype_int16;
#else
typedef short int ssl_expr_yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int ssl_expr_yyi)
#else
static int
YYID (ssl_expr_yyi)
    int ssl_expr_yyi;
#endif
{
  return ssl_expr_yyi;
}
#endif

#if ! defined ssl_expr_yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined ssl_expr_yyoverflow || YYERROR_VERBOSE */


#if (! defined ssl_expr_yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union ssl_expr_yyalloc
{
  ssl_expr_yytype_int16 ssl_expr_yyss_alloc;
  YYSTYPE ssl_expr_yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union ssl_expr_yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (ssl_expr_yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T ssl_expr_yyi;				\
	  for (ssl_expr_yyi = 0; ssl_expr_yyi < (Count); ssl_expr_yyi++)	\
	    (To)[ssl_expr_yyi] = (From)[ssl_expr_yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T ssl_expr_yynewbytes;						\
	YYCOPY (&ssl_expr_yyptr->Stack_alloc, Stack, ssl_expr_yysize);			\
	Stack = &ssl_expr_yyptr->Stack_alloc;					\
	ssl_expr_yynewbytes = ssl_expr_yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	ssl_expr_yyptr += ssl_expr_yynewbytes / sizeof (*ssl_expr_yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   52

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  27
/* YYNRULES -- Number of states.  */
#define YYNSTATES  53

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? ssl_expr_yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const ssl_expr_yytype_uint8 ssl_expr_yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    28,     2,     2,
      23,    24,     2,     2,    27,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,     2,    26,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const ssl_expr_yytype_uint8 ssl_expr_yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    16,    20,    22,
      26,    30,    34,    38,    42,    46,    50,    56,    60,    64,
      66,    70,    72,    74,    79,    81,    83,    85
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const ssl_expr_yytype_int8 ssl_expr_yyrhs[] =
{
      30,     0,    -1,    31,    -1,     3,    -1,     4,    -1,    22,
      31,    -1,    31,    20,    31,    -1,    31,    21,    31,    -1,
      32,    -1,    23,    31,    24,    -1,    34,    11,    34,    -1,
      34,    12,    34,    -1,    34,    13,    34,    -1,    34,    14,
      34,    -1,    34,    15,    34,    -1,    34,    16,    34,    -1,
      34,    19,    25,    33,    26,    -1,    34,    17,    35,    -1,
      34,    18,    35,    -1,    34,    -1,    33,    27,    34,    -1,
       5,    -1,     7,    -1,    28,    25,     6,    26,    -1,    36,
      -1,     8,    -1,     9,    -1,    10,    23,     7,    24,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const ssl_expr_yytype_uint8 ssl_expr_yyrline[] =
{
       0,    82,    82,    85,    86,    87,    88,    89,    90,    91,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   105,
     106,   109,   110,   111,   112,   115,   124,   135
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const ssl_expr_yytname[] =
{
  "$end", "error", "$undefined", "T_TRUE", "T_FALSE", "T_DIGIT", "T_ID",
  "T_STRING", "T_REGEX", "T_REGEX_I", "T_FUNC_FILE", "T_OP_EQ", "T_OP_NE",
  "T_OP_LT", "T_OP_LE", "T_OP_GT", "T_OP_GE", "T_OP_REG", "T_OP_NRE",
  "T_OP_IN", "T_OP_OR", "T_OP_AND", "T_OP_NOT", "'('", "')'", "'{'", "'}'",
  "','", "'%'", "$accept", "root", "expr", "comparison", "words", "word",
  "regex", "funccall", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const ssl_expr_yytype_uint16 ssl_expr_yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    40,    41,   123,   125,    44,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const ssl_expr_yytype_uint8 ssl_expr_yyr1[] =
{
       0,    29,    30,    31,    31,    31,    31,    31,    31,    31,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    33,
      33,    34,    34,    34,    34,    35,    35,    36
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const ssl_expr_yytype_uint8 ssl_expr_yyr2[] =
{
       0,     2,     1,     1,     1,     2,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     5,     3,     3,     1,
       3,     1,     1,     4,     1,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const ssl_expr_yytype_uint8 ssl_expr_yydefact[] =
{
       0,     3,     4,    21,    22,     0,     0,     0,     0,     0,
       2,     8,     0,    24,     0,     5,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     6,     7,    10,    11,    12,    13,    14,
      15,    25,    26,    17,    18,     0,    27,    23,     0,    19,
      16,     0,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const ssl_expr_yytype_int8 ssl_expr_yydefgoto[] =
{
      -1,     9,    10,    11,    48,    12,    43,    13
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -22
static const ssl_expr_yytype_int8 ssl_expr_yypact[] =
{
       3,   -22,   -22,   -22,   -22,   -11,     3,     3,     2,    44,
      -1,   -22,    22,   -22,    38,   -22,    -3,    40,   -22,     3,
       3,     4,     4,     4,     4,     4,     4,    14,    14,    23,
      25,   -22,    21,    29,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,     4,   -22,   -22,    16,   -22,
     -22,     4,   -22
};

/* YYPGOTO[NTERM-NUM].  */
static const ssl_expr_yytype_int8 ssl_expr_yypgoto[] =
{
     -22,   -22,     9,   -22,   -22,   -21,    24,   -22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const ssl_expr_yytype_uint8 ssl_expr_yytable[] =
{
      35,    36,    37,    38,    39,    40,     1,     2,     3,     3,
       4,     4,    14,     5,     5,    15,    16,    19,    20,    19,
      20,    31,    41,    42,    49,     6,     7,    17,    33,    34,
      52,     8,     8,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    50,    51,    18,    30,    32,    47,    45,    46,
      20,     0,    44
};

static const ssl_expr_yytype_int8 ssl_expr_yycheck[] =
{
      21,    22,    23,    24,    25,    26,     3,     4,     5,     5,
       7,     7,    23,    10,    10,     6,     7,    20,    21,    20,
      21,    24,     8,     9,    45,    22,    23,    25,    19,    20,
      51,    28,    28,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    26,    27,     0,     7,     6,    26,    25,    24,
      21,    -1,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const ssl_expr_yytype_uint8 ssl_expr_yystos[] =
{
       0,     3,     4,     5,     7,    10,    22,    23,    28,    30,
      31,    32,    34,    36,    23,    31,    31,    25,     0,    20,
      21,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       7,    24,     6,    31,    31,    34,    34,    34,    34,    34,
      34,     8,     9,    35,    35,    25,    24,    26,    33,    34,
      26,    27,    34
};

#define ssl_expr_yyerrok		(ssl_expr_yyerrstatus = 0)
#define ssl_expr_yyclearin	(ssl_expr_yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto ssl_expr_yyacceptlab
#define YYABORT		goto ssl_expr_yyabortlab
#define YYERROR		goto ssl_expr_yyerrorlab


/* Like YYERROR except do call ssl_expr_yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto ssl_expr_yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!ssl_expr_yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (ssl_expr_yychar == YYEMPTY && ssl_expr_yylen == 1)				\
    {								\
      ssl_expr_yychar = (Token);						\
      ssl_expr_yylval = (Value);						\
      ssl_expr_yytoken = YYTRANSLATE (ssl_expr_yychar);				\
      YYPOPSTACK (1);						\
      goto ssl_expr_yybackup;						\
    }								\
  else								\
    {								\
      ssl_expr_yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `ssl_expr_yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX ssl_expr_yylex (YYLEX_PARAM)
#else
# define YYLEX ssl_expr_yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (ssl_expr_yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (ssl_expr_yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      ssl_expr_yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ssl_expr_yy_symbol_value_print (FILE *ssl_expr_yyoutput, int ssl_expr_yytype, YYSTYPE const * const ssl_expr_yyvaluep)
#else
static void
ssl_expr_yy_symbol_value_print (ssl_expr_yyoutput, ssl_expr_yytype, ssl_expr_yyvaluep)
    FILE *ssl_expr_yyoutput;
    int ssl_expr_yytype;
    YYSTYPE const * const ssl_expr_yyvaluep;
#endif
{
  if (!ssl_expr_yyvaluep)
    return;
# ifdef YYPRINT
  if (ssl_expr_yytype < YYNTOKENS)
    YYPRINT (ssl_expr_yyoutput, ssl_expr_yytoknum[ssl_expr_yytype], *ssl_expr_yyvaluep);
# else
  YYUSE (ssl_expr_yyoutput);
# endif
  switch (ssl_expr_yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ssl_expr_yy_symbol_print (FILE *ssl_expr_yyoutput, int ssl_expr_yytype, YYSTYPE const * const ssl_expr_yyvaluep)
#else
static void
ssl_expr_yy_symbol_print (ssl_expr_yyoutput, ssl_expr_yytype, ssl_expr_yyvaluep)
    FILE *ssl_expr_yyoutput;
    int ssl_expr_yytype;
    YYSTYPE const * const ssl_expr_yyvaluep;
#endif
{
  if (ssl_expr_yytype < YYNTOKENS)
    YYFPRINTF (ssl_expr_yyoutput, "token %s (", ssl_expr_yytname[ssl_expr_yytype]);
  else
    YYFPRINTF (ssl_expr_yyoutput, "nterm %s (", ssl_expr_yytname[ssl_expr_yytype]);

  ssl_expr_yy_symbol_value_print (ssl_expr_yyoutput, ssl_expr_yytype, ssl_expr_yyvaluep);
  YYFPRINTF (ssl_expr_yyoutput, ")");
}

/*------------------------------------------------------------------.
| ssl_expr_yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ssl_expr_yy_stack_print (ssl_expr_yytype_int16 *ssl_expr_yybottom, ssl_expr_yytype_int16 *ssl_expr_yytop)
#else
static void
ssl_expr_yy_stack_print (ssl_expr_yybottom, ssl_expr_yytop)
    ssl_expr_yytype_int16 *ssl_expr_yybottom;
    ssl_expr_yytype_int16 *ssl_expr_yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; ssl_expr_yybottom <= ssl_expr_yytop; ssl_expr_yybottom++)
    {
      int ssl_expr_yybot = *ssl_expr_yybottom;
      YYFPRINTF (stderr, " %d", ssl_expr_yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (ssl_expr_yydebug)							\
    ssl_expr_yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ssl_expr_yy_reduce_print (YYSTYPE *ssl_expr_yyvsp, int ssl_expr_yyrule)
#else
static void
ssl_expr_yy_reduce_print (ssl_expr_yyvsp, ssl_expr_yyrule)
    YYSTYPE *ssl_expr_yyvsp;
    int ssl_expr_yyrule;
#endif
{
  int ssl_expr_yynrhs = ssl_expr_yyr2[ssl_expr_yyrule];
  int ssl_expr_yyi;
  unsigned long int ssl_expr_yylno = ssl_expr_yyrline[ssl_expr_yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     ssl_expr_yyrule - 1, ssl_expr_yylno);
  /* The symbols being reduced.  */
  for (ssl_expr_yyi = 0; ssl_expr_yyi < ssl_expr_yynrhs; ssl_expr_yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", ssl_expr_yyi + 1);
      ssl_expr_yy_symbol_print (stderr, ssl_expr_yyrhs[ssl_expr_yyprhs[ssl_expr_yyrule] + ssl_expr_yyi],
		       &(ssl_expr_yyvsp[(ssl_expr_yyi + 1) - (ssl_expr_yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (ssl_expr_yydebug)				\
    ssl_expr_yy_reduce_print (ssl_expr_yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int ssl_expr_yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef ssl_expr_yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define ssl_expr_yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
ssl_expr_yystrlen (const char *ssl_expr_yystr)
#else
static YYSIZE_T
ssl_expr_yystrlen (ssl_expr_yystr)
    const char *ssl_expr_yystr;
#endif
{
  YYSIZE_T ssl_expr_yylen;
  for (ssl_expr_yylen = 0; ssl_expr_yystr[ssl_expr_yylen]; ssl_expr_yylen++)
    continue;
  return ssl_expr_yylen;
}
#  endif
# endif

# ifndef ssl_expr_yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define ssl_expr_yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
ssl_expr_yystpcpy (char *ssl_expr_yydest, const char *ssl_expr_yysrc)
#else
static char *
ssl_expr_yystpcpy (ssl_expr_yydest, ssl_expr_yysrc)
    char *ssl_expr_yydest;
    const char *ssl_expr_yysrc;
#endif
{
  char *ssl_expr_yyd = ssl_expr_yydest;
  const char *ssl_expr_yys = ssl_expr_yysrc;

  while ((*ssl_expr_yyd++ = *ssl_expr_yys++) != '\0')
    continue;

  return ssl_expr_yyd - 1;
}
#  endif
# endif

# ifndef ssl_expr_yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for ssl_expr_yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from ssl_expr_yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
ssl_expr_yytnamerr (char *ssl_expr_yyres, const char *ssl_expr_yystr)
{
  if (*ssl_expr_yystr == '"')
    {
      YYSIZE_T ssl_expr_yyn = 0;
      char const *ssl_expr_yyp = ssl_expr_yystr;

      for (;;)
	switch (*++ssl_expr_yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++ssl_expr_yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (ssl_expr_yyres)
	      ssl_expr_yyres[ssl_expr_yyn] = *ssl_expr_yyp;
	    ssl_expr_yyn++;
	    break;

	  case '"':
	    if (ssl_expr_yyres)
	      ssl_expr_yyres[ssl_expr_yyn] = '\0';
	    return ssl_expr_yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! ssl_expr_yyres)
    return ssl_expr_yystrlen (ssl_expr_yystr);

  return ssl_expr_yystpcpy (ssl_expr_yyres, ssl_expr_yystr) - ssl_expr_yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
ssl_expr_yysyntax_error (char *ssl_expr_yyresult, int ssl_expr_yystate, int ssl_expr_yychar)
{
  int ssl_expr_yyn = ssl_expr_yypact[ssl_expr_yystate];

  if (! (YYPACT_NINF < ssl_expr_yyn && ssl_expr_yyn <= YYLAST))
    return 0;
  else
    {
      int ssl_expr_yytype = YYTRANSLATE (ssl_expr_yychar);
      YYSIZE_T ssl_expr_yysize0 = ssl_expr_yytnamerr (0, ssl_expr_yytname[ssl_expr_yytype]);
      YYSIZE_T ssl_expr_yysize = ssl_expr_yysize0;
      YYSIZE_T ssl_expr_yysize1;
      int ssl_expr_yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *ssl_expr_yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int ssl_expr_yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *ssl_expr_yyfmt;
      char const *ssl_expr_yyf;
      static char const ssl_expr_yyunexpected[] = "syntax error, unexpected %s";
      static char const ssl_expr_yyexpecting[] = ", expecting %s";
      static char const ssl_expr_yyor[] = " or %s";
      char ssl_expr_yyformat[sizeof ssl_expr_yyunexpected
		    + sizeof ssl_expr_yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof ssl_expr_yyor - 1))];
      char const *ssl_expr_yyprefix = ssl_expr_yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int ssl_expr_yyxbegin = ssl_expr_yyn < 0 ? -ssl_expr_yyn : 0;

      /* Stay within bounds of both ssl_expr_yycheck and ssl_expr_yytname.  */
      int ssl_expr_yychecklim = YYLAST - ssl_expr_yyn + 1;
      int ssl_expr_yyxend = ssl_expr_yychecklim < YYNTOKENS ? ssl_expr_yychecklim : YYNTOKENS;
      int ssl_expr_yycount = 1;

      ssl_expr_yyarg[0] = ssl_expr_yytname[ssl_expr_yytype];
      ssl_expr_yyfmt = ssl_expr_yystpcpy (ssl_expr_yyformat, ssl_expr_yyunexpected);

      for (ssl_expr_yyx = ssl_expr_yyxbegin; ssl_expr_yyx < ssl_expr_yyxend; ++ssl_expr_yyx)
	if (ssl_expr_yycheck[ssl_expr_yyx + ssl_expr_yyn] == ssl_expr_yyx && ssl_expr_yyx != YYTERROR)
	  {
	    if (ssl_expr_yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		ssl_expr_yycount = 1;
		ssl_expr_yysize = ssl_expr_yysize0;
		ssl_expr_yyformat[sizeof ssl_expr_yyunexpected - 1] = '\0';
		break;
	      }
	    ssl_expr_yyarg[ssl_expr_yycount++] = ssl_expr_yytname[ssl_expr_yyx];
	    ssl_expr_yysize1 = ssl_expr_yysize + ssl_expr_yytnamerr (0, ssl_expr_yytname[ssl_expr_yyx]);
	    ssl_expr_yysize_overflow |= (ssl_expr_yysize1 < ssl_expr_yysize);
	    ssl_expr_yysize = ssl_expr_yysize1;
	    ssl_expr_yyfmt = ssl_expr_yystpcpy (ssl_expr_yyfmt, ssl_expr_yyprefix);
	    ssl_expr_yyprefix = ssl_expr_yyor;
	  }

      ssl_expr_yyf = YY_(ssl_expr_yyformat);
      ssl_expr_yysize1 = ssl_expr_yysize + ssl_expr_yystrlen (ssl_expr_yyf);
      ssl_expr_yysize_overflow |= (ssl_expr_yysize1 < ssl_expr_yysize);
      ssl_expr_yysize = ssl_expr_yysize1;

      if (ssl_expr_yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (ssl_expr_yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *ssl_expr_yyp = ssl_expr_yyresult;
	  int ssl_expr_yyi = 0;
	  while ((*ssl_expr_yyp = *ssl_expr_yyf) != '\0')
	    {
	      if (*ssl_expr_yyp == '%' && ssl_expr_yyf[1] == 's' && ssl_expr_yyi < ssl_expr_yycount)
		{
		  ssl_expr_yyp += ssl_expr_yytnamerr (ssl_expr_yyp, ssl_expr_yyarg[ssl_expr_yyi++]);
		  ssl_expr_yyf += 2;
		}
	      else
		{
		  ssl_expr_yyp++;
		  ssl_expr_yyf++;
		}
	    }
	}
      return ssl_expr_yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ssl_expr_yydestruct (const char *ssl_expr_yymsg, int ssl_expr_yytype, YYSTYPE *ssl_expr_yyvaluep)
#else
static void
ssl_expr_yydestruct (ssl_expr_yymsg, ssl_expr_yytype, ssl_expr_yyvaluep)
    const char *ssl_expr_yymsg;
    int ssl_expr_yytype;
    YYSTYPE *ssl_expr_yyvaluep;
#endif
{
  YYUSE (ssl_expr_yyvaluep);

  if (!ssl_expr_yymsg)
    ssl_expr_yymsg = "Deleting";
  YY_SYMBOL_PRINT (ssl_expr_yymsg, ssl_expr_yytype, ssl_expr_yyvaluep, ssl_expr_yylocationp);

  switch (ssl_expr_yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int ssl_expr_yyparse (void *YYPARSE_PARAM);
#else
int ssl_expr_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int ssl_expr_yyparse (void);
#else
int ssl_expr_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int ssl_expr_yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE ssl_expr_yylval;

/* Number of syntax errors so far.  */
int ssl_expr_yynerrs;



/*-------------------------.
| ssl_expr_yyparse or ssl_expr_yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
ssl_expr_yyparse (void *YYPARSE_PARAM)
#else
int
ssl_expr_yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
ssl_expr_yyparse (void)
#else
int
ssl_expr_yyparse ()

#endif
#endif
{


    int ssl_expr_yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int ssl_expr_yyerrstatus;

    /* The stacks and their tools:
       `ssl_expr_yyss': related to states.
       `ssl_expr_yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow ssl_expr_yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    ssl_expr_yytype_int16 ssl_expr_yyssa[YYINITDEPTH];
    ssl_expr_yytype_int16 *ssl_expr_yyss;
    ssl_expr_yytype_int16 *ssl_expr_yyssp;

    /* The semantic value stack.  */
    YYSTYPE ssl_expr_yyvsa[YYINITDEPTH];
    YYSTYPE *ssl_expr_yyvs;
    YYSTYPE *ssl_expr_yyvsp;

    YYSIZE_T ssl_expr_yystacksize;

  int ssl_expr_yyn;
  int ssl_expr_yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int ssl_expr_yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE ssl_expr_yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char ssl_expr_yymsgbuf[128];
  char *ssl_expr_yymsg = ssl_expr_yymsgbuf;
  YYSIZE_T ssl_expr_yymsg_alloc = sizeof ssl_expr_yymsgbuf;
#endif

#define YYPOPSTACK(N)   (ssl_expr_yyvsp -= (N), ssl_expr_yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int ssl_expr_yylen = 0;

  ssl_expr_yytoken = 0;
  ssl_expr_yyss = ssl_expr_yyssa;
  ssl_expr_yyvs = ssl_expr_yyvsa;
  ssl_expr_yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  ssl_expr_yystate = 0;
  ssl_expr_yyerrstatus = 0;
  ssl_expr_yynerrs = 0;
  ssl_expr_yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  ssl_expr_yyssp = ssl_expr_yyss;
  ssl_expr_yyvsp = ssl_expr_yyvs;

  goto ssl_expr_yysetstate;

/*------------------------------------------------------------.
| ssl_expr_yynewstate -- Push a new state, which is found in ssl_expr_yystate.  |
`------------------------------------------------------------*/
 ssl_expr_yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  ssl_expr_yyssp++;

 ssl_expr_yysetstate:
  *ssl_expr_yyssp = ssl_expr_yystate;

  if (ssl_expr_yyss + ssl_expr_yystacksize - 1 <= ssl_expr_yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T ssl_expr_yysize = ssl_expr_yyssp - ssl_expr_yyss + 1;

#ifdef ssl_expr_yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *ssl_expr_yyvs1 = ssl_expr_yyvs;
	ssl_expr_yytype_int16 *ssl_expr_yyss1 = ssl_expr_yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if ssl_expr_yyoverflow is a macro.  */
	ssl_expr_yyoverflow (YY_("memory exhausted"),
		    &ssl_expr_yyss1, ssl_expr_yysize * sizeof (*ssl_expr_yyssp),
		    &ssl_expr_yyvs1, ssl_expr_yysize * sizeof (*ssl_expr_yyvsp),
		    &ssl_expr_yystacksize);

	ssl_expr_yyss = ssl_expr_yyss1;
	ssl_expr_yyvs = ssl_expr_yyvs1;
      }
#else /* no ssl_expr_yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto ssl_expr_yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= ssl_expr_yystacksize)
	goto ssl_expr_yyexhaustedlab;
      ssl_expr_yystacksize *= 2;
      if (YYMAXDEPTH < ssl_expr_yystacksize)
	ssl_expr_yystacksize = YYMAXDEPTH;

      {
	ssl_expr_yytype_int16 *ssl_expr_yyss1 = ssl_expr_yyss;
	union ssl_expr_yyalloc *ssl_expr_yyptr =
	  (union ssl_expr_yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (ssl_expr_yystacksize));
	if (! ssl_expr_yyptr)
	  goto ssl_expr_yyexhaustedlab;
	YYSTACK_RELOCATE (ssl_expr_yyss_alloc, ssl_expr_yyss);
	YYSTACK_RELOCATE (ssl_expr_yyvs_alloc, ssl_expr_yyvs);
#  undef YYSTACK_RELOCATE
	if (ssl_expr_yyss1 != ssl_expr_yyssa)
	  YYSTACK_FREE (ssl_expr_yyss1);
      }
# endif
#endif /* no ssl_expr_yyoverflow */

      ssl_expr_yyssp = ssl_expr_yyss + ssl_expr_yysize - 1;
      ssl_expr_yyvsp = ssl_expr_yyvs + ssl_expr_yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) ssl_expr_yystacksize));

      if (ssl_expr_yyss + ssl_expr_yystacksize - 1 <= ssl_expr_yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", ssl_expr_yystate));

  if (ssl_expr_yystate == YYFINAL)
    YYACCEPT;

  goto ssl_expr_yybackup;

/*-----------.
| ssl_expr_yybackup.  |
`-----------*/
ssl_expr_yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  ssl_expr_yyn = ssl_expr_yypact[ssl_expr_yystate];
  if (ssl_expr_yyn == YYPACT_NINF)
    goto ssl_expr_yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (ssl_expr_yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      ssl_expr_yychar = YYLEX;
    }

  if (ssl_expr_yychar <= YYEOF)
    {
      ssl_expr_yychar = ssl_expr_yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      ssl_expr_yytoken = YYTRANSLATE (ssl_expr_yychar);
      YY_SYMBOL_PRINT ("Next token is", ssl_expr_yytoken, &ssl_expr_yylval, &ssl_expr_yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  ssl_expr_yyn += ssl_expr_yytoken;
  if (ssl_expr_yyn < 0 || YYLAST < ssl_expr_yyn || ssl_expr_yycheck[ssl_expr_yyn] != ssl_expr_yytoken)
    goto ssl_expr_yydefault;
  ssl_expr_yyn = ssl_expr_yytable[ssl_expr_yyn];
  if (ssl_expr_yyn <= 0)
    {
      if (ssl_expr_yyn == 0 || ssl_expr_yyn == YYTABLE_NINF)
	goto ssl_expr_yyerrlab;
      ssl_expr_yyn = -ssl_expr_yyn;
      goto ssl_expr_yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (ssl_expr_yyerrstatus)
    ssl_expr_yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", ssl_expr_yytoken, &ssl_expr_yylval, &ssl_expr_yylloc);

  /* Discard the shifted token.  */
  ssl_expr_yychar = YYEMPTY;

  ssl_expr_yystate = ssl_expr_yyn;
  *++ssl_expr_yyvsp = ssl_expr_yylval;

  goto ssl_expr_yynewstate;


/*-----------------------------------------------------------.
| ssl_expr_yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
ssl_expr_yydefault:
  ssl_expr_yyn = ssl_expr_yydefact[ssl_expr_yystate];
  if (ssl_expr_yyn == 0)
    goto ssl_expr_yyerrlab;
  goto ssl_expr_yyreduce;


/*-----------------------------.
| ssl_expr_yyreduce -- Do a reduction.  |
`-----------------------------*/
ssl_expr_yyreduce:
  /* ssl_expr_yyn is the number of a rule to reduce with.  */
  ssl_expr_yylen = ssl_expr_yyr2[ssl_expr_yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  ssl_expr_yyval = ssl_expr_yyvsp[1-ssl_expr_yylen];


  YY_REDUCE_PRINT (ssl_expr_yyn);
  switch (ssl_expr_yyn)
    {
        case 2:

/* Line 1464 of yacc.c  */
#line 82 "ssl_expr_parse.y"
    { ssl_expr_info.expr = (ssl_expr_yyvsp[(1) - (1)].exVal); }
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 85 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_True,  NULL, NULL); }
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 86 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_False, NULL, NULL); }
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 87 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_Not,   (ssl_expr_yyvsp[(2) - (2)].exVal),   NULL); }
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 88 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_Or,    (ssl_expr_yyvsp[(1) - (3)].exVal),   (ssl_expr_yyvsp[(3) - (3)].exVal));   }
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 89 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_And,   (ssl_expr_yyvsp[(1) - (3)].exVal),   (ssl_expr_yyvsp[(3) - (3)].exVal));   }
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 90 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_Comp,  (ssl_expr_yyvsp[(1) - (1)].exVal),   NULL); }
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 91 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = (ssl_expr_yyvsp[(2) - (3)].exVal); }
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 94 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_EQ,  (ssl_expr_yyvsp[(1) - (3)].exVal), (ssl_expr_yyvsp[(3) - (3)].exVal)); }
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 95 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_NE,  (ssl_expr_yyvsp[(1) - (3)].exVal), (ssl_expr_yyvsp[(3) - (3)].exVal)); }
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 96 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_LT,  (ssl_expr_yyvsp[(1) - (3)].exVal), (ssl_expr_yyvsp[(3) - (3)].exVal)); }
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 97 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_LE,  (ssl_expr_yyvsp[(1) - (3)].exVal), (ssl_expr_yyvsp[(3) - (3)].exVal)); }
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 98 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_GT,  (ssl_expr_yyvsp[(1) - (3)].exVal), (ssl_expr_yyvsp[(3) - (3)].exVal)); }
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 99 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_GE,  (ssl_expr_yyvsp[(1) - (3)].exVal), (ssl_expr_yyvsp[(3) - (3)].exVal)); }
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 100 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_IN,  (ssl_expr_yyvsp[(1) - (5)].exVal), (ssl_expr_yyvsp[(4) - (5)].exVal)); }
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 101 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_REG, (ssl_expr_yyvsp[(1) - (3)].exVal), (ssl_expr_yyvsp[(3) - (3)].exVal)); }
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 102 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_NRE, (ssl_expr_yyvsp[(1) - (3)].exVal), (ssl_expr_yyvsp[(3) - (3)].exVal)); }
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 105 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_ListElement, (ssl_expr_yyvsp[(1) - (1)].exVal), NULL); }
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 106 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_ListElement, (ssl_expr_yyvsp[(3) - (3)].exVal), (ssl_expr_yyvsp[(1) - (3)].exVal));   }
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 109 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_Digit,  (ssl_expr_yyvsp[(1) - (1)].cpVal), NULL); }
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 110 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_String, (ssl_expr_yyvsp[(1) - (1)].cpVal), NULL); }
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 111 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = ssl_expr_make(op_Var,    (ssl_expr_yyvsp[(3) - (4)].cpVal), NULL); }
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 112 "ssl_expr_parse.y"
    { (ssl_expr_yyval.exVal) = (ssl_expr_yyvsp[(1) - (1)].exVal); }
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 115 "ssl_expr_parse.y"
    { 
                regex_t *regex;
                if ((regex = ap_pregcomp(ssl_expr_info.pool, (ssl_expr_yyvsp[(1) - (1)].cpVal), 
                                         REG_EXTENDED|REG_NOSUB)) == NULL) {
                    ssl_expr_error = "Failed to compile regular expression";
                    YYERROR;
                }
                (ssl_expr_yyval.exVal) = ssl_expr_make(op_Regex, regex, NULL);
            }
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 124 "ssl_expr_parse.y"
    {
                regex_t *regex;
                if ((regex = ap_pregcomp(ssl_expr_info.pool, (ssl_expr_yyvsp[(1) - (1)].cpVal), 
                                         REG_EXTENDED|REG_NOSUB|REG_ICASE)) == NULL) {
                    ssl_expr_error = "Failed to compile regular expression";
                    YYERROR;
                }
                (ssl_expr_yyval.exVal) = ssl_expr_make(op_Regex, regex, NULL);
            }
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 135 "ssl_expr_parse.y"
    { 
               ssl_expr *args = ssl_expr_make(op_ListElement, (ssl_expr_yyvsp[(3) - (4)].cpVal), NULL);
               (ssl_expr_yyval.exVal) = ssl_expr_make(op_Func, "file", args);
            }
    break;



/* Line 1464 of yacc.c  */
#line 1612 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", ssl_expr_yyr1[ssl_expr_yyn], &ssl_expr_yyval, &ssl_expr_yyloc);

  YYPOPSTACK (ssl_expr_yylen);
  ssl_expr_yylen = 0;
  YY_STACK_PRINT (ssl_expr_yyss, ssl_expr_yyssp);

  *++ssl_expr_yyvsp = ssl_expr_yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  ssl_expr_yyn = ssl_expr_yyr1[ssl_expr_yyn];

  ssl_expr_yystate = ssl_expr_yypgoto[ssl_expr_yyn - YYNTOKENS] + *ssl_expr_yyssp;
  if (0 <= ssl_expr_yystate && ssl_expr_yystate <= YYLAST && ssl_expr_yycheck[ssl_expr_yystate] == *ssl_expr_yyssp)
    ssl_expr_yystate = ssl_expr_yytable[ssl_expr_yystate];
  else
    ssl_expr_yystate = ssl_expr_yydefgoto[ssl_expr_yyn - YYNTOKENS];

  goto ssl_expr_yynewstate;


/*------------------------------------.
| ssl_expr_yyerrlab -- here on detecting error |
`------------------------------------*/
ssl_expr_yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!ssl_expr_yyerrstatus)
    {
      ++ssl_expr_yynerrs;
#if ! YYERROR_VERBOSE
      ssl_expr_yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T ssl_expr_yysize = ssl_expr_yysyntax_error (0, ssl_expr_yystate, ssl_expr_yychar);
	if (ssl_expr_yymsg_alloc < ssl_expr_yysize && ssl_expr_yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T ssl_expr_yyalloc = 2 * ssl_expr_yysize;
	    if (! (ssl_expr_yysize <= ssl_expr_yyalloc && ssl_expr_yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      ssl_expr_yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (ssl_expr_yymsg != ssl_expr_yymsgbuf)
	      YYSTACK_FREE (ssl_expr_yymsg);
	    ssl_expr_yymsg = (char *) YYSTACK_ALLOC (ssl_expr_yyalloc);
	    if (ssl_expr_yymsg)
	      ssl_expr_yymsg_alloc = ssl_expr_yyalloc;
	    else
	      {
		ssl_expr_yymsg = ssl_expr_yymsgbuf;
		ssl_expr_yymsg_alloc = sizeof ssl_expr_yymsgbuf;
	      }
	  }

	if (0 < ssl_expr_yysize && ssl_expr_yysize <= ssl_expr_yymsg_alloc)
	  {
	    (void) ssl_expr_yysyntax_error (ssl_expr_yymsg, ssl_expr_yystate, ssl_expr_yychar);
	    ssl_expr_yyerror (ssl_expr_yymsg);
	  }
	else
	  {
	    ssl_expr_yyerror (YY_("syntax error"));
	    if (ssl_expr_yysize != 0)
	      goto ssl_expr_yyexhaustedlab;
	  }
      }
#endif
    }



  if (ssl_expr_yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (ssl_expr_yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (ssl_expr_yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  ssl_expr_yydestruct ("Error: discarding",
		      ssl_expr_yytoken, &ssl_expr_yylval);
	  ssl_expr_yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto ssl_expr_yyerrlab1;


/*---------------------------------------------------.
| ssl_expr_yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
ssl_expr_yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label ssl_expr_yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto ssl_expr_yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (ssl_expr_yylen);
  ssl_expr_yylen = 0;
  YY_STACK_PRINT (ssl_expr_yyss, ssl_expr_yyssp);
  ssl_expr_yystate = *ssl_expr_yyssp;
  goto ssl_expr_yyerrlab1;


/*-------------------------------------------------------------.
| ssl_expr_yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
ssl_expr_yyerrlab1:
  ssl_expr_yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      ssl_expr_yyn = ssl_expr_yypact[ssl_expr_yystate];
      if (ssl_expr_yyn != YYPACT_NINF)
	{
	  ssl_expr_yyn += YYTERROR;
	  if (0 <= ssl_expr_yyn && ssl_expr_yyn <= YYLAST && ssl_expr_yycheck[ssl_expr_yyn] == YYTERROR)
	    {
	      ssl_expr_yyn = ssl_expr_yytable[ssl_expr_yyn];
	      if (0 < ssl_expr_yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (ssl_expr_yyssp == ssl_expr_yyss)
	YYABORT;


      ssl_expr_yydestruct ("Error: popping",
		  ssl_expr_yystos[ssl_expr_yystate], ssl_expr_yyvsp);
      YYPOPSTACK (1);
      ssl_expr_yystate = *ssl_expr_yyssp;
      YY_STACK_PRINT (ssl_expr_yyss, ssl_expr_yyssp);
    }

  *++ssl_expr_yyvsp = ssl_expr_yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", ssl_expr_yystos[ssl_expr_yyn], ssl_expr_yyvsp, ssl_expr_yylsp);

  ssl_expr_yystate = ssl_expr_yyn;
  goto ssl_expr_yynewstate;


/*-------------------------------------.
| ssl_expr_yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
ssl_expr_yyacceptlab:
  ssl_expr_yyresult = 0;
  goto ssl_expr_yyreturn;

/*-----------------------------------.
| ssl_expr_yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
ssl_expr_yyabortlab:
  ssl_expr_yyresult = 1;
  goto ssl_expr_yyreturn;

#if !defined(ssl_expr_yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| ssl_expr_yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
ssl_expr_yyexhaustedlab:
  ssl_expr_yyerror (YY_("memory exhausted"));
  ssl_expr_yyresult = 2;
  /* Fall through.  */
#endif

ssl_expr_yyreturn:
  if (ssl_expr_yychar != YYEMPTY)
     ssl_expr_yydestruct ("Cleanup: discarding lookahead",
		 ssl_expr_yytoken, &ssl_expr_yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (ssl_expr_yylen);
  YY_STACK_PRINT (ssl_expr_yyss, ssl_expr_yyssp);
  while (ssl_expr_yyssp != ssl_expr_yyss)
    {
      ssl_expr_yydestruct ("Cleanup: popping",
		  ssl_expr_yystos[*ssl_expr_yyssp], ssl_expr_yyvsp);
      YYPOPSTACK (1);
    }
#ifndef ssl_expr_yyoverflow
  if (ssl_expr_yyss != ssl_expr_yyssa)
    YYSTACK_FREE (ssl_expr_yyss);
#endif
#if YYERROR_VERBOSE
  if (ssl_expr_yymsg != ssl_expr_yymsgbuf)
    YYSTACK_FREE (ssl_expr_yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (ssl_expr_yyresult);
}



/* Line 1684 of yacc.c  */
#line 141 "ssl_expr_parse.y"


int ssl_expr_yyerror(char *s)
{
    ssl_expr_error = s;
    return 2;
}


