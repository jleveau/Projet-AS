#ifndef TOOLS_H
#define TOOLS_H

#define _GNU_SOURCE 1

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "html.h"
#include <stdarg.h>

typedef struct cell_t
{
	void* elem;
	struct cell_t* next;
} *cell;

typedef struct list_t
{
	cell last;
	cell first;
} *list;

typedef struct variable_t
{
	char* nom;
	char* type;
	char* description;
	char* id;
} *variable;

typedef struct function_t
{
	char* id;
	char* nom;
	char* type;
	char* description;
	list arguments;
	int nb_arguments;
} *function;

typedef struct block_t
{
	char* id;
	list variables;
} *block;

function UNNAMED_FUNCTION;

char* read_buffer;
bool typedef_read;

/* Englobe les piles de déclaration (variables, et typedef) */

stack block_stack;

int id_block;
char* func_id;

void  new_block();
void fin_block();

list function_list;
list parameter_list;
list typedef_list;
stack typedef_stack;

variable getVariable(char* name);
function getFunction(char* name);

void create_variable(list list_var,char* type, char* description);
void add_parameter(char* nom, char* type,char* description);
void name_function(char* type,char* nom,char* description);

void add_to_list(list l,void* elem);
list list_create();
void list_destroy(list l);
bool list_empty(list l);

void declared_function_balise(char* type,char* nom);
void destroy_variable(variable v);
list parse_variables(char* texte);
char* string_concat(int nb_args,...);
char* string_concat_sans_espace(int nb_args,...);
char* create_variable_id(variable v,int id);
char* create_name_id(char* name);
char* print_variable_html(variable v);
void print_function_html(function f);
char* print_function_html_char(function f);

void destroy_function_list();
void destroy_variable_list(list var_list);

void print_variable(variable v);
void print_variables();
char* print_function(function f);
void print_functions();

#endif
