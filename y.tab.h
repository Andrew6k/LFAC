/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
    MainFunction = 258,
    CInt = 259,
    CFloat = 260,
    CChar = 261,
    CString = 262,
    CBool = 263,
    CStruct = 264,
    CArray = 265,
    CFunction = 266,
    CDefine = 267,
    CIf = 268,
    CElse = 269,
    CFor = 270,
    CWhile = 271,
    CDoWhile = 272,
    CCmp = 273,
    Eval = 274,
    CCopy = 275,
    StrCmp = 276,
    Concat = 277,
    Int_Val = 278,
    Float_Val = 279,
    Char_Val = 280,
    String_Val = 281,
    Bool_Val = 282,
    Identif = 283
  };
#endif
/* Tokens.  */
#define MainFunction 258
#define CInt 259
#define CFloat 260
#define CChar 261
#define CString 262
#define CBool 263
#define CStruct 264
#define CArray 265
#define CFunction 266
#define CDefine 267
#define CIf 268
#define CElse 269
#define CFor 270
#define CWhile 271
#define CDoWhile 272
#define CCmp 273
#define Eval 274
#define CCopy 275
#define StrCmp 276
#define Concat 277
#define Int_Val 278
#define Float_Val 279
#define Char_Val 280
#define String_Val 281
#define Bool_Val 282
#define Identif 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "LFAC.y" /* yacc.c:1909  */

int IntVal;
float FloatVal;
char* BoolVal;
char CharVal;
char* StringVal;
char* VarName;
char* VarType;

#line 120 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
