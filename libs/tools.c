#include "tools.h"


char* string_concat(char* s1,char* s2){
	char* s=malloc(strlen(s1)+strlen(s2)+1);
	strcpy(s,s1);
	strcat(s,s2);
	return s;
}

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

/* Retourne la fonction dont le nom est passé en parametre, NULL si elle n'existe pas */
function getFunction(char* name){
	list l=function_list;
	if (list_empty(l))
		return NULL;
	cell c=l->first;
	while (c){
		function f=(function)c->elem;
		if (f->nom){
			if (strcmp(f->nom,name)==0)
				return f;
		}
		else{
			fprintf(stderr,"unnamed get FUNCTION %d \n",UNNAMED_FUNCTION);
			return UNNAMED_FUNCTION;
		}
		c=c->next;
	}
	return NULL;
}

/* Retourne la variable en la cherchant dans le block en haut de pile, NULL si non trouvée */
variable getVariable(char* name){
	block b=(block)stack_top(block_stack);
	list l=b->variables;
	if (list_empty(l))
		return NULL;
	cell c=l->first;
	while (c){
		variable v=(variable)c->elem;
		fprintf(stderr," v->nom %s  name : %s \n", v->nom,name);
		if (strcmp(v->nom,name)==0){
			return v;
		}
		c=c->next;
	}
	return NULL;
}

/* Concatene le nom du block en haut de pile, avec le nom de variable passé en parametre
 * assert si la variable n'existe pas
 * */
char* create_variable_id(variable v){
	block b=(block)stack_top(block_stack);
	
	char* id=malloc(strlen(b->id)+strlen(v->nom)+1);
	strcpy(id,b->id);
	strcat(id,v->nom);
	return id;
}

char* create_name_id(char* name){
	block b=(block)stack_top(block_stack);
	char* id=malloc(strlen(b->id)+strlen(name)+1);
	strcpy(id,b->id);
	strcat(id,name);
	return id;
}

/* cree une variable et l'ajoute dans la liste au sommet de la pile */

void create_variable(char* nom,char* type, char* description){
	variable v=malloc(sizeof(*v));
	v->nom=nom;
	v->type=type;
	v->description=description;
	block b=(block)stack_top(block_stack);
	
	v->id=create_variable_id(v);
    add_to_list(b->variables,v);
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

void print_list(list l){
	if (!l){
		printf("======== ======== \n");	
		return;
	}
	
	cell c=l->first;
	if (c){
		while (c){
			print_variable((variable)c->elem);
			c=c->next;
		}
	}
	printf("======== ======== \n");
}

list list_concat(list l1,list l2){
	list l=list_create();
	cell c;

	if (l1 && l1->first){
		c=l1->first;
		while (c){
			add_to_list(l,c->elem);
			c=c->next;
		}
	}
	if (l2 && l2->first){
		c=l2->first;
		while(c){
			add_to_list(l,c->elem);
			c=c->next;
		}
	}
	return l;
}

//peut-être nécessaire que ca retourne une balise, à voir
block  new_block(list l){
  if(!l){
    l=list_create();
  }
  
  block top_block=(block)stack_top(block_stack);
 
  char block_nameID[20];	
  sprintf(block_nameID, "block%d", id_block);
  
  block b=malloc(sizeof(*b));
  b->id=malloc((strlen(block_nameID)+1)*sizeof(char));
  strcpy(b->id,block_nameID);
  
  if (top_block)
	b->variables=list_concat(top_block->variables,l);
  else 
	  b->variables=l;
  id_block++;
  balise block=creer_balise_block(block_nameID);
  stack_push(block_stack, b);

  return b;
}
//~ 
//~ //test sans block name car ca fait bugger
//~ void fin_blockTEST(){
  //~ fprintf(f_output, "/*fin block */\n");
  //~ fprintf(f_output, "<a href=\"#%s\">}</a>", "block1");
  //~ fprintf(f_output, "</div>");
  //~ 
//~ //stack_pop(variables_stack);
//~ }

void fin_block(){
  block b=(block)stack_top(block_stack);
  //fprintf(f_output, "/*fin block */\n");
  fprintf(f_output, "</div>");
  fprintf(f_output, "<a class=\"fin_block\" value=\".%s\" name=\"#%s\">}</a>",b->id,b->id,b->id,b->id);
  
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

void declared_function_balise(char* type,char* nom){
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

void print_function_html(function f){
   fprintf(f_output,"func : %s %s ( ",f->type,f->nom);
   cell l=f->arguments->first;
   while (l){
      print_variable_html(l->elem);
      fprintf(f_output,",");
      l=l->next;
   }
   fprintf(f_output,")");
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

void print_variable_html(variable v){
fprintf(f_output,"var : %s %s ",v->type,v->nom);

}


// affiche la liste au sommet de la pile de variables
void print_variables(){
	block b=(block)stack_top(block_stack);
	printf("block : %s === \n ",b->id);
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
	printf(" \n\n");
}
