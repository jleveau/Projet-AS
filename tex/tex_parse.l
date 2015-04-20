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

#include "tex_parse.tab.h"
%}

%%



"\begin" {return BEG;}

\\ {BEGIN COMMANDE;}


title {return TITLE;}
section {return SECTION;}
paragraph {return PARAGRAPH;}

{L}{A}* {yylval=strdup(yytext); return WORD;}	
\n {/* un unique saut de ligne marche comme un espace??*/;}
\\ {return BACKSLASH;}
"[" {return ']';}
"[" {return ']';}
"{" {return '{';}
"}" {return '{';}
[[:space:]] {return SPACE;}
. ;

\n\n {return PARAGRAPH;}


 %%

