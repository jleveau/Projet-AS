

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
   int id; //pour les blocs 
};




void ajouter_attribut(balise b, char* nom, char* val){
	attribut a=malloc(sizeof(*a));
    a->nom = nom;
    a->valeur =val;
    
	a->next=b->attributs;
	b->attributs=a;
    fprintf(f_output, "%s=\"%s \" ",a->nom,a->valeur);
    
}

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

int anchor_balise(){
	
}

//balise qu'il faut cliquer pour retourner à l'ancre
//pour les balises
/*void clique_anchor_balise(char* id ){
	fprintf(f_output, "<a href=\"%s\">}</a>", id);
}
*/

//balise block
balise creer_balise_block(char* block_nameID){
  balise block=print_debut_balise("div", block_nameID);
  //ajouter_attrribut(block, "name", block_nameID);
  print_fin_debut_balise();	
  fprintf(f_output, "<a name=\"%s\">{</a>", block_nameID);
	return block;
	}

// ferme la balise ouvrante apres ajout (éventuel) des attributs (éventuels)
void print_fin_debut_balise(){
	fprintf(f_output, ">");
}


void print_balise_span(char* type, char* param)
{
   balise b=print_debut_balise("span",type);
   print_fin_debut_balise();fprintf(f_output,"%s",param);
   print_fin_balise(b);
   
}
