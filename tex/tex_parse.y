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

/* à ajouter dans le fichier html pour tex */
void print_titre(char*);
void print_word_or_char(char*);
void print_balise_formatage(char* style);
void print_fin_b(char* balise);

%}

%token ENTETE_DOCUMENT TITLE MAKETITLE BEGIN_DOCUMENT END_DOCUMENT TEXT BEG WORD BACKSLASH SPACE CHAR
%token BF IT TEXTTT TEXTIT UNDERLINE COLOR TEXTCOLOR TAILLE NB ENUM ITEMIZE ITEM TABULAR EQUATION END
%token SECTION PARAGRAPH 
%token OPEN_BRACE CLOSE_BRACE OPEN_SQUARE CLOSE_SQUARE OPEN_PARENTHESES CLOSE_PARENTHESES SUB
%token A_FAIRE

%start start
					
%%

start
        : ENTETE_DOCUMENT structure {/* contenu peut être vide*/}	
	| {/*latex peut pas compiler un truc vide mais nous on veut le faire pour les tests                                A ENLEVER          */}	
;

structure
        : TITLE[h1] {print_titre($h1);} BEGIN_DOCUMENT contenus MAKETITLE contenus END_DOCUMENT 
	| BEGIN_DOCUMENT  TITLE[h1] {print_titre($h1);} contenus MAKETITLE contenus END_DOCUMENT
	|	
;


contenus
        : contenus string_OU_appel_commande_simple	{/*OU car ca revient tout seul*/} 
	|	
;


string_ET_appel_commande_simple
        : string_ET_appel_commande_simple string_OU_appel_commande_simple {/*ET pour que l'interieur des commandes ex {ggg} peuuvent être un mélange de commandes et strings */}
	| string_OU_appel_commande_simple
        ;

string_OU_appel_commande_simple
        : string 
	| appel_commande_simple
        ;

string
	:string word_or_char 
	| word_or_char 
	;

word_or_char
:WORD {print_word_or_char($1);}
	| CHAR {print_word_or_char($1);}
	;


appel_commande_simple
: formatage_texte_sans_param[style]  OPEN_BRACE {print_balise_formatage($style);} string_ET_appel_commande_simple CLOSE_BRACE {print_fin_b($style);}
	;

formatage_texte_sans_param
	:TEXTIT {$$="em";}
	|TEXTTT {$$="b";}
	|UNDERLINE{$$="span";}
;

%%


void yyerror(const char *s){
	fprintf(stderr," %s",s);
}

void print_titre(char* titre){
    fprintf(f_output, "<h1>%s</h1>", titre);
    }

void print_balise_formatage(char* style){
    if(!strcmp(style, "span")){
	/*pour underline; à améliorer s'il y a du temos*/
	style="span style= \"text-decoration:underline\"";
	}
    fprintf(f_output, "<%s>", style);
    }

void print_fin_b(char* balise){
    fprintf(f_output, "</%s>", balise);
    }

void print_word_or_char(char* word_or_char){
    fprintf(f_output, "%s", word_or_char);
    }
