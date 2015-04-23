%x TEX
%x COMMANDE


L   [a-zA-Z_]
A   [a-zA-Z_0-9]


%{
/*		!<COMMANDE>{L}{A}* {return yytext;} 	car il me semble que chaque commande doit être traité séparamment*/	
#ifndef YYSTYPE
# define YYSTYPE char*
#endif	
#include "tex_parse.tab.h"
#include <stdio.h>
#include <string.h>
%}
%%


\\/{L} {BEGIN COMMANDE; return BACKSLASH;}

<COMMANDE>"begin" {
  BEGIN INITIAL; 
  return BEG;
 }

<COMMANDE>"end" {
  BEGIN INITIAL; 
  return END;
 }

<COMMANDE>"enumerate" {
  yylval=yytext; 
  BEGIN INITIAL; return ENUM;
 }

<COMMANDE>"itemize" {
  BEGIN INITIAL; 
  return ITEMIZE;
 }

<COMMANDE>"item" {
  BEGIN INITIAL; 
  return ITEM;
 }

<COMMANDE>"tabular" {
  BEGIN INITIAL; 
  return TABULAR;
 }

<COMMANDE>"equation" {
  BEGIN INITIAL; 
  return EQUATION;
 }

<COMMANDE>"it" {
  BEGIN INITIAL; 
  return IT;
 }

<COMMANDE>"bf" {
  BEGIN INITIAL; 
  return BF;
 }

<COMMANDE>"title" {
  BEGIN INITIAL;
  return TITLE;
 }

<COMMANDE>"texttt" {
  BEGIN INITIAL; 
  return TEXTTT;
 }

<COMMANDE>"textit" {
  BEGIN INITIAL; 
  return TEXTIT;
 }

<COMMANDE>"underline" {
  BEGIN INITIAL; 
  return UNDERLINE;
 }

<COMMANDE>"section" {
  BEGIN INITIAL; 
  return SECTION;
 }

<COMMANDE>"paragraph" {
  BEGIN INITIAL; 
  return PARAGRAPH;
 }

<COMMANDE>"newline" {
  BEGIN INITIAL; 
  return NEW_LINE;
 }

<COMMANDE>"color" {
  BEGIN INITIAL; 
  return COLOR;
 }

<COMMANDE>"textcolor" {
  BEGIN INITIAL; 
  return TEXTCOLOR;
 }
"pt"/"]" {yylval=yytext; return TAILLE;}

{L}{A}* {yylval=strdup(yytext); return WORD;}
[:0-9:]+ {yylval=strdup(yytext); return NB;}
\n {/*en latex ca fait rien*/;}

"[" {yylval=strdup(yytext);return OPEN_SQUARE;}
"]" {yylval=strdup(yytext);return CLOSE_SQUARE;}
"{" {/*seulement quand suivi par backslash "{"/"\\" (marche pas!!!!!)*/return OPEN_BRACE;}
"}" {return CLOSE_BRACE;}

[[:space:]] {return SPACE;}

\\. {
  yylval=strdup(yytext+1);
  return CHAR;
}
. {yylval=strdup(yytext); return CHAR;}

 %%

