
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

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
#line 1 "ztwo.y"


# include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>


int yylex(void);
void yyerror(char*);
int alredyDeclared[500];
char var[500][20]; 
int record_int[500];
double record_double[500];
char *record_text[500];
int arr_int[10000];
double arr_real[10000];
int maincase,subcase;
double dmaincase, dsubcase;

int i, temp=0, aisize=0, adsize=0;
int check_var(char *v)
{
    for(i=0;i<temp;i++)
    {
        if(strcmp(v,var[i])==0)
        {
            return i;
        }
    }
    return -1;
}




/* Line 189 of yacc.c  */
#line 114 "ztwo.tab.c"

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
   enum yytokentype {
     INT = 258,
     DOUBLE = 259,
     TEXT = 260,
     STRT = 261,
     END = 262,
     NL = 263,
     ASGN = 264,
     SLC = 265,
     MLC = 266,
     VAR = 267,
     STRING = 268,
     SM = 269,
     CM = 270,
     INT_NUM = 271,
     REAL_NUM = 272,
     ARR = 273,
     ALB = 274,
     ARB = 275,
     LP = 276,
     RP = 277,
     PRINT = 278,
     DIVIDER = 279,
     SCAN = 280,
     ADD = 281,
     SUB = 282,
     MUL = 283,
     DIV = 284,
     MOD = 285,
     POWER = 286,
     ABS = 287,
     FACT = 288,
     INC = 289,
     DEC = 290,
     EQU = 291,
     GRT = 292,
     LES = 293,
     GRT_EQU = 294,
     LES_EQU = 295,
     NOT_EQU = 296,
     OR = 297,
     AND = 298,
     NOT = 299,
     IF = 300,
     ELSE = 301,
     ELIF = 302,
     LB = 303,
     RB = 304,
     SWITCH = 305,
     CASE = 306,
     DEFAULT = 307,
     CLN = 308,
     FROM = 309,
     WHILE = 310,
     DO = 311,
     RANGE = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 40 "ztwo.y"

  int integer;
  double real;
  char *text;



/* Line 214 of yacc.c  */
#line 215 "ztwo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 227 "ztwo.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
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
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  260

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    14,    16,    18,    20,
      23,    26,    29,    32,    34,    37,    40,    43,    45,    47,
      51,    57,    59,    63,    67,    73,    77,    79,    83,    89,
      93,    95,   102,   109,   113,   115,   119,   123,   125,   132,
     139,   146,   153,   160,   166,   168,   170,   173,   176,   183,
     190,   197,   203,   205,   213,   219,   222,   229,   231,   234,
     242,   244,   246,   248,   260,   271,   279,   288,   290,   292,
     294,   300,   306,   308,   312,   314,   316,   318,   320,   322,
     324,   329,   334,   337,   340,   344,   348,   352,   356,   360,
     364,   367,   370,   373,   376,   379,   383,   387,   391,   395,
     399,   403,   407,   411
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,     6,    60,     7,    -1,    61,    -1,    60,
      61,    -1,    14,    -1,    10,    -1,    11,    -1,     8,    -1,
      62,    14,    -1,    68,    14,    -1,    86,    14,    -1,    70,
      14,    -1,    83,    -1,     3,    63,    -1,     4,    64,    -1,
       5,    65,    -1,    66,    -1,    67,    -1,    63,    15,    12,
      -1,    63,    15,    12,     9,    86,    -1,    12,    -1,    12,
       9,    86,    -1,    64,    15,    12,    -1,    64,    15,    12,
       9,    86,    -1,    12,     9,    86,    -1,    12,    -1,    65,
      15,    12,    -1,    65,    15,    12,     9,    13,    -1,    12,
       9,    13,    -1,    12,    -1,     3,    18,    12,    19,    16,
      20,    -1,     4,    18,    12,    19,    16,    20,    -1,    68,
      15,    69,    -1,    69,    -1,    12,     9,    86,    -1,    12,
       9,    13,    -1,    70,    -1,    12,    19,    16,    20,     9,
      86,    -1,    12,    19,    12,    20,     9,    86,    -1,    50,
      16,    53,    48,    72,    49,    -1,    50,    17,    53,    48,
      72,    49,    -1,    50,    13,    53,    48,    72,    49,    -1,
      50,    12,    53,    72,    49,    -1,    12,    -1,    73,    -1,
      73,    74,    -1,    73,    72,    -1,    51,    16,    53,    48,
      60,    49,    -1,    51,    17,    53,    48,    60,    49,    -1,
      51,    13,    53,    48,    60,    49,    -1,    52,    53,    48,
      60,    49,    -1,    76,    -1,    45,    19,    86,    20,    48,
      60,    49,    -1,    76,    46,    48,    60,    49,    -1,    76,
      77,    -1,    76,    77,    46,    48,    60,    49,    -1,    78,
      -1,    78,    77,    -1,    47,    19,    86,    20,    48,    60,
      49,    -1,    80,    -1,    81,    -1,    82,    -1,    54,    19,
      68,    24,    86,    24,    86,    20,    48,    60,    49,    -1,
      54,    19,    57,    16,    24,    16,    20,    48,    60,    49,
      -1,    55,    19,    86,    20,    48,    60,    49,    -1,    56,
      48,    60,    49,    55,    19,    86,    20,    -1,    75,    -1,
      71,    -1,    79,    -1,    23,    21,    84,    22,    14,    -1,
      25,    21,    12,    22,    14,    -1,    85,    -1,    84,    24,
      85,    -1,    86,    -1,    13,    -1,    12,    -1,    16,    -1,
      17,    -1,    12,    -1,    12,    19,    16,    20,    -1,    12,
      19,    12,    20,    -1,    32,    86,    -1,    33,    86,    -1,
      86,    26,    86,    -1,    86,    27,    86,    -1,    86,    28,
      86,    -1,    86,    29,    86,    -1,    86,    30,    86,    -1,
      86,    31,    86,    -1,    34,    12,    -1,    35,    12,    -1,
      12,    34,    -1,    12,    35,    -1,    44,    86,    -1,    86,
      38,    86,    -1,    86,    37,    86,    -1,    86,    40,    86,
      -1,    86,    39,    86,    -1,    86,    36,    86,    -1,    86,
      41,    86,    -1,    86,    42,    86,    -1,    86,    43,    86,
      -1,    21,    86,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    82,    83,    86,    87,    90,    93,    94,
      95,    96,    97,    98,   100,   101,   102,   103,   104,   108,
     120,   140,   153,   177,   190,   212,   234,   249,   262,   287,
     310,   325,   346,   369,   370,   372,   394,   408,   411,   437,
     490,   497,   502,   508,   512,   537,   538,   539,   542,   553,
     561,   567,   573,   576,   583,   586,   587,   590,   591,   594,
     598,   599,   600,   602,   607,   619,   630,   643,   644,   645,
     646,   649,   682,   683,   686,   689,   696,   728,   729,   730,
     743,   771,   817,   818,   836,   837,   838,   839,   850,   851,
     854,   873,   895,   914,   933,   937,   944,   951,   958,   965,
     972,   979,   986,   993
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "DOUBLE", "TEXT", "STRT", "END",
  "NL", "ASGN", "SLC", "MLC", "VAR", "STRING", "SM", "CM", "INT_NUM",
  "REAL_NUM", "ARR", "ALB", "ARB", "LP", "RP", "PRINT", "DIVIDER", "SCAN",
  "ADD", "SUB", "MUL", "DIV", "MOD", "POWER", "ABS", "FACT", "INC", "DEC",
  "EQU", "GRT", "LES", "GRT_EQU", "LES_EQU", "NOT_EQU", "OR", "AND", "NOT",
  "IF", "ELSE", "ELIF", "LB", "RB", "SWITCH", "CASE", "DEFAULT", "CLN",
  "FROM", "WHILE", "DO", "RANGE", "$accept", "program", "statements",
  "statement", "declaration", "int_ids", "real_ids", "text_ids",
  "array_int", "array_real", "assignment", "asgn_stmt", "assign_array",
  "switch_stmts", "case_stmts", "case_stmt", "def_stmt", "cond_stmts",
  "if_stmt", "elif_stmts", "elif_stmt", "loop_stmts", "for_loop",
  "while_loop", "dowhile_loop", "special", "all", "printtype", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    64,    64,    64,    65,    65,    65,
      65,    66,    67,    68,    68,    69,    69,    69,    70,    70,
      71,    71,    71,    71,    71,    72,    72,    72,    73,    73,
      73,    74,    75,    76,    76,    76,    76,    77,    77,    78,
      79,    79,    79,    80,    80,    81,    82,    83,    83,    83,
      83,    83,    84,    84,    85,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     2,     2,     2,     1,     1,     3,
       5,     1,     3,     3,     5,     3,     1,     3,     5,     3,
       1,     6,     6,     3,     1,     3,     3,     1,     6,     6,
       6,     6,     6,     5,     1,     1,     2,     2,     6,     6,
       6,     5,     1,     7,     5,     2,     6,     1,     2,     7,
       1,     1,     1,    11,    10,     7,     8,     1,     1,     1,
       5,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     4,     2,     2,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     8,     6,     7,    44,
       5,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,    17,
      18,     0,    34,    37,    68,    67,    52,    69,    60,    61,
      62,    13,     0,     1,    21,     0,    14,    26,     0,    15,
      30,    16,     0,     0,    92,    93,    79,     0,     0,     0,
      82,    83,    90,    91,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     4,     9,    10,     0,    12,     0,
       0,    55,    57,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    35,     0,     0,
       0,   103,    79,    75,     0,    72,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,    33,
       0,     0,     0,    58,    84,    85,    86,    87,    88,    89,
      99,    96,    95,    98,    97,   100,   101,   102,    22,     0,
      19,    25,     0,    23,    29,    27,    81,    80,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    80,    70,    73,    71,
       0,     0,     0,     0,    43,     0,    47,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
      31,    20,    32,    24,    28,    39,    38,     0,     0,     0,
       0,     0,    42,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    56,    53,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      59,    50,    48,    49,    51,     0,     0,    64,     0,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    26,    27,    28,    46,    49,    51,    29,    30,
      31,    32,    33,    34,   165,   166,   197,    35,    36,    81,
      82,    37,    38,    39,    40,    41,   114,   115,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -69
static const yytype_int16 yypact[] =
{
      -3,   817,     8,    12,    45,    44,   -69,   -69,   -69,   171,
     -69,   -69,   -69,   848,    40,    74,   848,   848,    86,    91,
     848,    95,    80,    97,   117,    57,    15,   -69,   104,   -69,
     -69,   141,   -69,   130,   -69,   -69,    27,   -69,   -69,   -69,
     -69,   -69,   870,   -69,   144,   136,   142,   155,   150,   156,
     164,   160,   126,     0,   -69,   -69,    18,  1012,   842,   166,
    1050,  1050,   -69,   -69,  1133,   848,   134,   151,   162,   169,
     -11,   848,   817,   -69,   -69,   -69,   -69,   174,   -69,   176,
     206,   184,   189,   -69,   848,   848,   848,   848,   848,   848,
     848,   848,   848,   848,   848,   848,   848,   848,   848,   219,
     229,   848,   224,   230,   232,   235,   -69,  1050,   231,   233,
       5,   -69,    20,   -69,    19,   -69,  1050,   227,   894,   199,
     204,   211,   212,    -4,   238,   -13,   -69,   918,    96,   -69,
     817,   848,   213,   -69,  1067,  1083,  1098,  1112,  1125,  1133,
      25,   153,  1141,    -8,    84,   139,   220,   -69,  1050,   246,
     255,  1050,   249,   257,   -69,   260,   261,   262,   254,   256,
     269,   842,   270,   242,    59,   226,   133,   199,   199,   199,
      99,   268,   848,   247,   241,   223,   942,   817,   266,   848,
     279,   848,   284,   848,   848,   -69,   -69,   -69,   -69,   -69,
     817,   248,   250,   251,   -69,   252,   -69,   -69,   258,   259,
     264,   286,   294,   299,  1032,   817,   297,   -69,   271,   277,
     -69,  1050,   -69,  1050,   -69,  1050,  1050,   331,   272,   275,
     276,   280,   -69,   -69,   -69,   261,   262,   298,   848,   385,
     848,   817,   -69,   -69,   817,   817,   817,   817,   281,   966,
     -69,   990,   439,   493,   547,   601,   655,   817,   282,   -69,
     -69,   -69,   -69,   -69,   -69,   709,   817,   -69,   763,   -69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -68,   -26,   -69,   -69,   -69,   -69,   -69,   -69,
     267,   240,   -63,   -69,   -34,   -69,   -69,   -69,   -69,   243,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   177,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      74,   123,    77,     1,   128,    52,    57,   126,    43,    60,
      61,   172,   108,    64,   126,   170,   109,   158,     3,     4,
       5,   159,    73,     6,    44,     7,     8,     9,    90,    10,
      45,    11,    12,    95,    96,    97,    13,   110,    14,   110,
      15,   160,   -76,   161,   -76,   107,   124,    16,    17,    18,
      19,   116,    54,    55,    54,    55,    50,    47,   118,    20,
      21,    58,   175,    48,   127,    22,    95,    96,    97,    23,
      24,    25,   191,    79,    80,   192,   193,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    66,    67,   151,    59,    68,    69,    62,     3,
       4,     5,    74,    63,     6,    72,     7,     8,     9,   209,
      10,   201,    11,    12,    65,   202,    70,    13,    75,    14,
      90,    15,   217,    93,   176,    95,    96,    97,    16,    17,
      18,    19,   196,   198,   199,   200,    71,   229,    56,   106,
      20,    21,    11,    12,    78,   174,    22,    13,    99,    74,
      23,    24,    25,    98,   116,    76,    77,   100,    16,    17,
      18,    19,   102,   242,   101,   204,   243,   244,   245,   246,
      20,   103,   211,   104,   213,   105,   215,   216,   117,   255,
      52,    96,    97,    74,   164,   195,   123,   119,   258,    90,
      53,    74,    93,    94,    95,    96,    97,   -79,   -79,   -79,
     -79,   -79,   -79,    74,   120,    54,    55,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   121,    74,    74,    74,    74,
      74,   239,   122,   241,   130,   131,     3,     4,     5,    74,
     132,     6,    74,     7,     8,     9,    80,    10,   149,    11,
      12,   150,   153,   152,    13,   154,    14,   155,    15,   162,
     164,   156,   167,   157,   171,    16,    17,    18,    19,   168,
     169,   177,   178,    97,   179,   180,   181,    20,    21,   182,
     183,   184,   207,    22,   185,   194,   186,    23,    24,    25,
       3,     4,     5,   187,   189,     6,   210,     7,     8,     9,
     190,    10,   203,    11,    12,   205,   206,   214,    13,   212,
      14,   218,    15,   219,   220,   221,   225,   222,   223,    16,
      17,    18,    19,   224,   226,   227,   230,   129,   238,   231,
     234,    20,    21,   235,   236,   133,   232,    22,   237,   247,
     256,    23,    24,    25,     3,     4,     5,   125,   188,     6,
       0,     7,     8,     9,     0,    10,     0,    11,    12,     0,
       0,     0,    13,     0,    14,     0,    15,     0,     0,     0,
       0,     0,     0,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,     0,     0,     0,
     233,    22,     0,     0,     0,    23,    24,    25,     3,     4,
       5,     0,     0,     6,     0,     7,     8,     9,     0,    10,
       0,    11,    12,     0,     0,     0,    13,     0,    14,     0,
      15,     0,     0,     0,     0,     0,     0,    16,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      21,     0,     0,     0,   240,    22,     0,     0,     0,    23,
      24,    25,     3,     4,     5,     0,     0,     6,     0,     7,
       8,     9,     0,    10,     0,    11,    12,     0,     0,     0,
      13,     0,    14,     0,    15,     0,     0,     0,     0,     0,
       0,    16,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,     0,     0,   250,    22,
       0,     0,     0,    23,    24,    25,     3,     4,     5,     0,
       0,     6,     0,     7,     8,     9,     0,    10,     0,    11,
      12,     0,     0,     0,    13,     0,    14,     0,    15,     0,
       0,     0,     0,     0,     0,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,     0,
       0,     0,   251,    22,     0,     0,     0,    23,    24,    25,
       3,     4,     5,     0,     0,     6,     0,     7,     8,     9,
       0,    10,     0,    11,    12,     0,     0,     0,    13,     0,
      14,     0,    15,     0,     0,     0,     0,     0,     0,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,     0,     0,     0,   252,    22,     0,     0,
       0,    23,    24,    25,     3,     4,     5,     0,     0,     6,
       0,     7,     8,     9,     0,    10,     0,    11,    12,     0,
       0,     0,    13,     0,    14,     0,    15,     0,     0,     0,
       0,     0,     0,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,     0,     0,     0,
     253,    22,     0,     0,     0,    23,    24,    25,     3,     4,
       5,     0,     0,     6,     0,     7,     8,     9,     0,    10,
       0,    11,    12,     0,     0,     0,    13,     0,    14,     0,
      15,     0,     0,     0,     0,     0,     0,    16,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      21,     0,     0,     0,   254,    22,     0,     0,     0,    23,
      24,    25,     3,     4,     5,     0,     0,     6,     0,     7,
       8,     9,     0,    10,     0,    11,    12,     0,     0,     0,
      13,     0,    14,     0,    15,     0,     0,     0,     0,     0,
       0,    16,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,     0,     0,   257,    22,
       0,     0,     0,    23,    24,    25,     3,     4,     5,     0,
       0,     6,     0,     7,     8,     9,     0,    10,     0,    11,
      12,     0,     0,     0,    13,     0,    14,     0,    15,     0,
       0,     0,     0,     0,     0,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,     0,
       0,     0,   259,    22,     0,     0,     0,    23,    24,    25,
       3,     4,     5,     0,     0,     6,     0,     7,     8,     9,
       0,    10,     0,    11,    12,     0,     0,     0,    13,     0,
      14,     0,    15,     0,     0,     0,     0,     0,     0,    16,
      17,    18,    19,     0,   112,   113,     0,     0,    11,    12,
      56,    20,    21,    13,    11,    12,     0,    22,     0,    13,
       0,    23,    24,    25,    16,    17,    18,    19,     0,     0,
      16,    17,    18,    19,    83,     0,    20,     0,     0,     0,
       0,     0,    20,     0,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,   163,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    96,    97,   173,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,   208,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,   248,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
     249,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,   111,     0,     0,     0,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,   228,     0,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,    85,    86,    87,    88,    89,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    96,
      97,    86,    87,    88,    89,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    87,    88,    89,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    88,    89,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,    89,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    90,
      91,    92,    93,    94,    95,    96,    97,    90,    91,     0,
      93,    94,    95,    96,    97
};

static const yytype_int16 yycheck[] =
{
      26,    12,    15,     6,    72,     9,    13,    70,     0,    16,
      17,    24,    12,    20,    77,    19,    16,    12,     3,     4,
       5,    16,     7,     8,    12,    10,    11,    12,    36,    14,
      18,    16,    17,    41,    42,    43,    21,    19,    23,    19,
      25,    22,    22,    24,    24,    52,    57,    32,    33,    34,
      35,    58,    34,    35,    34,    35,    12,    12,    65,    44,
      45,    21,   130,    18,    71,    50,    41,    42,    43,    54,
      55,    56,    13,    46,    47,    16,    17,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    12,    13,   101,    21,    16,    17,    12,     3,
       4,     5,   128,    12,     8,    48,    10,    11,    12,   177,
      14,    12,    16,    17,    19,    16,    19,    21,    14,    23,
      36,    25,   190,    39,   131,    41,    42,    43,    32,    33,
      34,    35,   166,   167,   168,   169,    19,   205,    12,    13,
      44,    45,    16,    17,    14,    49,    50,    21,    12,   175,
      54,    55,    56,     9,   161,    14,    15,    15,    32,    33,
      34,    35,    12,   231,     9,   172,   234,   235,   236,   237,
      44,    15,   179,     9,   181,    15,   183,   184,    12,   247,
       9,    42,    43,   209,    51,    52,    12,    53,   256,    36,
      19,   217,    39,    40,    41,    42,    43,    26,    27,    28,
      29,    30,    31,   229,    53,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    53,   242,   243,   244,   245,
     246,   228,    53,   230,    48,    19,     3,     4,     5,   255,
      46,     8,   258,    10,    11,    12,    47,    14,    19,    16,
      17,    12,    12,    19,    21,    13,    23,    12,    25,    22,
      51,    20,    48,    20,    16,    32,    33,    34,    35,    48,
      48,    48,    16,    43,     9,    16,     9,    44,    45,     9,
       9,     9,    49,    50,    20,    49,    20,    54,    55,    56,
       3,     4,     5,    14,    14,     8,    20,    10,    11,    12,
      48,    14,    24,    16,    17,    48,    55,    13,    21,    20,
      23,    53,    25,    53,    53,    53,    20,    49,    49,    32,
      33,    34,    35,    49,    20,    16,    19,    77,    20,    48,
      48,    44,    45,    48,    48,    82,    49,    50,    48,    48,
      48,    54,    55,    56,     3,     4,     5,    70,   161,     8,
      -1,    10,    11,    12,    -1,    14,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    54,    55,    56,     3,     4,
       5,    -1,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      55,    56,     3,     4,     5,    -1,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    56,     3,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,
       3,     4,     5,    -1,    -1,     8,    -1,    10,    11,    12,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    54,    55,    56,     3,     4,     5,    -1,    -1,     8,
      -1,    10,    11,    12,    -1,    14,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    54,    55,    56,     3,     4,
       5,    -1,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      55,    56,     3,     4,     5,    -1,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    56,     3,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,
       3,     4,     5,    -1,    -1,     8,    -1,    10,    11,    12,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    12,    13,    -1,    -1,    16,    17,
      12,    44,    45,    21,    16,    17,    -1,    50,    -1,    21,
      -1,    54,    55,    56,    32,    33,    34,    35,    -1,    -1,
      32,    33,    34,    35,    14,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    24,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    30,    31,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    31,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    36,
      37,    38,    39,    40,    41,    42,    43,    36,    37,    -1,
      39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    59,     3,     4,     5,     8,    10,    11,    12,
      14,    16,    17,    21,    23,    25,    32,    33,    34,    35,
      44,    45,    50,    54,    55,    56,    60,    61,    62,    66,
      67,    68,    69,    70,    71,    75,    76,    79,    80,    81,
      82,    83,    86,     0,    12,    18,    63,    12,    18,    64,
      12,    65,     9,    19,    34,    35,    12,    86,    21,    21,
      86,    86,    12,    12,    86,    19,    12,    13,    16,    17,
      19,    19,    48,     7,    61,    14,    14,    15,    14,    46,
      47,    77,    78,    14,    26,    27,    28,    29,    30,    31,
      36,    37,    38,    39,    40,    41,    42,    43,     9,    12,
      15,     9,    12,    15,     9,    15,    13,    86,    12,    16,
      19,    22,    12,    13,    84,    85,    86,    12,    86,    53,
      53,    53,    53,    12,    57,    68,    70,    86,    60,    69,
      48,    19,    46,    77,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    19,
      12,    86,    19,    12,    13,    12,    20,    20,    12,    16,
      22,    24,    22,    20,    51,    72,    73,    48,    48,    48,
      19,    16,    24,    20,    49,    60,    86,    48,    16,     9,
      16,     9,     9,     9,     9,    20,    20,    14,    85,    14,
      48,    13,    16,    17,    49,    52,    72,    74,    72,    72,
      72,    12,    16,    24,    86,    48,    55,    49,    20,    60,
      20,    86,    20,    86,    13,    86,    86,    60,    53,    53,
      53,    53,    49,    49,    49,    20,    20,    16,    24,    60,
      19,    48,    49,    49,    48,    48,    48,    48,    20,    86,
      49,    86,    60,    60,    60,    60,    60,    48,    20,    20,
      49,    49,    49,    49,    49,    60,    48,    49,    60,    49
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
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
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
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

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 80 "ztwo.y"
    { printf("\nCompiled Successfully.\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 87 "ztwo.y"
    {
  printf("\nSingle Line Comment: %s\n\n", (yyvsp[(1) - (1)].text));
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 90 "ztwo.y"
    {
  printf("\nMulti Line Comment: %s\n\n" , (yyvsp[(1) - (1)].text));
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 93 "ztwo.y"
    {printf("\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 94 "ztwo.y"
    { printf("\nSuccessful Declaration\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 95 "ztwo.y"
    { printf("\nSuccessful Assignment\n"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 100 "ztwo.y"
    { printf("Successful Integer Declaration.\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 101 "ztwo.y"
    { printf("Successful Real Number Declaration.\n"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 102 "ztwo.y"
    { printf("Successful Text Declaration.\n"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 103 "ztwo.y"
    { printf("Successful Integer Array Declaration.\n"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 104 "ztwo.y"
    { printf("Successful Real Array Declaration.\n"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 108 "ztwo.y"
    {
int idx = check_var((yyvsp[(3) - (3)].text));
if(idx!=-1)
{
    printf("%s is already declared\n", (yyvsp[(3) - (3)].text));
}
else{
    strcpy(var[temp],(yyvsp[(3) - (3)].text));
    alredyDeclared[temp]=1;
    temp++;
}
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 120 "ztwo.y"
    {

	int idx = check_var((yyvsp[(3) - (5)].text));

	if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (5)].text));
  }
  else{

    int x = (int)(yyvsp[(5) - (5)].real) ;
    strcpy( var[temp] , (yyvsp[(3) - (5)].text) );
    alredyDeclared[temp] = 1;
    record_int[temp] = x ;
    /*printf("%dth variable %s = %d\n" ,temp, $3 , x);*/
    temp++;

   }

	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 140 "ztwo.y"
    {
    int idx = check_var((yyvsp[(1) - (1)].text));
    if(idx!=-1)
    {
        printf("%s already declared\n",(yyvsp[(1) - (1)].text));
    }
    else
    {
        strcpy(var[temp],(yyvsp[(1) - (1)].text));
    alredyDeclared[temp]=1;
    temp++;
    }
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 153 "ztwo.y"
    {

	int idx = check_var((yyvsp[(1) - (3)].text));
  /*printf("idx = %d\n", idx);*/

  if(idx!=-1)
  {
   printf("%s is already declared!\n", (yyvsp[(1) - (3)].text));
  }
  else{

    int x = (int)(yyvsp[(3) - (3)].real) ;
    strcpy( var[temp] , (yyvsp[(1) - (3)].text)) ;
    alredyDeclared[temp] = 1;
    record_int[temp] = x ;

    /*printf("%dth variable %s = %d\n" ,temp, $1 , x);*/
    temp++;

   }

	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 177 "ztwo.y"
    {
    int idx = check_var((yyvsp[(3) - (3)].text));
    if(idx!=-1)
    {
        printf("%s variable already declared",(yyvsp[(3) - (3)].text));
    }
    else
    {
        strcpy(var[temp],(yyvsp[(3) - (3)].text));
        alredyDeclared[temp]=2;
        temp++;
    }
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 190 "ztwo.y"
    {

  int idx = check_var((yyvsp[(3) - (5)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (5)].text));
  }
  else{

    double x = (yyvsp[(5) - (5)].real) ;
    strcpy( var[temp] , (yyvsp[(3) - (5)].text) );
    alredyDeclared[temp] = 2;
    record_double[temp] = x ;
    printf("%s variable double declared",(yyvsp[(3) - (5)].text));
    /*printf("%dth variable %s = %lf\n" ,temp, $3 , x);*/ 
    temp++;

   }

  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 212 "ztwo.y"
    {

  int idx = check_var((yyvsp[(1) - (3)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n", (yyvsp[(1) - (3)].text));
  }
  else{

    double x = (yyvsp[(3) - (3)].real) ;
    strcpy( var[temp] , (yyvsp[(1) - (3)].text)) ;
    alredyDeclared[temp] = 2;
    record_double[temp] = x ;

    /*printf("%dth variable %s = %lf\n" ,temp, $1 , x);*/
    temp++;

   }

  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 234 "ztwo.y"
    {
    int idx = check_var((yyvsp[(1) - (1)].text));
    if(idx!=-1)
    {
        printf("%s already declared\n",(yyvsp[(1) - (1)].text));
    }
    else
    {
        strcpy(var[temp],(yyvsp[(1) - (1)].text));
    alredyDeclared[temp]=2;
    temp++;
    }
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 249 "ztwo.y"
    {
    int idx = check_var((yyvsp[(3) - (3)].text));
 if(idx!=-1)
    {
        printf("%s variable already declared",(yyvsp[(3) - (3)].text));
    }
    else
    {
        strcpy(var[temp],(yyvsp[(3) - (3)].text));
        alredyDeclared[temp]=3;
        temp++;
    }
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 262 "ztwo.y"
    {

  int idx = check_var((yyvsp[(3) - (5)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (5)].text));
  }
  else{

    strcpy( var[temp] , (yyvsp[(3) - (5)].text) );
    alredyDeclared[temp] = 3;

   record_text[temp] = (char *) malloc ( sizeof(char)*(strlen((yyvsp[(5) - (5)].text)) + 1) );
   
    strcpy(record_text[temp] , (yyvsp[(5) - (5)].text));

    /*printf("%dth VARiable %s = %s\n" ,temp, $3 ,record_text[temp]);*/
    temp++;

   }

  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 287 "ztwo.y"
    {

  int idx = check_var((yyvsp[(1) - (3)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n", (yyvsp[(1) - (3)].text));
  }
  else{

    
    strcpy( var[temp] , (yyvsp[(1) - (3)].text)) ;
    alredyDeclared[temp] = 3;

   record_text[temp] = (char*) malloc ( sizeof(char)*(strlen((yyvsp[(3) - (3)].text)) ) );

    strcpy(record_text[temp] , (yyvsp[(3) - (3)].text));

    /* printf("%dth VARiable %s = %s\n" ,temp, $1 ,record_text[temp]); */
    temp++;

   };}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 310 "ztwo.y"
    {
    int idx = check_var((yyvsp[(1) - (1)].text));
    if(idx!=-1)
    {
        printf("%s already declared\n",(yyvsp[(1) - (1)].text));
    }
    else
    {
        strcpy(var[temp],(yyvsp[(1) - (1)].text));
    alredyDeclared[temp]=3;
    temp++;
    }
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 325 "ztwo.y"
    {
  
  int idx = check_var((yyvsp[(3) - (6)].text));
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (6)].text));
  }
  else{

    strcpy( var[temp] , (yyvsp[(3) - (6)].text)) ;
    alredyDeclared[temp]=99;

    record_int[temp]= aisize;
    aisize+=(yyvsp[(5) - (6)].integer);
   printf("%dth variable %s is being declared!\n" ,temp, (yyvsp[(1) - (6)].text));
    temp++;
   }
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 346 "ztwo.y"
    {
  
  int idx = check_var((yyvsp[(3) - (6)].text));
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (6)].text));
  }
  else{

    strcpy( var[temp] , (yyvsp[(3) - (6)].text)) ;
    alredyDeclared[temp]=100;

    record_int[temp]= adsize;
    adsize+=(yyvsp[(5) - (6)].integer);

    /*printf("%dth variable %s is being declared!\n" ,temp, $1);*/
    temp++;
   }
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 372 "ztwo.y"
    {
  
  int idx = check_var((yyvsp[(1) - (3)].text));

  if(idx==-1){
    printf("Variable %s has not been Declared Yet\n", (yyvsp[(1) - (3)].text));
  }
  else {
    if(alredyDeclared[idx]==1){

        int x = (int) (yyvsp[(3) - (3)].real) ;
        record_int[idx] = x ;
        /*printf("%s = %d\n", $1, x);*/
    }
    else if(alredyDeclared[idx]==2){

        double x = (yyvsp[(3) - (3)].real) ;
        record_double[idx] = x ;
        /*printf("%s = %lf\n", $1, x);*/
    }
  }
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 394 "ztwo.y"
    {
  
  int idx = check_var((yyvsp[(1) - (3)].text));

  if(idx==-1){
    printf("Variable %s has not been Declared Yet\n", (yyvsp[(1) - (3)].text));
  }
  else {
    record_text[idx] = (char*) malloc ( sizeof(char)*(strlen((yyvsp[(3) - (3)].text))) );

    strcpy(record_text[idx] , (yyvsp[(3) - (3)].text));
    /*printf("%s = %s\n", $1, $3);*/
    }
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 411 "ztwo.y"
    {
    int idx = check_var((yyvsp[(1) - (6)].text));
    if(idx==-1)
    {
        printf("%s is not declared yet",(yyvsp[(1) - (6)].text));
    }
    else{
        if(alredyDeclared[idx]==99)
        {
            int x = record_int[idx];
            x+= (yyvsp[(3) - (6)].integer);
            int y= (int) (yyvsp[(6) - (6)].real);
            arr_int[x]=y;
        }
        else if(alredyDeclared[idx]==100)
        {
            int x= record_int[idx];
            x+= (yyvsp[(3) - (6)].integer);
            double y =(yyvsp[(6) - (6)].real);
            arr_real[x]=y;
        }
        else{
            printf("not array\n");
        }
    }
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 437 "ztwo.y"
    {
    int idx=check_var((yyvsp[(1) - (6)].text));
    if(idx==-1)
    {
       printf("%s is not declared yet",(yyvsp[(1) - (6)].text));  
    }
    else{
        if(alredyDeclared[idx]==99)
        {
            int x=record_int[idx];
            int idx1 =check_var((yyvsp[(3) - (6)].text));
            if(idx1==-1)
            {
                printf("%s is not declared yet",(yyvsp[(3) - (6)].text)); 
            }
            else{ 
            if(alredyDeclared[idx1]==1)
            {
                x+=record_int[idx1];
            }

            }
            int y = (int)(yyvsp[(6) - (6)].real);
            arr_int[x]=y;
        }
        else if(alredyDeclared[idx]==100)
        {
            int x = record_int[idx];
      
      int idx1 = check_var((yyvsp[(3) - (6)].text));
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[(3) - (6)].text));
      }
      else {
        if(alredyDeclared[idx1]==1){
          x+=record_int[idx1];
        }
      }

      double y = (yyvsp[(6) - (6)].real) ;
      arr_real[x] = y;
    }
  else {
      printf("Improper Data Type.Not Array\n");
        }
    }
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 490 "ztwo.y"
    {
  
  maincase =(int)(yyvsp[(2) - (6)].integer);
  //printf ("Inside switch statement int %d",maincase);
  
  
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 497 "ztwo.y"
    {
  dmaincase=(yyvsp[(2) - (6)].real);
   printf ("Inside switch statement double");

;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 502 "ztwo.y"
    {
   record_text[450] = (char*) malloc ( sizeof(char)*(strlen((yyvsp[(2) - (6)].text))) );
   strcpy(record_text[450] , (yyvsp[(2) - (6)].text));
   printf ("Inside switch statement string");

;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 508 "ztwo.y"
    {
 
 printf ("Inside switch statement with variable name");
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 513 "ztwo.y"
    {
    int idx = check_var((yyvsp[(1) - (1)].text));
    if(alredyDeclared[idx]==-1)
    {
        printf("variable not declared yet");
    }
    else if(alredyDeclared[idx]==1)
    {
        int value = record_int[idx];
        int maincase = (int)value;
    }
    else if(alredyDeclared[idx] == 2)  { 

    dmaincase= record_double[idx];
}
    else if(alredyDeclared[idx] == 3)  { 

    int length = strlen(record_text[450]);
    char* str = malloc( length + 1 );
    strcpy(str, record_text[450]);
}

;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 542 "ztwo.y"
    {
 subcase =(int) (yyvsp[(2) - (6)].integer);
 //printf("inside int case %d",$2);
 int ddd = maincase-subcase;
 if(ddd==-(yyvsp[(2) - (6)].integer))
 {
   printf("%d matched",(yyvsp[(2) - (6)].integer));
 }
 
  
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 553 "ztwo.y"
    {
 dsubcase = (yyvsp[(2) - (6)].real);
 if(dmaincase==dsubcase)
 {
  printf("%lf matched",(yyvsp[(2) - (6)].real));
 }
  
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 561 "ztwo.y"
    {
 
  printf("string case from switch case");

;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 567 "ztwo.y"
    {
  printf("default case from switch case");
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 576 "ztwo.y"
    {
  
  if( (int)(yyvsp[(3) - (7)].real) ){
    printf("Inside If Block\n");
  }
 printf("whole string matched");
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 583 "ztwo.y"
    {
     printf("Inside if_else Block\n");
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 594 "ztwo.y"
    {
  printf("Inside elseif Block\n"); 
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 602 "ztwo.y"
    {
  printf("initializer value %d, condition value %lf, inc/dec/operation value %lf\n",(yyvsp[(3) - (11)].integer), (yyvsp[(5) - (11)].real), (yyvsp[(7) - (11)].real));
  int count = 0;
  printf("inside for loop");
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 607 "ztwo.y"
    {
  printf("range for loop\n");
  int rngs=(int)(yyvsp[(4) - (10)].integer);
  int rnge=(int)(yyvsp[(6) - (10)].integer);
  int index,count=0;
  for(index=rngs;index<=rnge;index++)
  {
    count++;
  }
  printf("range for loop ran %d times \n",count);
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 619 "ztwo.y"
    {
  if((yyvsp[(3) - (7)].real))
  {
    printf("while loop will be executed\n");
  }
  else {
    printf("while loop wont be executed\n");
  }

;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 631 "ztwo.y"
    {
  printf("do while loop iteration\n");
  if((yyvsp[(7) - (8)].real))
  {
    printf("dowhile loop will be executed again\n");
  }
  else {
    printf("dowhile loop wont be executed again\n");
  }
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 646 "ztwo.y"
    {
    //printf("variables or strings together\n");
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 649 "ztwo.y"
    {
    int idx = check_var((yyvsp[(3) - (5)].text));
    if(alredyDeclared[idx]==-1)
    {
        printf("variable not declared yet\n");
    }
    else if(alredyDeclared[idx]==1)
    {
        int value;
        scanf("%d", &value);
        record_int[idx]=value;
         printf("Integer Variable, %s = %d\n", (yyvsp[(3) - (5)].text), record_int[idx]);
    }
    else if(alredyDeclared[idx] == 2)  { 
         double value;
        scanf("%lf", &value);
        record_double[idx]=value;
         printf("Integer Variable, %s = %lf\n", (yyvsp[(3) - (5)].text), record_double[idx]);

}
    else if(alredyDeclared[idx] == 3)  { 
      char str[100];
      scanf("%c",str);
      int length = strlen(str);
      char* strr = malloc( length + 1 );
    strcpy(record_text[idx],strr);

    printf("Text Variable, %s = %s\n", (yyvsp[(3) - (5)].text),str);
    
}

;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 686 "ztwo.y"
    {
    printf("%lf",(yyvsp[(1) - (1)].real));
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 689 "ztwo.y"
    {
    int length = strlen((yyvsp[(1) - (1)].text));
    char* str = malloc(length+1);
    strcpy(str,(yyvsp[(1) - (1)].text));
    printf("%s \n",str);
    free(str);
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 697 "ztwo.y"
    {
    int idx = check_var((yyvsp[(1) - (1)].text));
    if(alredyDeclared[idx]==-1)
    {
        printf("variable not declared yet");
    }
    else if(alredyDeclared[idx]==1)
    {
        int value = record_int[idx];
        int valll = (int)value;
         printf("Integer Variable, %s = %d", (yyvsp[(1) - (1)].text), valll);
    }
    else if(alredyDeclared[idx] == 2)  { 

    printf("Real Variable, %s = %lf",(yyvsp[(1) - (1)].text), record_double[idx]);
}
    else if(alredyDeclared[idx] == 3)  { 

    int length = strlen(record_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, record_text[idx]);

    printf("Text Variable, %s = %s\n", (yyvsp[(1) - (1)].text),str);
    free(str);
}

;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 728 "ztwo.y"
    { (yyval.real) = (int)(yyvsp[(1) - (1)].integer); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 729 "ztwo.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real)*1.0; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 730 "ztwo.y"
    { 

  int idx = check_var((yyvsp[(1) - (1)].text));
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");
  }

  else if(alredyDeclared[idx] == 1)  { (yyval.real) = record_int[idx]*1.00; }
  else if(alredyDeclared[idx] == 2)  { (yyval.real) = record_double[idx]*1.00 ; }

  /*printf("%s = %lf\n",$1, $$);*/

 ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 743 "ztwo.y"
    {

  int idx = check_var((yyvsp[(1) - (4)].text));
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(1) - (4)].text));
  }
  else{
  if(alredyDeclared[idx]==99){
      int x = record_int[idx];
      x+=(yyvsp[(3) - (4)].integer);
      (yyval.real) = arr_int[x]*1.0 ;

      /*printf("%s[%d] = %lf\n",$1, $3, $$);*/
    }
  else if(alredyDeclared[idx]==100){
      int x = record_int[idx];
      x+=(yyvsp[(3) - (4)].integer);
      (yyval.real) = arr_real[x];

      /*printf("%s[%d] = %lf\n",$1, $3, $$);*/
    }
  else {
      printf("Not Array\n");
    }
  }
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 771 "ztwo.y"
    {

  int idx = check_var((yyvsp[(1) - (4)].text));
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(1) - (4)].text));
  }
  else{
  if(alredyDeclared[idx]==99){
      int x = record_int[idx];
      int idx1 = check_var((yyvsp[(3) - (4)].text));
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[(3) - (4)].text));
      }
      else {
        if(alredyDeclared[idx1]==1){
          x+=record_int[idx1];
        }
      }
      (yyval.real) = arr_int[x]*1.0 ;

      //printf("%s[%s] = %lf\n",$1, $3, $$);
    }
  else if(alredyDeclared[idx]==100){
      int x = record_int[idx];
      int idx1 = check_var((yyvsp[(3) - (4)].text));
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[(3) - (4)].text));
      }
      else {
        if(alredyDeclared[idx1]==1){
          x+=record_int[idx1];
        }
      }
      (yyval.real) = arr_real[x]*1.0 ;
      /*printf("%s[%s] = %lf\n",$1, $3, $$);*/
    }
  else {
      printf("Not Array\n");
    }
  }
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 817 "ztwo.y"
    { (yyval.real) = fabs((yyvsp[(2) - (2)].real))*1.0 ; ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 818 "ztwo.y"
    {
  
  int x = (int)(yyvsp[(2) - (2)].real) ;

  if(!x){ (yyval.real) = 1.0 ; }
  else if(x<0){ printf("Factrorial of Negative is not Defined.\t"); (yyval.real) = 0.0 ; }
  else if(x>20){ printf("Factrorial is too Large for Data Type.\t"); (yyval.real) = 0.0 ; }
  else{
  long long int factor = 1;
  for(i=2; i<=x; i++)
  {
    factor*=i;
  }
  (yyval.real) = factor;
  printf("factorial is %d",(yyval.real));
  (yyval.real) = factor*1.0;
  }
 ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 836 "ztwo.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) + (yyvsp[(3) - (3)].real); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 837 "ztwo.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) - (yyvsp[(3) - (3)].real); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 838 "ztwo.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) * (yyvsp[(3) - (3)].real); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 839 "ztwo.y"
    {
  if((yyvsp[(3) - (3)].real))
    {
     (yyval.real) = ((yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real))*1.0 ;
    }
  else
    {
     (yyval.real) = 0;
     printf("\n Division by 0 is not Allowed.\n");
    }
 ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 850 "ztwo.y"
    { (yyval.real) = ((int)(yyvsp[(1) - (3)].real) % (int)(yyvsp[(3) - (3)].real))*1.0 ; ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 851 "ztwo.y"
    { (yyval.real) = pow( (int)(yyvsp[(1) - (3)].real) , (int)(yyvsp[(3) - (3)].real) )*1.0 ; ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 854 "ztwo.y"
    {
  
  int idx = check_var((yyvsp[(2) - (2)].text));
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(alredyDeclared[idx] == 1) {

    record_int[idx] = record_int[idx] + 1 ;
    (yyval.real) = record_int[idx]*1.0;
     }
  else if(alredyDeclared[idx] == 2) { 

    record_double[idx] = record_double[idx] + 1 ;
    (yyval.real) = record_double[idx];
   }
  else if(alredyDeclared[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 873 "ztwo.y"
    {

  int idx = check_var((yyvsp[(2) - (2)].text));
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(alredyDeclared[idx] == 1) {

    record_int[idx] = record_int[idx] - 1 ;
    (yyval.real) = record_int[idx]*1.0;
     }
  else if(alredyDeclared[idx] == 2) { 

    record_double[idx] = record_double[idx] - 1 ;
    (yyval.real) = record_double[idx];
   }
  else if(alredyDeclared[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 895 "ztwo.y"
    {

  int idx = check_var((yyvsp[(1) - (2)].text));
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(alredyDeclared[idx] == 1) {

    (yyval.real) = record_int[idx]*1.0;
    record_int[idx] = record_int[idx] + 1 ;
     }
  else if(alredyDeclared[idx] == 2) { 

    (yyval.real) = record_double[idx];
    record_double[idx] = record_double[idx] + 1 ;
   }
  else if(alredyDeclared[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 914 "ztwo.y"
    {

  int idx = check_var((yyvsp[(1) - (2)].text));
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(alredyDeclared[idx] == 1) {

    (yyval.real) = record_int[idx]*1.0;
    record_int[idx] = record_int[idx] - 1 ;
     }
  else if(alredyDeclared[idx] == 2) { 

    (yyval.real) = record_double[idx];
    record_double[idx] = record_double[idx] - 1 ;
   }
  else if(alredyDeclared[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 933 "ztwo.y"
    {
  (yyval.real) = (!((yyvsp[(2) - (2)].real)))*1.0 ;
  //printf("%d not",$$);
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 937 "ztwo.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x < y)*1.0 ; 
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 944 "ztwo.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x > y)*1.0 ; 
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 951 "ztwo.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x <= y)*1.0 ; 
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 958 "ztwo.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x >= y)*1.0 ; 
;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 965 "ztwo.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x == y)*1.0 ; 
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 972 "ztwo.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x != y)*1.0 ; 
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 979 "ztwo.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x || y)*1.0 ; 
;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 986 "ztwo.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x && y)*1.0 ; 
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 993 "ztwo.y"
    { (yyval.real) = (yyvsp[(2) - (3)].real); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3110 "ztwo.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 996 "ztwo.y"


int yywrap()
{
	return 1;
}
void yyerror(char *s)
{
	fprintf(stderr," jndjnd %s\n",s);
}
int main()
{
	freopen("zinput.txt","r",stdin);
  freopen("zoutput.txt","w",stdout);


	yyparse();
    
	return 0;
}

