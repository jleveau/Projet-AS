%x TEX
%x COMMANDE
%x NOM_TITLE

L   [a-zA-Z_]
A   [a-zA-Z_0-9]
mot [a-zA-Z_][a-zA-Z_0-9]*
TROUS [[:SPACE:]]*\n{0,1}[[:SPACE:]]*


%{
/*		!{L}{A}* {return yytext;} 	car il me semble que chaque commande doit être traité séparamment*/	
#ifndef YYSTYPE
# define YYSTYPE char*
#endif	
#include "tex_parse.tab.h"
#include <stdio.h>
#include <string.h>
#include "libs/html.h"

void print_newline();
%}
%%

\\\\ |
"\newline" {
  print_newline();
}

"\\documentclass"{TROUS}"{"{mot}"}" {
  /* pour simplifier, pour l'instant on va supposer que c'est toujours un article */
  return ENTETE_DOCUMENT;
}

"\\title"{TROUS}"{" {
  BEGIN NOM_TITLE;
}

<NOM_TITLE>\} {
  /*ferme le titre après que le string du titre est lu et envoyé*/
  BEGIN INITIAL;
}

<NOM_TITLE>.*/\} {
  /*cherche string du titre*/
  yylval=strdup(yytext); 
  return TITLE;  
  ;
}

"\\maketitle" { 
  return MAKETITLE;
}

"\\begin"{TROUS}"{Document}" {
  return BEGIN_DOCUMENT;
 }

"\\end"{TROUS}"{Document}" { 
  return END_DOCUMENT;
 }

"\\begin" {
  return BEG;
 }

"\\end" { 
  return END;
 }

"\\it" { 
  return IT;
 }

"\\bf" {
  return BF;
 }


"\\texttt" {
  return TEXTTT;
 }

"\\textit" { 
  return TEXTIT;
 }

"\\underline" {

  return UNDERLINE;
 }

"\\section" {
  return SECTION;
 }

"\\paragraph" {
  return PARAGRAPH;
 }

"\\color" {  
  return COLOR;
 }

"\\textcolor" {
   
  return TEXTCOLOR;
 }
"pt"/"]" {yylval=yytext; return TAILLE;}

{L}{A}* {yylval=strdup(yytext); return WORD;}
\n {fprintf(f_output, "&nbsp;"); /*si on est dans une balise ca affiche une espace, sinon, ca fait rien (c'est la bonne fonctionnement)*/}

"[" {yylval=strdup(yytext);return OPEN_SQUARE;}
"]" {yylval=strdup(yytext);return CLOSE_SQUARE;}
"{" {yylval=strdup(yytext);return OPEN_BRACE;}
"}" {yylval=strdup(yytext);return CLOSE_BRACE;}

\\. {
  yylval=strdup(yytext+1);
  return CHAR;
}
. {yylval=strdup(yytext); return CHAR;}

%%

void print_newline(){
    fprintf(f_output, "</br>");
}
