%x TEX
%x paragraphe
%x NOM_COMMANDE
%x PARAMS 
%x COMMANDE
%x COMMANDE_PARAM

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



"\begin" {yylval=strdup(yytext);return BEG;}

"\\" {BEGIN(COMMANDE);}


"title" {yylval=strdup(yytext);return TITLE;}
"section" {yylval=strdup(yytext);return SECTION;}
"paragraph" {yylval=strdup(yytext);return PARAGRAPH;}

{L}{A}* {yylval=strdup(yytext); return WORD;}	
\n {/* un unique saut de ligne marche comme un espace??*/;}
\\ {return BACKSLASH;}
"[" {yylval=strdup(yytext);return ']';}
"[" {yylval=strdup(yytext);return ']';}
"{" {yylval=strdup(yytext);return '{';}
"}" {yylval=strdup(yytext);return '{';}
[[:space:]] {yylval=strdup(yytext);return SPACE;}
. ;

\n\n {return PARAGRAPH;}


 %%

