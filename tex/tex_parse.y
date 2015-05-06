/*
contenus=n'importe quoi
text=que de tu texte
*/

%{
#ifndef YYSTYPE
# define YYSTYPE char*
#endif
#include <stdio.h>
#include <stdlib.h>
#include "libs/html.h"
#include <ctype.h>
void yyerror(const char *s);
int yylex(void);
extern YYSTYPE yylval;

/* à ajouter dans le fichier html pour tex */
void print_titre(char*);
void print_balise_section(int niveau, char*);
void print_word_or_char(char*);
void print_balise(char* style);
void print_fin_b(char* balise);
void print_balise_decoration_span_style(char* style_type, char* style);
void print_case(char* str);
void creer_table(int nb_colonnes, char* str);
void creer_cases(int nb_colonnes, char* str);
void ajout_dans_file(stack pile_1, stack pile2, void* elem);
void creer_balise_mathML(char* display);
void print_balise_equation(char* balise,char* nbr);
void ecrire_debut_somme_equation(char*);
void ecrire_fin_somme_equation(char * val);
void insert_into_toc(int, char*);

//Liste toc=list_create();



%}

%token ENTETE_DOCUMENT TITLE MAKETITLE BEGIN_DOCUMENT END_DOCUMENT TEXT BEG WORD BACKSLASH SPACE CHAR TAB_STRING
%token BF IT TEXTTT TEXTIT UNDERLINE COLOR TEXTCOLOR TAILLE NB ENUM BEGIN_ITEM TABULAR EQUATION END BEGIN_ITEMIZE  END_ITEMIZE  BEGIN_ENUMERATE  END_ENUMERATE BEGIN_TABULAR END_TABULAR BEGIN_EQUATION END_EQUATION BEGIN_EQUATION_DOLLAR END_EQUATION_DOLLAR
%token  PARAGRAPH SECTION SUBSECTION SUBSUBSECTION
%token OPEN_BRACE CLOSE_BRACE OPEN_SQUARE CLOSE_SQUARE OPEN_PARENTHESES CLOSE_PARENTHESES SUB
%token A_FAIRE
%token NBR_EQUATION VAR_EQUATION PLUS_EQUATION MINUS_EQUATION TIMES_EQUATION DIVIDE_EQUATION LESS_THAN_EQUATION MORE_THAN_EQUATION EGAL_EQUATION
%token SOMME_EQUA CHAPEAU_EQUA PROD_EQUA SUBSCRIPT_EQUA
%left WORD CHAR SPACE STRING
%left BF IT TEXTTT TEXTIT UNDERLINE COLOR TEXTCOLOR

%start start

%%

start
	: ENTETE_DOCUMENT structure {/* contenu peut être vide*/}
	| {/*latex peut pas compiler un truc vide mais nous on veut le faire pour les tests								A ENLEVER */}
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
	: STRING {print_word_or_char($1);}
	| WORD {print_word_or_char($1);}
	| appel_commande_sans_BEGIN
	;

appel_commande_sans_BEGIN
	: formatage_texte
	| decoration_texte_sans_param[style]  OPEN_BRACE {print_balise($style);} combinaison_string_ET_appel_commande_sans_BEGIN CLOSE_BRACE {print_fin_b($style);}
	| decoration_texte_avec_param
	;

formatage_texte
	: PARAGRAPH  {print_balise("b");} OPEN_BRACE combinaison_string_ET_appel_commande_sans_BEGIN CLOSE_BRACE  {print_fin_b("b");}  {print_balise("p");} OPEN_BRACE combinaison_string_ET_appel_commande_sans_BEGIN CLOSE_BRACE {print_fin_b("p");}
	| 	SECTION parameter_string[titre] { print_balise_section(1, $titre); insert_into_toc(1, $titre);}  OPEN_BRACE subsections CLOSE_BRACE  {print_fin_b("section");}
	| BEGIN_ITEMIZE {print_balise("ul");} item END_ITEMIZE {print_fin_b("ul");}
	| BEGIN_ENUMERATE {print_balise("ol");} item END_ENUMERATE {print_fin_b("ol");}
	| BEGIN_TABULAR {print_balise("table");} option parameter_word_or_string[nbColonnesEtLignes] TAB_STRING[table_string] {creer_table(strlen($nbColonnesEtLignes), $table_string); }END_TABULAR {print_fin_b("table");/* param ne va pas être traité par nous alors on fait pour que si il est dans le fichier, ca passe */}
	| BEGIN_EQUATION {creer_balise_mathML("block");} equation END_EQUATION	{print_fin_b("math");}
	| BEGIN_EQUATION_DOLLAR {creer_balise_mathML("inline");} equation END_EQUATION_DOLLAR {print_fin_b("math");} 
	;


