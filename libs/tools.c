#include "tools.h"
#include "html.h"

/* ajoute une fonction dans la liste de fonctions,
 * la liste ne depend pas d'une pile car les fonctions sont accessibles partout dans le code*/
void new_function(char* nom, char* description, variable* params, int nb_param){
  function f=malloc(sizeof(*f));
  f->nom=nom;
  f->description=description;
  f->arguments=params;
  f->nb_arguments=nb_param;
	

  add_to_list(function_list,f);
	
}

list list_create(){
  list l=malloc(sizeof(*l));
  l->first=NULL;
  return l;
}

/* cree une variable et l'ajoute dans la liste au sommet de la pile */
void create_variable(char* nom, char* description){
  variable v=malloc(sizeof(*v));
  v->nom=nom;
  v->description=description;
  list l=stack_top(variables_stack);

  add_to_list(l,v);
}

void add_to_list(list l,void* elem){

  cell new=malloc(sizeof(*new));
  new->elem=elem;
  new->next=l->first;
  l->first=new;
}

//peut-être nécessaire que ca retourne une balise, à voir
char* new_block(list variables_stack){
  fprintf(f_output, "/*new block */\n");
  char block_nameID[20];	
  sprintf(block_nameID, "block%d", id_block); 
  balise block=creer_balise_block(block_nameID);
  // block->id=id_block;
  id_block++;
  if(!variables_stack){
    variables_stack=list_create();		
  }	
  stack_push(variables_stack, variables_stack);
  
return block_nameID; 
}

//test sans block name car ca fait bugger
void fin_blockTEST(){
  fprintf(f_output, "/*fin block */\n");
  fprintf(f_output, "<a href=\"#%s\">}</a>", "block1");
  fprintf(f_output, "</div>");
  
//stack_pop(variables_stack);
}

void fin_block(char* block_nameID){
  fprintf(f_output, "/*fin block */\n");
  fprintf(f_output, "<a href=\"#%s\">}</a>", block_nameID);
  fprintf(f_output, "</div>");
  
//stack_pop(variables_stack);
}


void print_variable(variable v){
  printf(" %s : %s \n", v->nom,v->description);
}

// affiche la liste au sommet de la pile de variables
void print_variables(){
  list l=(list)stack_top(variables_stack);
  while (l->first!=NULL){
    print_variable((variable)l->first->elem);
    l->first=l->first->next;
  }
}

