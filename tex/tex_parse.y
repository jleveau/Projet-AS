/*			contenus =n'importe quoi
			
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

%token TEXT BEG WORD BACKSLASH SPACE NEW_LINE TAILLE NB
%token SECTION PARAGRAPH TITLE 
%token OPEN_BRACE CLOSE_BRACE OPEN_SQUARE CLOSE_SQUARE OPEN_PARENTHESES CLOSE_PARENTHESES SUB

%start start

%%

start
        :	contenus { /* contenu peut être vide*/}	
        ;


contenus
	: contenus contenu_ou_space {/* CONTENUS CONTENU */}
	| contenu_ou_space	
        ;

contenu_ou_space
        : SPACE
	| appel_commande
        ;

appel_commande
	: BACKSLASH commande options
	;

options
        : options OPEN_SQUARE param CLOSE_SQUARE 
	| OPEN_SQUARE param CLOSE_SQUARE 
	|	
        ;

param
        : NB TAILLE
	| WORD {/*les options non-connus ne vont pas être traités mais ne vont pas arreter le programme*/}
        ;

commande
	: TITLE OPEN_BRACE {printf("<h1>");} texte CLOSE_BRACE {printf("<\\h1>");}
	| sections OPEN_BRACE texte CLOSE_BRACE {printf("\\section>");}
	| PARAGRAPH OPEN_BRACE {printf("<p>");} texte CLOSE_BRACE {printf("<\\p><\\br>");}
	| NEW_LINE {printf("<\\br>");}
;

sections
        : SECTION {printf("<section>");}
        | SUB sections
        ;

texte
        : string_ou_appel_commande 
        | texte string_ou_appel_commande
        ;

string_ou_appel_commande
        : string
	| appel_commande
        ;

string
	: string word_or_space 
	| word_or_space	
;

word_or_space
     : WORD  {printf("%s",$1);}
     | SPACE {printf("%s", " ");}
;

%%

void yyerror(const char *s){
	fprintf(stderr," %s",s);
}

