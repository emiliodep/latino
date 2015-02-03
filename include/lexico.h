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

#ifndef YY_YY_LEXICO_H_INCLUDED
# define YY_YY_LEXICO_H_INCLUDED
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
    PRINCIPAL = 258,
    FIN = 259,
    NOMBRECAMPO = 260,
    ENTERO = 261,
    DECIMAL = 262,
    LOGICO = 263,
    CARACTER = 264,
    CADENA = 265,
    T_CADENA = 266,
    T_LOGICO = 267,
    T_ENTERO = 268,
    T_DECIMAL = 269,
    T_CARACTER = 270,
    ASIGNADOR = 271,
    SUMA = 272,
    RESTA = 273,
    MULTIPLICACION = 274,
    DIVISION = 275,
    MODULO = 276,
    AUMENTAR = 277,
    DISMINUIR = 278,
    SI = 279,
    MAYOR = 280,
    MENOR = 281,
    IGUAL = 282,
    MAYORIGUAL = 283,
    MENORIGUAL = 284,
    NOIGUAL = 285,
    DESDE = 286,
    HACER = 287,
    INCREMENTO = 288,
    MIENTRAS = 289,
    OTRO = 290,
    ELEGIR = 291,
    CASO = 292,
    HASTA = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LEXICO_H_INCLUDED  */