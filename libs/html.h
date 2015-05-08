#ifndef HTML_H
#define HTML_H

#include <stdio.h>
#include "tools.h"
#include <stddef.h>
#include <stdlib.h>

typedef struct balise* balise;


struct balise
{
	char* nom;
	char* class;
	int id; //pour les blocs
	char* texte;
};

FILE* f_output;
int indent;

int nb_ligne;

char* print_balise_fonction(char* func);
char* print_balise_variable(char* var);
char* print_balise_declaration_typedef(char* param);
char* print_balise_call_typedef(char* param);


char* print_balise_span(char* type, char* param);
char* print_balise_declaration(char* func);
balise creer_balise_block(char* block_nameID);
char* print_debut_balise_block();
char* print_fin_balise_block();
void push_to_html(char* texte);
int anchor_balise();

#endif
