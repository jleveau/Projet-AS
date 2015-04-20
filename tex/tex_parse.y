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

%start START

%%

START
	: CONTENUS { }
	;


CONTENUS
	: CONTENU {/* CONTENUS CONTENU */}
	;

CONTENU
	: BACKSLASH COMMANDE {}
	|
	;


COMMANDE
	: TITLE '{'STRING'}' {printf("<h1>%s<\\h1>", $4);}
	| SECTION '{'STRING'}' {printf("<section>%s<\\section>", $4);}
	| PARAGRAPH '{'STRING'}' {printf("<p>%s<\\p>", $4);}
	;

STRING
	:
	| STRING SPACE WORD {sprintf($$, "%s %s", $1, $3);}
	;


%%

void yyerror(const char *s){
	fprintf(stderr,"syntaxe error %s",s);
}

