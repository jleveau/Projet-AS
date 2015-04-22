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

%token TEXT BEG WORD BACKSLASH SPACE
%token TEXTTT TEXTIT UNDERLINE NEW_LINE COLOR TEXTCOLOR TAILLE NB ENUM ITEMIZE ITEM TABULAR EQUATION END
%token SECTION PARAGRAPH TITLE 
%token OPEN_BRACE CLOSE_BRACE OPEN_SQUARE CLOSE_SQUARE OPEN_PARENTHESES CLOSE_PARENTHESES SUB
%token A_FAIRE

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
	: BACKSLASH commande	
	;

commande
: TITLE {fprintf(f_output,"<h1>");}  OPEN_BRACE texte CLOSE_BRACE {fprintf(f_output,"</h1>"); /*texte parce que peut avoir que du texte ou des commandes simples dedans*/}
| TEXTTT {fprintf(f_output,"<b>");}  OPEN_BRACE contenus CLOSE_BRACE {fprintf(f_output,"</b>"); /*contenu parce que peut avoir tous et n'importe quoi dedans*/}
| TEXTIT {fprintf(f_output,"<em>");}  OPEN_BRACE contenus CLOSE_BRACE {fprintf(f_output,"</em>");}
| UNDERLINE {fprintf(f_output,"<span style=\"text-decoration:underline;\">");}  OPEN_BRACE contenus CLOSE_BRACE {fprintf(f_output,"</span>");}
| sections OPEN_BRACE texte CLOSE_BRACE {fprintf(f_output,"</section>");}
| PARAGRAPH {fprintf(f_output,"<p style=\"");} options OPEN_BRACE {fprintf(f_output, "\">");} texte CLOSE_BRACE {fprintf(f_output,"</p></br>");}
| NEW_LINE {fprintf(f_output,"</br>");}
| TEXTCOLOR OPEN_BRACE WORD[color] CLOSE_BRACE OPEN_BRACE {fprintf(f_output,"<span style=\"color:%s;\">", $color);} string CLOSE_BRACE  {fprintf(f_output,"</span>");}
| COLOR OPEN_BRACE WORD[color] CLOSE_BRACE {fprintf(f_output,"<span style=\"color:%s\">", $color);} texte {fprintf(f_output,"</span>");}
| BEG OPEN_BRACE paramSpecifiques[paramOpen] CLOSE_BRACE contenus fin OPEN_BRACE paramSpecifiques[paramClose] CLOSE_BRACE   {if(!strcmp($paramOpen, $paramClose)){ yyerror("open/close param différents");} /* pour begin commandes génériques ex. document etc */}  
| BEG OPEN_BRACE paramSpecifiques texte END OPEN_BRACE paramSpecifiques CLOSE_BRACE   {/* pout begin item etc qui sont suivi par les commandes spécifieques */} 
;

options
        : options OPEN_SQUARE optionInterieur CLOSE_SQUARE 
	| OPEN_SQUARE optionInterieur CLOSE_SQUARE
	|	
;

optionInterieur
: NB TAILLE {fprintf(f_output, "font-size:%spx; ", $1);}
| WORD {/*les options non-connus ne vont pas être traités mais ne vont pas arreter le programme*/}
;

paramSpecifiques
:       enum_ou_itemize CLOSE_BRACE {/*pour itemize vide*/}
	|	enum_ou_itemize CLOSE_BRACE commandesInternes_Enum_ou_Itemize
        |TABULAR CLOSE_BRACE commandesInternes_Tabular
        |EQUATION CLOSE_BRACE commandesInternes_Equation
;

commandesInternes_Enum_ou_Itemize
: commandesInternes_Enum_ou_Itemize BACKSLASH ITEM texte
| BACKSLASH ITEM texte
;

commandesInternes_Tabular
: A_FAIRE {/*à traiter*/;}
;

commandesInternes_Equation
: A_FAIRE {/*à traiter*/;}
;

enum_ou_itemize
:ENUM
     | ITEMIZE
;

fin
:BACKSLASH END
;

sections
: SECTION {fprintf(f_output,"<section style=\"");} options {fprintf(f_output, "\">");}
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
: WORD  {fprintf(f_output,"%s",$1);}
| SPACE {fprintf(f_output,"%s", " ");}
;

%%

void yyerror(const char *s){
	fprintf(stderr," %s",s);
}

