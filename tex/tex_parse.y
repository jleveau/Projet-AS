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
void print_balise(char* style);
void print_fin_b(char* balise);
void print_balise_decoration_span_style(char* style_type, char* style);

%}
			
%token ENTETE_DOCUMENT TITLE MAKETITLE BEGIN_DOCUMENT END_DOCUMENT TEXT BEG WORD BACKSLASH SPACE CHAR
%token BF IT TEXTTT TEXTIT UNDERLINE COLOR TEXTCOLOR TAILLE NB ENUM ITEMIZE ITEM TABULAR EQUATION END
%token SECTION PARAGRAPH 
%token OPEN_BRACE CLOSE_BRACE OPEN_SQUARE CLOSE_SQUARE OPEN_PARENTHESES CLOSE_PARENTHESES SUB
%token A_FAIRE

%left WORD CHAR SPACE STRING
%left BF IT TEXTTT TEXTIT UNDERLINE COLOR TEXTCOLOR
%left CONFLIT1
%left CONFLIT2
		       														
%start start
			
%%

start
        : ENTETE_DOCUMENT structure {/* contenu peut être vide*/}	
	| {/*latex peut pas compiler un truc vide mais nous on veut le faire pour les tests                                A ENLEVER          */}	
;

structure
: TITLE[h1] {print_titre($h1);} BEGIN_DOCUMENT contenus MAKETITLE contenus END_DOCUMENT 
	| BEGIN_DOCUMENT TITLE[h1] {print_titre($h1);} contenus MAKETITLE contenus END_DOCUMENT
	|	
;

contenus
        : combinaison_string_ET_appel_commande_sans_BEGIN {/* contenus string_OU_appel_commande_sans_BEGIN	{OU car ca revient tout seul}*/} 
	|	
;

combinaison_string_ET_appel_commande_sans_BEGIN
        : combinaison_string_ET_appel_commande_sans_BEGIN string_OU_appel_commande_sans_BEGIN {/*ET pour que l'interieur des commandes ex {ggg} peuuvent être un mélange de commandes et strings */} 
	| string_OU_appel_commande_sans_BEGIN  
        ;

string_OU_appel_commande_sans_BEGIN
        : STRING {print_word_or_char($1);/* DEMANDE POURQUOI CA MARCHE COMME CA; prec ne doit pas utiliser un terminal fictif? */}
	| WORD {print_word_or_char($1);}
	| appel_commande_sans_BEGIN
;

appel_commande_sans_BEGIN
: formatage_texte {print_balise("p");} OPEN_BRACE combinaison_string_ET_appel_commande_sans_BEGIN CLOSE_BRACE {print_fin_b("p");}
|decoration_texte_sans_param[style]  OPEN_BRACE {print_balise($style);} combinaison_string_ET_appel_commande_sans_BEGIN CLOSE_BRACE {print_fin_b($style);}
|decoration_texte_avec_param  
;

formatage_texte
: PARAGRAPH OPEN_BRACE {print_balise("b");} combinaison_string_ET_appel_commande_sans_BEGIN {print_fin_b("b");} CLOSE_BRACE
;	


decoration_texte_avec_param
:COLOR parameter[color] {print_balise_decoration_span_style("color", $color);} combinaison_string_ET_appel_commande_sans_BEGIN  {print_fin_b("span");}
|TEXTCOLOR parameter[color] parameter[text] {print_balise_decoration_span_style("color", $color); print_word_or_char($text); print_fin_b("span");}	
;

parameter
:OPEN_BRACE WORD[param] CLOSE_BRACE {$$=$param;}
;

decoration_texte_sans_param
	:TEXTIT {$$="em";}
	|TEXTTT {$$="b";}
	|UNDERLINE{$$="span";}
;

%%


void yyerror(const char *s){
    fprintf(stderr,"%s\n",s);
}

void print_titre(char* titre){
    fprintf(f_output, "<h1>%s</h1>", titre);
    }

void print_balise(char* style){
    if(!strcmp(style, "span")){
	/*pour underline; à améliorer s'il y a du temos*/
	style="span style= \"text-decoration:underline\"";
	}
    fprintf(f_output, "<%s>", style);
    }

void print_balise_decoration_span_style(char* style_type, char* style){
    fprintf(f_output, "<span style=\"%s:%s\">", style_type, style);
    }

void print_fin_b(char* balise){
    fprintf(f_output, "</%s>", balise);
    }

void print_word_or_char(char* word_or_char){
    fprintf(f_output, "%s", word_or_char);
    }
