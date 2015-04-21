/*			contenu =n'importe quoi
			text=que de tu texte
*/

%{
#ifndef YYSTYPE
# define YYSTYPE char*
#endif
#include <stdio.h>
#include <stdlib.h>
#include "libs/html.h"
void yyerror(const char *s);
int yylex(void);
extern YYSTYPE yylval;
%}

%token TEXT BEG WORD BACKSLASH SPACE
%token SECTION PARAGRAPH TITLE

%start start

%%

start
	: contenus { }
	;


contenus
	: contenu {/* CONTENUS CONTENU */}
	;

contenu
	: BACKSLASH commande {}
	|
	;


commande
	: TITLE '{' string'}' {printf("<h1>%s<\\h1>", $3);}
	| SECTION '{'string'}' {printf("<section>%s<\\section>", $3);}
	| PARAGRAPH '{'string'}' {printf("<p>%s<\\p>", $3);}
	;

string
	:
	| string SPACE WORD {sprintf($$, "%s %s", $1, $3);}
	;


%%

void yyerror(const char *s){
	fprintf(stderr,"syntaxe error %s",s);
}

