%x NOM_TITLE
%x PACKAGES_A_IGNORER

L   [a-zA-Z_]
A   [a-zA-Z_0-9]
MOT [a-zA-Z_][a-zA-Z_0-9]*
TROUS [[:SPACE:]]*\n{0,1}[[:SPACE:]]*
OPEN_SPACE [[:SPACE:]]*
STRING_SANS_PONC [^\n\\\{\}\[\]]


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
void print_space();
%}
%%

\n {fprintf(f_output, "&nbsp;"); /*si on est dans une balise ca affiche une espace, sinon, ca fait rien (c'est la bonne fonctionnement)*/}

"[" {return OPEN_SQUARE;}
"]" {return CLOSE_SQUARE;}
"{" {return OPEN_BRACE;}
"}" {return CLOSE_BRACE;}

\n{OPEN_SPACE}\n {print_newline();}

\\\\ |
"\newline" {
  print_newline();
}

"\\documentclass"{TROUS}"{"{MOT}"}" {
  /* pour simplifier, pour l'instant on va supposer que c'est toujours un article */
  BEGIN PACKAGES_A_IGNORER;
  return ENTETE_DOCUMENT;
}

<PACKAGES_A_IGNORER,INITIAL>
"\\title"{TROUS}"{" {
  BEGIN NOM_TITLE;
}

<PACKAGES_A_IGNORER,INITIAL>
"\\begin"{TROUS}"{document}" {
  BEGIN INITIAL;
  return BEGIN_DOCUMENT;
 }


<PACKAGES_A_IGNORER>. ;
<PACKAGES_A_IGNORER>\n ;

<NOM_TITLE>\} {
  /*ferme le titre après que le string du titre est lu et envoyé*/ 
  BEGIN INITIAL;
}

<NOM_TITLE>{MOT}*/\} {
  /*cherche string du titre*/
  yylval=strdup(yytext);
  return TITLE;  
  ;
}

"\\maketitle" { 
  return MAKETITLE;
}

"\\end"{TROUS}"{document}" { 
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
{STRING_SANS_PONC}* {yylval=strdup(yytext); return STRING;}

\\. {
  yylval=strdup(yytext+1);
  return CHAR;
}
. {yylval=strdup(yytext); return CHAR;}

%%

void print_newline(){
    fprintf(f_output, "</br>");
}

 void print_space(){
    fprintf(f_output, "&nbsp;");
}
