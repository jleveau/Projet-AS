#include "tools.h"
#include "html.h"

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
	l->last=NULL;
	l->first=NULL;
	return l;

}

/* cree une variable et l'ajoute dans la liste au sommet de la pile */

void create_variable(char* nom,char* type, char* description){
	variable v=malloc(sizeof(*v));
	v->nom=nom;
	v->type=type;
	v->description=description;
	block b=(block)stack_top(block_stack);
	list l=b->variables;

  add_to_list(l,v);
}

void add_parameter(char* nom, char* type,char* description){	
	variable v = malloc(sizeof *v);
	v->type=type;
	v->nom=nom;
	v->description="param description";
	
	if (list_empty(function_list)){
		function f=malloc(sizeof(*f));
		f->nom=NULL;
		f->type=NULL;
		f->arguments=list_create();
		add_to_list(function_list,f);
	}
	
	function f = (function)function_list->last->elem;
	if (!f->nom){
		add_to_list(f->arguments,v);
	}
	else {
		function f=malloc(sizeof(*f));
		f->nom=NULL;
		f->arguments=list_create();
		add_to_list(function_list,f);
		add_to_list(f->arguments,v);
	}
}

void add_to_list(list l,void* elem){
	cell new=malloc(sizeof(*new));
	new->elem=elem;
	new->next=NULL;
	if (!l->last){
		l->first=new;
		l->last=new;
		return;
	}
	l->last->next=new;
	l->last=new;
	l->last->next=NULL;
}

//peut-être nécessaire que ca retourne une balise, à voir
block  new_block(list l){
  if(!l){
    l=list_create();		
  }	
  char block_nameID[20];	
  sprintf(block_nameID, "block%d", id_block); 
  
  
  fprintf(f_output, "/*new block id = %d */\n",id_block);
  block b=malloc(sizeof(*b));
  b->name_id=malloc((strlen(block_nameID)+1)*sizeof(char));
  strcpy(b->name_id,block_nameID);
  b->variables=l;
  id_block++;
  
  balise block=creer_balise_block(block_nameID);

  stack_push(block_stack, b);

  return b;
}

//test sans block name car ca fait bugger
void fin_blockTEST(){
  fprintf(f_output, "/*fin block */\n");
  fprintf(f_output, "<a href=\"#%s\">}</a>", "block1");
  fprintf(f_output, "</div>");
  
//stack_pop(variables_stack);
}

void fin_block(){
  block b=(block)stack_top(block_stack);
  fprintf(f_output, "/*fin block */\n");
  fprintf(f_output, "<a href=\"#%s\">}</a>", b->name_id);
  fprintf(f_output, "</div>");
  
  print_variables();
  stack_pop(block_stack);
}

bool list_empty(list l){
	return !l->last;
}

void name_function(char* type,char* nom,char* description){
	if (list_empty(function_list) ){
		function f= malloc(sizeof(*f));
		f->arguments=list_create();
		f->nom=nom;
		f->type=type;
		f->description=description;
		add_to_list(function_list,f);	
		return;
	}
	function f= (function)function_list->last->elem;
	if (f->nom){
		f=malloc(sizeof(*f));
		f->arguments=list_create();
		f->nom=NULL;
		add_to_list(function_list,f);	
		f->nom=nom;
		f->type=type;
		f->description=description;
		return;
	}
	else {
		f->nom=nom;
		f->type=type;
		f->description=description;
		return;
	}
}

void print_function(function f){
	printf("func : %s %s ( ",f->type,f->nom);
	cell l=f->arguments->first;
	while (l){
		print_variable(l->elem);
		printf(",");
		l=l->next;
	}
	printf(") \n");
}

void print_functions(){
	list l=function_list;
	cell c=l->first;
	while (c){
		print_function((function)c->elem);
		c=c->next;
	}
}

void print_variable(variable v){
	printf("var : %s %s ",v->type, v->nom);
}

// affiche la liste au sommet de la pile de variables
void print_variables(){
	block b=(block)stack_top(block_stack);
	printf("block : %s === \n ",b->name_id);
	list l=b->variables;

	if (!list_empty(l)){
		cell c=l->first;
		while (c){
			print_variable((variable)c->elem);
			printf("\n");
			c=c->next;
		}
		
	}
	else {
		printf("stack variables vide");
	}
	printf(" \n \n");
}

