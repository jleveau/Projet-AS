#ifndef HTML_H
#define HTML_H
#include <stdio.h>


typedef struct attribut* attribut;
typedef struct balise* balise;

FILE* f_output;
int indent;
int id_block;

int nb_ligne;


void print_fin_balise(struct balise* b);
void print_attributs(struct attribut * attrib);
balise print_debut_balise(char* nom,char* classe);
void ajouter_attribut(balise b, char *nom, char* val);
void print_fin_debut_balise();
balise creer_balise(char *nom, char* classe);
balise creer_balise_block(char* id);
void print_balise_span(char* type, char* param);
int anchor_balise();

#endif