equation
	: NBR_EQUATION[valeur] script_noms[nom] OPEN_BRACE {print_balise($nom); print_balise_equation("mi", $valeur); print_balise("mi"); /*si pas cette balise supplémentire, tous les symboles d'equation s'empile*/} equation {print_fin_b("mi"); print_fin_b($nom); } CLOSE_BRACE equation
	| NBR_EQUATION {print_balise_equation("mn",$1);} equation
	| VAR_EQUATION[valeur] script_noms[nom] OPEN_BRACE {print_balise($nom); print_balise_equation("mi", $valeur); print_balise("mi");} equation {print_fin_b("mi"); print_fin_b($nom); } CLOSE_BRACE equation
	| VAR_EQUATION {print_balise_equation("mi",$1);} equation
	| PLUS_EQUATION {print_balise_equation("mo","&plus;");} equation
	| MINUS_EQUATION {print_balise_equation("mo","&minus;");} equation
	| TIMES_EQUATION {print_balise_equation("mo","&times;");} equation
	| DIVIDE_EQUATION {print_balise_equation("mo","&divide;");} equation
	| LESS_THAN_EQUATION {print_balise_equation("mo","&lt;");} equation
	| MORE_THAN_EQUATION {print_balise_equation("mo","&gt;");} equation
	| EGAL_EQUATION {print_balise_equation("mo","=");} equation
	| OPEN_BRACE equation_avec_accolade[symbol] OPEN_BRACE {ecrire_debut_somme_equation($symbol);} equation[equa1] CLOSE_BRACE CHAPEAU_EQUA OPEN_BRACE {fprintf(f_output,"</mrow>");} equation[equa2]  {ecrire_fin_somme_equation($equa2);} CLOSE_BRACE equation[equa3] CLOSE_BRACE equation
	|
	;

script_noms
	: SUBSCRIPT_EQUA {$$="msub";}
	| CHAPEAU_EQUA {$$="msup";}
	;

equation_avec_accolade
	: SOMME_EQUA {$$="&sum;";}
	| PROD_EQUA {$$="&prod;";}
	;

item
	: BEGIN_ITEM {print_balise("li");} string_OU_appel_commande_sans_BEGIN {print_fin_b("li");}
	| item  BEGIN_ITEM {print_balise("li");} string_OU_appel_commande_sans_BEGIN {print_fin_b("li");}
	;

texte_ou_vide
	: combinaison_string_ET_appel_commande_sans_BEGIN
	;


subsections
	: SUBSECTION parameter_word_or_string[titre] {print_balise_section(2, $titre);} OPEN_BRACE subsubsections CLOSE_BRACE {print_fin_b("section");} subsections
	| texte_ou_vide SUBSECTION parameter_word_or_string[titre] {print_balise_section(2, $titre);}  OPEN_BRACE  subsubsections  CLOSE_BRACE {print_fin_b("section");} subsections
	|
	;

subsubsections
	: SUBSUBSECTION parameter_string[titre] {print_balise_section(3, $titre);} OPEN_BRACE subsubsections CLOSE_BRACE {print_fin_b("section");}
	| texte_ou_vide {/*bloque ici*/} subsubsection_ou_vide
	|
	;

subsubsection_ou_vide
	: SUBSUBSECTION parameter_word_or_string[titre] {print_balise_section(3, $titre);} OPEN_BRACE combinaison_string_ET_appel_commande_sans_BEGIN CLOSE_BRACE {print_fin_b("section");} subsubsections
	|
	;

decoration_texte_avec_param
	: COLOR parameter_word[color] {print_balise_decoration_span_style("color", $color);} combinaison_string_ET_appel_commande_sans_BEGIN {print_fin_b("span");}
	| TEXTCOLOR parameter_word[color] parameter_word[text] {print_balise_decoration_span_style("color", $color); print_word_or_char($text); print_fin_b("span");}
	;

option
	: OPEN_SQUARE WORD CLOSE_SQUARE
	| OPEN_SQUARE STRING CLOSE_SQUARE
	|
	;

parameter_word_or_string
	: parameter_word
	| parameter_string
	;

