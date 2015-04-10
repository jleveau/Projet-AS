#include "tools.h"

/* ajoute une fonction dans la liste de fonctions,
 * la liste ne depend pas d'une pile car les fonctions sont accessibles partout dans le code*/
void new_function(char* nom, char* description, list arguments, int nb_param){
	function f=malloc(sizeof(*f));
	f->nom=nom;
	f->description=description;
	f->arguments=arguments;
	f->nb_arguments=nb_param;
	add_to_list(function_list,f);
}

list list_create(){
	list l=malloc(sizeof(*l));
	l->first=NULL;
	return l;
}

/* cree une variable et l'ajoute dans la liste au sommet de la pile */
void create_variable(char* nom,char* type, char* description){
	variable v=malloc(sizeof(*v));
	v->nom=nom;
	v->type=type;
	v->description=description;
	list l=stack_top(variables_stack);

	add_to_list(l,v);
}

void add_parameter(char* nom, char* type,char* description){
	
	printf("iiiii \n");
	function f = (function)function_list->first;
	
	if (!f){
		printf("null \n");
		parameters_allowed=1;
		function f=malloc(sizeof(*f));
		f->nom=NULL;
		f->arguments=list_create();
		printf("%s avant \n",f->nom);

	}
	if (f->nom!=NULL){
		printf("nom \n");
		parameters_allowed=1;
		function f=malloc(sizeof(*f));
		f->arguments=list_create();
		f->nom=NULL;
	}
	printf("apres \n");
	variable v = malloc(sizeof *v);
	v->type=type;
	v->nom=nom;
	v->description="param description";
	
	add_to_list(f->arguments,v);
	
	add_to_list(function_list,f);
}

void add_to_list(list l,void* elem){

	cell new=malloc(sizeof(*new));
	new->elem=elem;
	new->next=l->first;
	l->first=new;
}

void name_function(char* type,char* nom,char* description){
	function f= (function)function_list->first;
	if (!parameters_allowed){
		f=malloc(sizeof(*f));
		f->arguments=list_create();
		f->nom=NULL;
	}
	f->nom=nom;
	f->type=type;
	f->description=description;
}

void deny_parameter(){
	parameters_allowed=0;
}

void new_block(){
	stack_push(variables_stack,list_create());
}

void print_function(function f){
	printf("%s %s : %s \n",f->type, f->nom,f->description);
}

void print_functions(){
	list l=function_list;
	while (l->first!=NULL){
		print_function((function)l->first->elem);
		l->first=l->first->next;
	}
}



void print_variable(variable v){
	printf("%s %s : %s \n",v->type, v->nom,v->description);
}

// affiche la liste au sommet de la pile de variables
void print_variables(){
	list l=(list)stack_top(variables_stack);
	while (l->first!=NULL){
		print_variable((variable)l->first->elem);
		l->first=l->first->next;
	}
}

