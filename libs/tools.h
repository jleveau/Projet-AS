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
	char* type;
	char* description;
} *variable;

typedef struct function_t {
	char* nom;
	char* type;
	char* description;
	list arguments;
	int nb_arguments;
} *function;

int parameters_allowed; 


/* Englobe les piles de déclaration (variables, et typedef) */

stack variables_stack;


void new_block();

list function_list;
stack typedef_stack;


void create_variable(char* name,char* type,char* description);

void add_parameter(char* nom, char* type,char* description);
void name_function(char* type,char* nom,char* description);

void add_to_list(list l,void* elem);
list list_create();

void print_variable(variable v);
void print_variables();
void print_function(function f);
void print_functions();
void deny_parameter();

#endif
