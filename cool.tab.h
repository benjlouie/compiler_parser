/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_COOL_TAB_H_INCLUDED
# define YY_YY_COOL_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 282,
     INTEGERLITERAL = 283,
     STRING = 284,
     TYPE = 285,
     CASE = 286,
     ESAC = 287,
     FALSE = 288,
     FI = 289,
     IF = 290,
     ELSE = 291,
     IN = 292,
     INHERITS = 293,
     ISVOID = 294,
     LET = 295,
     LOOP = 296,
     NEW = 297,
     NOT = 298,
     OF = 299,
     POOL = 300,
     THEN = 301,
     WHILE = 302,
     TRUE = 303,
     CLASS = 304,
     AT = 305,
     COLON = 306,
     COMMA = 307,
     DIVIDE = 308,
     DOT = 309,
     RARROW = 310,
     EQUALS = 311,
     LARROW = 280,
     LBRACE = 312,
     LE = 313,
     LPAREN = 314,
     LT = 315,
     MINUS = 316,
     PLUS = 317,
     RBRACE = 318,
     RPAREN = 319,
     SEMI = 320,
     TILDE = 321,
     TIMES = 322,
     let_prec = 323
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 29 "cool.ypp"

        char *Name;
        int Value;
        Node* node;
    

/* Line 2058 of yacc.c  */
#line 109 "cool.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_COOL_TAB_H_INCLUDED  */
