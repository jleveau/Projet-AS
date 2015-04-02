

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "html.h"


struct attribut{
  char* nom;
  char* valeur;
  struct attribut * next;
};


struct balise{
   struct attribut* attributs;
   char* nom;
   char* class;
};



void print_fin_balise(struct balise* b){
    fprintf(f_output, "</%s>",b->nom);
    attribut a=b->attributs;
    while (a){
       attribut tmp=a;
		
		a=tmp->next;
		free(tmp);
	}
	free(b);
}

void print_attributs(struct attribut * attrib){
  if(attrib==NULL) return;
  fprintf(f_output, "%s=\"%s\" ", attrib->nom, attrib->valeur);
  print_attributs(attrib->next);
  return;
}

balise creer_balise(char* nom,char* class){
	balise b=malloc(sizeof(*b));
	b->nom=nom;
	b->attributs=NULL;
	b->class=class;
	return b;
}

/* chaque balise a une classe
 */
 
balise print_debut_balise(char* nom,char* class){
	balise b=creer_balise(nom,class);
	
     fprintf(f_output, "<%s ",b->nom);
     attribut it=b->attributs;
     ajouter_attribut(b,"class",class);
     while (it){
         print_attributs(it);
         it=it->next;
     }
     return b;
}

// ferme la balise ouvrante apres ajout (éventuel) des attributs (éventuels)
void print_fin_debut_balise(){
	fprintf(f_output, ">");
}



void ajouter_attribut(balise b,char* nom, char* val){
	attribut a=malloc(sizeof(*a));
    a->nom = nom;
    a->valeur =val;
    
	a->next=b->attributs;
	b->attributs=a;
    fprintf(f_output, "%s=\"%s \" ",a->nom,a->valeur);
    
}

void print_balise_type_specifier(char* param){
	balise b=print_debut_balise("span","type_specifier");
	print_fin_debut_balise();fprintf(f_output, "%s",param); 
	print_fin_balise(b);
}
