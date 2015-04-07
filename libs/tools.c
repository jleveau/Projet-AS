#include "tools.h"

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
	list l=stack_top(id_manager->variables_stack);

	add_to_list(l,v);
}

void add_to_list(list l,void* elem){

	cell new=malloc(sizeof(*new));
	new->elem=elem;
	new->next=l->first;
	l->first=new;
}

void new_block(){
	stack_push(id_manager->typedef_stack,list_create());
	stack_push(id_manager->variables_stack,list_create());
}

void init_id_manager(){
	id_manager=malloc(sizeof(*id_manager));
	id_manager->typedef_stack=stack_create();
	id_manager->variables_stack=stack_create();
	new_block();
}


void print_variable(variable v){
	printf(" %s : %s \n", v->nom,v->description);
}

// affiche la liste au sommet de la pile de variables
void print_variables(){
	list l=(list)stack_top(id_manager->variables_stack);
	while (l->first!=NULL){
		print_variable((variable)l->first->elem);
		l->first=l->first->next;
	}
}

