/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BUILD_Y_TAB_H_INCLUDED
# define YY_YY_BUILD_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    K_ASYNC = 258,                 /* K_ASYNC  */
    K_EXTENDS = 259,               /* K_EXTENDS  */
    K_AS = 260,                    /* K_AS  */
    K_BREAK = 261,                 /* K_BREAK  */
    K_CASE = 262,                  /* K_CASE  */
    K_CATCH = 263,                 /* K_CATCH  */
    K_CLASS = 264,                 /* K_CLASS  */
    K_CONST = 265,                 /* K_CONST  */
    K_CONTINUE = 266,              /* K_CONTINUE  */
    K_DEFAULT = 267,               /* K_DEFAULT  */
    K_DELETE = 268,                /* K_DELETE  */
    K_DO = 269,                    /* K_DO  */
    K_ELSE = 270,                  /* K_ELSE  */
    K_FINALLY = 271,               /* K_FINALLY  */
    K_FOR = 272,                   /* K_FOR  */
    K_FROM = 273,                  /* K_FROM  */
    K_FUNCTION = 274,              /* K_FUNCTION  */
    K_IF = 275,                    /* K_IF  */
    K_IN = 276,                    /* K_IN  */
    K_IMPORT = 277,                /* K_IMPORT  */
    K_INSTANCEOF = 278,            /* K_INSTANCEOF  */
    K_LET = 279,                   /* K_LET  */
    K_NEW = 280,                   /* K_NEW  */
    K_NULL = 281,                  /* K_NULL  */
    K_OF = 282,                    /* K_OF  */
    K_RETURN = 283,                /* K_RETURN  */
    K_SWITCH = 284,                /* K_SWITCH  */
    K_THIS = 285,                  /* K_THIS  */
    K_THROW = 286,                 /* K_THROW  */
    K_TRY = 287,                   /* K_TRY  */
    K_TYPEOF = 288,                /* K_TYPEOF  */
    K_VAR = 289,                   /* K_VAR  */
    K_WHILE = 290,                 /* K_WHILE  */
    L_INT = 291,                   /* L_INT  */
    L_INT_OCT = 292,               /* L_INT_OCT  */
    L_INT_HEX = 293,               /* L_INT_HEX  */
    L_FLOAT = 294,                 /* L_FLOAT  */
    L_BOOL = 295,                  /* L_BOOL  */
    L_STR = 296,                   /* L_STR  */
    ID = 297,                      /* ID  */
    ARROW = 298,                   /* ARROW  */
    OP_AND_ASSIGN = 299,           /* OP_AND_ASSIGN  */
    OP_ARITHM_SUM = 300,           /* OP_ARITHM_SUM  */
    OP_ARITHM = 301,               /* OP_ARITHM  */
    OP_INC = 302,                  /* OP_INC  */
    OP_LOGIC = 303,                /* OP_LOGIC  */
    OP_BIT = 304,                  /* OP_BIT  */
    EXPR = 305,                    /* EXPR  */
    FIX = 306                      /* FIX  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define K_ASYNC 258
#define K_EXTENDS 259
#define K_AS 260
#define K_BREAK 261
#define K_CASE 262
#define K_CATCH 263
#define K_CLASS 264
#define K_CONST 265
#define K_CONTINUE 266
#define K_DEFAULT 267
#define K_DELETE 268
#define K_DO 269
#define K_ELSE 270
#define K_FINALLY 271
#define K_FOR 272
#define K_FROM 273
#define K_FUNCTION 274
#define K_IF 275
#define K_IN 276
#define K_IMPORT 277
#define K_INSTANCEOF 278
#define K_LET 279
#define K_NEW 280
#define K_NULL 281
#define K_OF 282
#define K_RETURN 283
#define K_SWITCH 284
#define K_THIS 285
#define K_THROW 286
#define K_TRY 287
#define K_TYPEOF 288
#define K_VAR 289
#define K_WHILE 290
#define L_INT 291
#define L_INT_OCT 292
#define L_INT_HEX 293
#define L_FLOAT 294
#define L_BOOL 295
#define L_STR 296
#define ID 297
#define ARROW 298
#define OP_AND_ASSIGN 299
#define OP_ARITHM_SUM 300
#define OP_ARITHM 301
#define OP_INC 302
#define OP_LOGIC 303
#define OP_BIT 304
#define EXPR 305
#define FIX 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BUILD_Y_TAB_H_INCLUDED  */
