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
\\ {return BACKSLASH;}


"begin" {return BEG;}


"title" {return TITLE;}
"section" {return SECTION;}
"paragraph" {return PARAGRAPH;}
"newline" {return NEW_LINE;}
"pt"/"]" {yylval=yytext; return TAILLE;}


{L}{A}* {yylval=strdup(yytext); return WORD;}
[[:0-9:]]+ {yylval=strdup(yytext); return NB;}
\n {/*en latex ca fait rien*/;}

"[" {yylval=strdup(yytext);return OPEN_SQUARE;}
"]" {yylval=strdup(yytext);return CLOSE_SQUARE;}
"{" {return OPEN_BRACE;}
"}" {return CLOSE_BRACE;}
[[:space:]] {return SPACE;}

. {printf("TEST\n");}

 %%

