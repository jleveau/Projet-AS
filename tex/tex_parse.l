%x NOM_TITLE
%x PACKAGES_A_IGNORER
%x TABULAR
%x TABULAR_STRING
%x EQUATION

L   [a-zA-Z]
A   [a-zA-Z_0-9]
NBR [[:digit:]]+
MOT [a-zA-Z_][a-zA-Z_0-9]*
TROUS [[:SPACE:]]*\n{0,1}[[:SPACE:]]*
OPEN_SPACE [[:SPACE:]]*
STRING_SANS_PONC [^\n\\\{\}\[\]]
SPACE_OU_NEWLINE_INFINI [[:SPACE:]\n]*


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

<TABULAR,INITIAL>"[" {return OPEN_SQUARE;}
<TABULAR,INITIAL>"]" {return CLOSE_SQUARE;}
<TABULAR,INITIAL>"{" {return OPEN_BRACE;}
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

"\\subsection" {
  return SUBSECTION;
 }

"\\subsubsection" {
  return SUBSUBSECTION;
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

{TROUS}"\\begin"{TROUS}"{itemize}" {
    return BEGIN_ITEMIZE;
}

{SPACE_OU_NEWLINE_INFINI}"\\end"{TROUS}"{itemize}" {
    return END_ITEMIZE;
}

{TROUS}"\\begin"{TROUS}"{enumerate}" {
    return BEGIN_ENUMERATE;
}

{SPACE_OU_NEWLINE_INFINI}"\\end"{TROUS}"{enumerate}" {
    return END_ENUMERATE;
}

{TROUS}"\\item" {
    return BEGIN_ITEM;
}


{TROUS}"\\begin"{TROUS}"{tabular}" {
    BEGIN TABULAR;
    return BEGIN_TABULAR;
}

<TABULAR>\} {
    BEGIN TABULAR_STRING;
    return CLOSE_BRACE;
}

<TABULAR_STRING>(.*\n*)&/"\\end{tabular}" {
  BEGIN INITIAL;
  yylval=strdup(yytext);
  yyerror("Les tables ne peuvent pas finir avec des &; On va vous laisser faire cette fois mais reviser votre tableau svp;");
  return TAB_STRING;
}

<TABULAR_STRING>(.*\n*)*/"\\end{tabular}" {
  BEGIN INITIAL;
  yylval=strdup(yytext);
  return TAB_STRING;
}

{SPACE_OU_NEWLINE_INFINI}"\\end"{TROUS}"{tabular}" {
   BEGIN INITIAL;
    return END_TABULAR;
}

{TROUS}"\\begin"{TROUS}"{equation}" {
    BEGIN EQUATION;
    return BEGIN_EQUATION;
}

<EQUATION>{TROUS}{NBR}{TROUS} {

    yylval=strdup(yytext);
    return NBR_EQUATION;
 }

<EQUATION>{TROUS}{L}{TROUS} {
   yylval=strdup(yytext);
   return VAR_EQUATION;
}

<EQUATION>{TROUS}"+"{TROUS} {
  yylval=strdup(yytext);
   return PLUS_EQUATION;
}


<EQUATION>{TROUS}"-"{TROUS} {
  yylval=strdup(yytext);
   return MINUS_EQUATION;
}

<EQUATION>{TROUS}"*"{TROUS} {
  yylval=strdup(yytext);
   return TIMES_EQUATION;
}

<EQUATION>{TROUS}"/"{TROUS} {
  yylval=strdup(yytext);
   return DIVIDE_EQUATION;
}

<EQUATION>{TROUS}"="{TROUS} {
  yylval=strdup(yytext);
   return EGAL_EQUATION;
}


<EQUATION>{TROUS}"<"{TROUS} {
  yylval=strdup(yytext);
   return LESS_THAN_EQUATION;
}

<EQUATION>{TROUS}">"{TROUS} {
  yylval=strdup(yytext);
   return MORE_THAN_EQUATION;
}

<EQUATION>{TROUS}"{"{TROUS} {
  yylval=strdup(yytext);
  return BEGIN_ACCO_EQUATION;

}

<EQUATION>{TROUS}"}"{TROUS} {
  yylval=strdup(yytext);
  return END_ACCO_EQUATION;

}

<EQUATION>{TROUS}"^"{TROUS} {
  yylval=strdup(yytext);
  return CHAPEAU_EQUA;

}

<EQUATION>{TROUS}"\\sum_"{TROUS} {
  yylval=strdup(yytext);
  return SOMME_EQUA;

}

<EQUATION>{SPACE_OU_NEWLINE_INFINI}"\\end"{TROUS}"{equation}" {
	BEGIN INITIAL;
    return END_EQUATION;
}

"pt"/"]" {yylval=yytext; return TAILLE; /*on garde pour si on decide de refaire opt de paraghape à la fin*/}

<TABULAR,INITIAL>{L}{A}* {yylval=strdup(yytext); return WORD;}
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
