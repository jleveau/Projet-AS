#ifndef HTML_H
#define HTML_H


typedef struct attribut* attribut;
typedef struct balise* balise;


void print_fin_balise(struct balise* b);
void print_attributs(struct attribut * attrib);
void print_debut_balise(struct balise* b);

void print_balise_type_specifier(char* param);

#endif
