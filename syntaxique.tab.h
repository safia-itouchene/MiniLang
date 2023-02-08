
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
     idf = 258,
     par_ov = 259,
     par_fr = 260,
     string = 261,
     commentaire = 262,
     cst = 263,
     mc_entier = 264,
     mc_reel = 265,
     mc_chaine = 266,
     p = 267,
     vrg = 268,
     aff = 269,
     mc_const = 270,
     plus = 271,
     moin = 272,
     mult = 273,
     division = 274,
     ap = 275,
     signe_entier = 276,
     signe_float = 277,
     signe_chaine = 278,
     espace = 279,
     mc_if = 280,
     mc_else = 281,
     mc_or = 282,
     mc_and = 283,
     dpts = 284,
     mc_end = 285,
     mc_move = 286,
     mc_to = 287,
     mc_ident = 288,
     mc_prog = 289,
     mc_data = 290,
     mc_working = 291,
     mc_procedure = 292,
     mc_stop = 293,
     mc_line = 294,
     mc_size = 295,
     entier = 296,
     reel = 297,
     point = 298,
     sp = 299,
     signe_char = 300,
     caracter = 301,
     mc_char = 302,
     mc_not = 303,
     G = 304,
     L = 305,
     GE = 306,
     LE = 307,
     DI = 308,
     EQ = 309,
     aroba = 310,
     mc_display = 311,
     mc_accept = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 19 "syntaxique.y"

     int  entier;
     char* str;
     float ft;   



/* Line 1676 of yacc.c  */
#line 117 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


