#ifndef TOOLS_H
#define TOOLS_H
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct cell_t{
	void* elem;
	struct cell_t* next;
}*cell;

typedef struct list_t {
	cell first;
} *list;

typedef struct variable_t {
	char* nom;
	char* description;
} *variable;

typedef struct function_t {
	char* nom;
	char* description;
	variable* arguments; //Le nombre d'arguments ne changeant pas, on va utiliser un tableau.
	int nb_arguments;
} *function;



/* Englobe les piles de déclaration (variables, et typedef) */

stack variables_stack;


void new_block();
void init_id_manager();

list function_list;
stack typedef_stack;


void create_variable(char* name, char* description);
void add_to_list(list l,void* elem);
list list_create();

void print_variable(variable v);
void print_variables();

#endif
