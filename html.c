


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
    printf("</%s>",b->nom);
    attribut a=b->attributs;
    while (a){
		free(a->nom);
		free(a->val);
		attribut tmp=a;
		a=tmp->next;
		free(tmp);
	}
	free(b->nom);
	free(b);
}

void print_attributs(struct attribut * attrib){
  if(attribut==NULL) return;
  printf("%s=\"%s\" ", attribut->nom, attribut->valeur);
  print_attributs(attribut->next);
  return;
}


/* chaque balise a une classe
 */
 
balise print_debut_balise(char* nom,char* class){
	balise b=creer_balise(nom,class);
	
     printf(" <%s ",b->nom);
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
	printf(">");
}

balise creer_balise(char* nom,char* class){
	balise b=malloc(sizeof(*b));
	b->nom=nom;
	b->attributs=NULL;
	b->class=class;
	return b;
}

void ajouter_attribut(balise b,char* nom, char* val){
	attribut a=malloc(sizeof(*a));
	a->next=b->attributs;
	b->attributs=a;
	printf(" %s=\"%s\ " ", attribut->nom, attribut->valeur);
}

void print_balise_type_specifier(char* param){
	balise b=print_debut_balise("span","type_specifier");
	print_fin_debut_balise();printf("%s",param); 
	print_fin_balise(b);
}
