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
    AND = 258,
    ASSIGN = 259,
    STAR = 260,
    DIV = 261,
    COMMA = 262,
    EQ = 263,
    GT = 264,
    GE = 265,
    LBRACE = 266,
    LE = 267,
    LPAR = 268,
    LSQ = 269,
    LT = 270,
    MINUS = 271,
    MOD = 272,
    NE = 273,
    NOT = 274,
    OR = 275,
    PLUS = 276,
    RBRACE = 277,
    RPAR = 278,
    RSQ = 279,
    SEMICOLON = 280,
    ARROW = 281,
    LSHIFT = 282,
    RSHIFT = 283,
    XOR = 284,
    BOOL = 285,
    CLASS = 286,
    DOTLENGHT = 287,
    DOUBLE = 288,
    ELSE = 289,
    IF = 290,
    INT = 291,
    PRINT = 292,
    PARSEINT = 293,
    PUBLIC = 294,
    STATIC = 295,
    STRING = 296,
    VOID = 297,
    WHILE = 298,
    RETURN = 299,
    ID = 300,
    STRLIT = 301,
    REALLIT = 302,
    RESERVED = 303,
    INTLIT = 304,
    BOOLLIT = 305,
    UNARY = 306
  };
#endif
/* Tokens.  */
#define AND 258
#define ASSIGN 259
#define STAR 260
#define DIV 261
#define COMMA 262
#define EQ 263
#define GT 264
#define GE 265
#define LBRACE 266
#define LE 267
#define LPAR 268
#define LSQ 269
#define LT 270
#define MINUS 271
#define MOD 272
#define NE 273
#define NOT 274
#define OR 275
#define PLUS 276
#define RBRACE 277
#define RPAR 278
#define RSQ 279
#define SEMICOLON 280
#define ARROW 281
#define LSHIFT 282
#define RSHIFT 283
#define XOR 284
#define BOOL 285
#define CLASS 286
#define DOTLENGHT 287
#define DOUBLE 288
#define ELSE 289
#define IF 290
#define INT 291
#define PRINT 292
#define PARSEINT 293
#define PUBLIC 294
#define STATIC 295
#define STRING 296
#define VOID 297
#define WHILE 298
#define RETURN 299
#define ID 300
#define STRLIT 301
#define REALLIT 302
#define RESERVED 303
#define INTLIT 304
#define BOOLLIT 305
#define UNARY 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "jucompiler.y" /* yacc.c:1909  */

 char* test;


#line 161 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
