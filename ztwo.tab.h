
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 40 "ztwo.y"

  int integer;
  double real;
  char *text;



/* Line 1676 of yacc.c  */
#line 117 "ztwo.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


