#include "tools.h"

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

void print_variable(variable v){
	printf(" %s : %s \n", v->nom,v->description);
}

void print_variables(){
	list l=(list)stack_top(variables_stack);
	while (l->first!=NULL){
		print_variable((variable)l->first->elem);
		l->first=l->first->next;
	}
}
