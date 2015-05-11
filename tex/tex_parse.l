%x NOM_TITLE
%x PACKAGES_A_IGNORER
%x TABULAR
%x TABULAR_STRING
%x EQUATION
%x IMAGE_STRING

L   [a-zA-Z]
A   [a-zA-Z_0-9]
NBR [[:digit:]]+
MOT [a-zA-Z_][a-zA-Z_0-9]*
TROUS [[:SPACE:]]*\n{0,1}[[:SPACE:]]*
OPEN_SPACE [[:SPACE:]]*
STRING_SANS_PONC [^\$\n\\\{\}\[\]]
STRING_POUR_IMAGE [//a-zA-Z_0-9\.]+
SPACE_OU_NEWLINE_INFINI [[:SPACE:]\n]*

%{
#ifndef YYSTYPE
#define YYSTYPE char*
#endif
#include "tex_parse.tab.h"
#include <stdio.h>
#include <string.h>
#include "librairie/html.h"

void print_newline();
void print_space();
%}

%%

\n {fprintf(f_output, "&nbsp;"); /*si on est dans une balise ca affiche une espace, sinon, ca fait rien (c'est la bonne fonctionnement)*/}

<TABULAR,INITIAL>"["    {return OPEN_SQUARE;}
<TABULAR,INITIAL>"]"    {return CLOSE_SQUARE;}
<TABULAR,INITIAL,IMAGE_STRING>"{"    {return OPEN_BRACE;}
"}"                     {return CLOSE_BRACE;}

\n{OPEN_SPACE}\n        {print_newline();}

\\\\ |
"\newline" {
	print_newline();
}

<TABULAR,INITIAL>{SPACE_OU_NEWLINE_INFINI}\\tableofcontents {
        return TOC_COMMANDE;
}

{TROUS}\$	{
        BEGIN EQUATION;
	return BEGIN_EQUATION_DOLLAR;
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

"\\textbackslash" {
	yylval=strdup("\\");
	return CHAR;
}

<NOM_TITLE>\} {
	/*ferme le titre après que le string du titre est lu et envoyé*/
	BEGIN INITIAL;
}

<NOM_TITLE>{STRING_SANS_PONC}*/\} {
	/*cherche string du titre*/
	yylval=strdup(yytext);
	return TITLE;
}

"\\maketitle" {
	return MAKETITLE;
}

"\\url" {
	return URL;
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

"\\part" {
	return PART;
}

"\\chapter" {
	return CHAPTER;
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

{TROUS}"\\includegraphics" {
	BEGIN(IMAGE_STRING);
	return IMAGE;
}

<IMAGE_STRING>{STRING_POUR_IMAGE} {
	yylval=strdup(yytext);
	BEGIN(INITIAL);
	return STRING;
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

<EQUATION>{TROUS}{NBR} {
	yylval=strdup(yytext);
	return NBR_EQUATION;
}

<EQUATION>{TROUS}{L} {
	yylval=strdup(yytext);
	return VAR_EQUATION;
}

<EQUATION>{TROUS}"+" {
	return PLUS_EQUATION;
}

<EQUATION>{TROUS}"-" {
	return MINUS_EQUATION;
}

<EQUATION>{TROUS}"*" {
	return TIMES_EQUATION;
}

<EQUATION>{TROUS}"/" {
	return DIVIDE_EQUATION;
}

<EQUATION>{TROUS}"=" {
	return EGAL_EQUATION;
}

<EQUATION>{TROUS}"<" {
	return LESS_THAN_EQUATION;
}

<EQUATION>{TROUS}">" {
	return MORE_THAN_EQUATION;
}

<EQUATION>{TROUS}"{" {
	return OPEN_BRACE;
}

<EQUATION>{TROUS}"}" {
	return CLOSE_BRACE;
}

<EQUATION>{TROUS}"_" {
	return SUBSCRIPT_EQUA;
}

<EQUATION>{TROUS}"^" {
	return CHAPEAU_EQUA;
}

<EQUATION>{TROUS}"\\infty" {
	return INFINI;
}

<EQUATION>{TROUS}"\\sum_" {
return SOMME_EQUA;
}

<EQUATION>{TROUS}"\\prod_" {
	return PROD_EQUA;
}

<EQUATION>{SPACE_OU_NEWLINE_INFINI}"\\end"{TROUS}"{equation}" {
	BEGIN INITIAL;
	return END_EQUATION;
}

<EQUATION>{SPACE_OU_NEWLINE_INFINI}${TROUS} {
	BEGIN INITIAL;
	return END_EQUATION_DOLLAR;
}

<EQUATION>\n {
	/* pour que ca plante; didn't bother creating NEWLINE cause it doesn't matter */
	return SPACE;
}

"pt"/"]" {
	yylval=yytext;
	return TAILLE; /*on garde pour si on decide de refaire opt de paraghape à la fin */
}

<TABULAR,INITIAL>{L}{A}* {
	yylval=strdup(yytext);
	return WORD;
}

{STRING_SANS_PONC}* {
	yylval=strdup(yytext);
	return STRING;
}

\\. {
	yylval=strdup(yytext+1);
	return CHAR;
}

.   {
	yylval=strdup(yytext);
	return CHAR;
}

%%

void print_newline()
{
	fprintf(f_output, "</br>");
}

void print_space()
{
	fprintf(f_output, "&nbsp;");
}
