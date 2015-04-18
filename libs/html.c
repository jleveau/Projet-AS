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

balise print_debut_balise_id(char *nom, char* id)
{
	balise b=creer_balise(nom,id);
	fprintf(f_output, "<%s ",b->nom);
     attribut it=b->attributs;
     ajouter_attribut(b,"id",id);
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
  balise block=print_debut_balise_id("div", block_nameID);
  ajouter_attribut(block, "class", block_nameID);
  ajouter_attribut(block, "value", block_nameID);
  print_fin_debut_balise();	
  fprintf(f_output, "<a style=\"visibility:hidden;\" name=\"%s\">{</a>", block_nameID);
	return block;
	}

// ferme la balise ouvrante apres ajout (éventuel) des attributs (éventuels)
void print_fin_debut_balise(){
	fprintf(f_output, ">");
}

/* Crée une balise autour d'un identifiant.
 * Son id est
 * pour une variable : <id_block><nom_variable>
 * pour une fonction : <nom_de_la_fonction>
 * 
*/
void print_balise_identifier(char* name){
	//Construction de l'id :
	char* id;
	char* class;
	function f=getFunction(name);

	if (f){ // Soit f vaut UNNAMED_FUNCTION , soit f est une fonction
		if (f==UNNAMED_FUNCTION){
			fprintf(stderr,"UNNAMED");
		}
		fprintf(stderr,"variable : %s \n",name);
		id=name;
		class="fonction";
	}
	else{
		variable v=getVariable(name);
			fprintf(stderr,"variable : %s \n",name);
		if(v){
			id=v->id;
			class="variable";
		}
		else{
			id=create_name_id(name);
			class="variable";
		}
	}
    
	//Ecriture de la base <span class=... id=...> name </span>
	fprintf(f_output,"<span href=\"#\"class=\"%s-activable\">",class);
	fprintf(f_output,"%s",name);
    balise b=print_debut_balise("span",class);
    fprintf(f_output," value=\"%s\" ",id);
    print_fin_debut_balise();
    if(f && f!=UNNAMED_FUNCTION){
       print_function_html(f);
    }
    else
    {
       fprintf(f_output,"je suis une variable toute mignonne");
       
    }
    print_fin_balise(b);
	fprintf(f_output,"</span>");
    printf("print--- \n");
    print_variables();
    print_functions();
	printf("print--- \n");
}


void print_balise_span(char* type, char* param)
{
   balise b=print_debut_balise("span",type);
   print_fin_debut_balise();fprintf(f_output,"%s",param);
   print_fin_balise(b);
   
}
