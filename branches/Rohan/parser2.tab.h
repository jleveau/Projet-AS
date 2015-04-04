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

#ifndef YY_YY_PARSER2_TAB_H_INCLUDED
# define YY_YY_PARSER2_TAB_H_INCLUDED
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
    KEYWORD = 258,
    TYPE = 259,
    IDENTIFIER = 260,
    I_CONSTANT = 261,
    F_CONSTANT = 262,
    STRING_LITERAL = 263,
    FUNC_NAME = 264,
    SIZEOF = 265,
    PTR_OP = 266,
    INC_OP = 267,
    DEC_OP = 268,
    LEFT_OP = 269,
    RIGHT_OP = 270,
    LE_OP = 271,
    GE_OP = 272,
    EQ_OP = 273,
    NE_OP = 274,
    AND_OP = 275,
    OR_OP = 276,
    MUL_ASSIGN = 277,
    DIV_ASSIGN = 278,
    MOD_ASSIGN = 279,
    ADD_ASSIGN = 280,
    SUB_ASSIGN = 281,
    LEFT_ASSIGN = 282,
    RIGHT_ASSIGN = 283,
    AND_ASSIGN = 284,
    XOR_ASSIGN = 285,
    OR_ASSIGN = 286,
    TYPEDEF_NAME = 287,
    ENUMERATION_CONSTANT = 288,
    POINT_VIRGULE = 289,
    ACCO_OUV = 290,
    ACCO_FER = 291,
    VIRGULE = 292,
    DEUXPOINTS = 293,
    EGAL = 294,
    PAR_OUV = 295,
    PAR_FER = 296,
    CRO_OUV = 297,
    CRO_FER = 298,
    POINT = 299,
    ECOMMERCIAL = 300,
    POINT_EXCLA = 301,
    EQUIVALENT = 302,
    MOINS = 303,
    PLUS = 304,
    FOIS = 305,
    DIVISE = 306,
    POUCENT = 307,
    INFERIEUR = 308,
    SUPERIEUR = 309,
    PUISSANCE = 310,
    TILT = 311,
    POINT_INTERRO = 312,
    POURCENT = 313,
    TYPEDEF = 314,
    EXTERN = 315,
    STATIC = 316,
    AUTO = 317,
    REGISTER = 318,
    INLINE = 319,
    CONST = 320,
    RESTRICT = 321,
    VOLATILE = 322,
    ATOMIC = 323,
    BOOL = 324,
    CHAR = 325,
    SHORT = 326,
    INT = 327,
    LONG = 328,
    SIGNED = 329,
    UNSIGNED = 330,
    FLOAT = 331,
    DOUBLE = 332,
    VOID = 333,
    COMPLEX = 334,
    IMAGINARY = 335,
    STRUCT = 336,
    UNION = 337,
    ENUM = 338,
    ELLIPSIS = 339,
    CASE = 340,
    DEFAULT = 341,
    IF = 342,
    ELSE = 343,
    SWITCH = 344,
    WHILE = 345,
    DO = 346,
    FOR = 347,
    GOTO = 348,
    RETURN = 349,
    BREAK = 350,
    CONTINUE = 351,
    ALIGNAS = 352,
    ALIGNOF = 353,
    GENERIC = 354,
    NORETURN = 355,
    STATIC_ASSERT = 356,
    THREAD_LOCAL = 357
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 17 "parser2.y" /* yacc.c:1909  */

 char* nom;
 

#line 162 "parser2.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER2_TAB_H_INCLUDED  */
