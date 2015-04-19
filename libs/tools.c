#include "tools.h"

/* prend le nombre de chaine en parametre nb_args, et 
 * retourn la concatenation des nb_args chaines 
 * exemple string_concat(3,"toto","tata","titi") retourne tototatatiti
 * La fonction detruit les chaine en parametre. Donc si besoin de passer des chaine litterales "quelquechose", utiliser strdup("quelquechose");
 * */

char* string_concat(int nb_args,...){
	if (nb_args==0)
		return NULL;
	va_list ap; //création du pointeur
    va_start(ap,nb_args); //initialisation sur le premier paramètre
    int i=0;
    size_t length=1;
    char* s=NULL;
    while (i<nb_args){
		s=va_arg(ap,char*);
		length+=strlen(s)+1;		 //+1 a cause de l'espace
		i++;
	}
	s=malloc(length);  //On calcul la taille, puis on alloue (ça parait plus malin que de faire n fois un realloc)
	va_start(ap,nb_args);
	char* s2=va_arg(ap,char*);
	strcpy(s,s2);
	i=1;
	free(s2);
    while (i<nb_args){
		s2=va_arg(ap,char*);
		strcat(s," ");
		strcat(s,s2);
		free(s2);
		i++;
	}
	va_end(ap);
	
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

void list_destroy(list l){
	if (l){
		if (!list_empty(l)){
			cell c=l->first;
			while (c){
				cell next=c->next;
				free(c);
				c=next;
			}
		}
		free(l);
	}
}

void destroy_function_list(){
	list l=function_list;
	if (l){
		if (!list_empty(l)){
			cell c=l->first;
			while (c){
				cell next=c->next;
				function f=(function)c->elem;
				free(f->nom);
				free(f->type);
				free(f->description);
				destroy_variable_list(f->arguments);
				free(f);
				free(c);
				c=next;
			}
		}
		free(l);
	}
}

void destroy_variable_list(list var_list){
	if (var_list){
		if (!list_empty(var_list)){
			cell c=var_list->first;
			while (c){
				cell next=c->next;
				destroy_variable((variable)c->elem);
				free(c);
				c=next;
			}
		}
		free(var_list);
	}
}

void destroy_variable(variable v){
	free(v->nom);
	free(v->type);
	free(v->description);
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
char* create_variable_id(variable v,int id){	
	char str_id[20];
	sprintf(str_id,"%d%s",id,v->nom);
	return strdup(str_id);
}

char* create_name_id(char* name){
	block b=(block)stack_top(block_stack);
	char* id=malloc(strlen(b->id)+strlen(name)+1);
	strcpy(id,b->id);
	strcat(id,name);
	return id;
}

/* cree une variable et l'ajoute dans la liste au sommet de la pile */

variable create_variable(char* nom,char* type, char* description){
	variable v=malloc(sizeof(*v));
	v->nom=nom;
	v->type=type;
	v->description=description;
	block b=(block)stack_top(block_stack);
	
	v->id=create_variable_id(v,id_block-1);
    add_to_list(b->variables,v);
    return v;
}

void add_parameter(char* nom, char* type,char* description){	
	variable v=malloc(sizeof(*v));
	v->nom=nom;
	v->type=type;
	v->description=description;
	v->id=create_variable_id(v,id_block);
	add_to_list(parameter_list,v);
	
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

	if (l1 && !list_empty(l1)){
		c=l1->first;
		while (c){
			add_to_list(l,c->elem);
			c=c->next;
		}
	}
	if (l2 && !list_empty(l2)){
		c=l2->first;
		while(c){
			add_to_list(l,c->elem);
			c=c->next;
		}
	}
	return l;
}

/* Empile un nouveau block dans block_stack, et retourne le texte pour la balise html*/
void  new_block(){
  block top_block=(block)stack_top(block_stack);
 
  char block_nameID[20];	
  sprintf(block_nameID, "block%d", id_block);
  
  block b=malloc(sizeof(*b));
  b->id=strdup(block_nameID);
    
  if (top_block){
	b->variables=list_concat(top_block->variables,parameter_list);
	list_destroy(parameter_list);
	parameter_list=list_create();
	}
  else {
	  b->variables=parameter_list;
	  parameter_list=list_create();
  }
  id_block++;
  stack_push(block_stack, b);
}

void block_destroy(block b){
	free(b->id);
	list_destroy(b->variables);
	free(b);
}

/* Pop un block de la pile, et retourne le texte de la fin de balise pour le html*/
void fin_block(){
  block b=(block)stack_top(block_stack);  
  print_variables();
  stack_pop(block_stack);
  block_destroy(b);
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
	if (!b){
		printf("variable stack empty \n");
		return;
	}
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
