/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    ID = 259,
    TYPE = 260,
    OP = 261,
    CLASS = 262,
    PUBLIC = 263,
    STATIC = 264,
    EXTENDS = 265,
    IF = 266,
    ELSE = 267,
    WHILE = 268,
    THIS = 269,
    RETURN = 270,
    PRINT = 271,
    NEW = 272,
    STRING = 273,
    TRUE = 274,
    FALSE = 275,
    AND = 276,
    OR = 277,
    LENGTH = 278,
    MAIN = 279
  };
#endif
/* Tokens.  */
#define NUM 258
#define ID 259
#define TYPE 260
#define OP 261
#define CLASS 262
#define PUBLIC 263
#define STATIC 264
#define EXTENDS 265
#define IF 266
#define ELSE 267
#define WHILE 268
#define THIS 269
#define RETURN 270
#define PRINT 271
#define NEW 272
#define STRING 273
#define TRUE 274
#define FALSE 275
#define AND 276
#define OR 277
#define LENGTH 278
#define MAIN 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