parameter_word
	: OPEN_BRACE WORD[param] CLOSE_BRACE {$$=$param;}
	;

parameter_string
	: OPEN_BRACE STRING[param] CLOSE_BRACE {$$=$param;}
	;

decoration_texte_sans_param
	: TEXTIT {$$="em";}
	| TEXTTT {$$="b";}
	| UNDERLINE{$$="span";}
	;

%%

void yyerror(const char *s)
{
	fprintf(stderr,"%s\n",s);
}

void print_titre(char* titre)
{
	fprintf(f_output, "<h1 class=\"title\">%s</h1>", titre);
}

void print_balise_section(int niveau, char* titre)
{
	print_balise("section");
	fprintf(f_output, "<h%d>%s</h%d>", niveau+1, titre, niveau+1);
}

void print_balise(char* style)
{
	if(!strcmp(style, "span"))
	{
		/*pour underline; à améliorer s'il y a du temos*/
		style="span style= \"text-decoration:underline\"";
	}
	fprintf(f_output, "<%s>", style);
}

void print_balise_decoration_span_style(char* style_type, char* style)
{
	fprintf(f_output, "<span style=\"%s:%s\">", style_type, style);
}

void print_fin_b(char* balise)
{
	fprintf(f_output, "</%s>", balise);
}

void print_word_or_char(char* word_or_char)
{
	fprintf(f_output, "%s", word_or_char);
}

void print_case(char* str)
{
	print_balise("td");
	fprintf(f_output, "%s", str);
	print_fin_b("td");
}

/*pour ajouter dans  une "file"
-depile_et_empile entre les deux piles
*/
void ajout_dans_file(stack pile_1, stack pile_2, void* nouveau_fin_de_file)
{
	while(!stack_empty(pile_1))
	{
		stack_push(pile_2, stack_top(pile_1));
		stack_pop(pile_1);
	}
	stack_push(pile_1, nouveau_fin_de_file);
	while(!stack_empty(pile_2))
	{
		stack_push(pile_1, stack_top(pile_2));
		stack_pop(pile_2);
	}
}

void creer_cases(int nb_colonnes, char* str)
{
	int compter_colonnes;
	const char* case_delimeter = "&";
	char *token_Case;
	token_Case = strtok(str, case_delimeter);

	//pour n'avoir pas à se demander s'il faut fermer la balise à la fin ou pas
	if(token_Case==NULL)
	{
		return;
	}

	while( token_Case != NULL )
	{
		if(compter_colonnes % nb_colonnes ==0)
		{
			print_balise("tr");//ligne
		}
		print_case(token_Case);
		compter_colonnes++;
		if(compter_colonnes % nb_colonnes==0)
		{
			print_fin_b("tr");
		}
		token_Case = strtok(NULL, case_delimeter);
	}
	if(compter_colonnes % nb_colonnes!=0)
	{
		print_fin_b("tr");
	}
}

void creer_table(int nb_colonnes, char* str)
{
	int compter_colonnes;
	const char* ligne_delimeter = "\\\\";
	char *token_Ligne;

	/*file en utilisant deux piles (exo d'algo non nécessaire... pour s'amusser et pour embeter Julien :) )*/
	stack file =stack_create();
	stack pile2_pour_file =stack_create();

	token_Ligne = strtok(str, ligne_delimeter);

	while( token_Ligne != NULL )
	{
		ajout_dans_file(file, pile2_pour_file, token_Ligne);
		token_Ligne = strtok(NULL, ligne_delimeter);
	}
	while(!stack_empty(file))
	{
		creer_cases(nb_colonnes, stack_top(file));
		stack_pop(file);
	}
	stack_destroy(file);
	stack_destroy(pile2_pour_file);
}

void creer_balise_mathML(char* display)
{
    fprintf(f_output,"<math xmlns='http://www.w3.org/1998/Math/MathML' display='%s'>", display);
}

void print_balise_equation(char*balise,char* nbr)
{
	if(strcmp==0)
	{
		balise="balise";
	}
	fprintf(f_output,"<%s> %s </%s>",balise, nbr, balise);
}

void ecrire_debut_somme_equation(char * symbol)
{
	fprintf(f_output,"<munderover>");
	fprintf(f_output,"<mo>%s</mo>", symbol);
	fprintf(f_output,"<mrow>");
}

void ecrire_fin_somme_equation(char * val)
{
	fprintf(f_output,"</munderover>");
}

void insert_into_toc(int section_hauteur, char* titre){
    //à faire
}
