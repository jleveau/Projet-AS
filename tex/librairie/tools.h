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

/*pour le table de matières*/
typedef struct toc_cell_t
{
	int profondeur;
	int numero_section[3]; //parti, chapitre, 3 niveau de sections
	char* titre;
	struct toc_cell_t* next;
} *toc_cell;

typedef struct toc_t
{
    int nbParts;
    int nbChaps;
    int nbSecs;
	toc_cell last;
	toc_cell first;
} *toc;

void add_to_toc(toc l, int profondeur,  char* titre);
toc toc_create();
void toc_destroy(toc l);
bool toc_empty(toc l);
void print_toc(toc);
void toc_pop(toc);
/*fin toc*/

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

/* Englobe les piles de déclaration (variables, et typedef) */

stack block_stack;

int id_block;

void  new_block();
void fin_block();

list function_list;
list parameter_list;
stack typedef_stack;

variable getVariable(char* name);
function getFunction(char* name);

variable create_variable(char* nom,char* type, char* description);

void add_parameter(char* nom, char* type,char* description);
void name_function(char* type,char* nom,char* description);

void add_to_list(list l,void* elem);
list list_create();
void list_destroy(list l);
bool list_empty(list l);

void declared_function_balise(char* type,char* nom);
void destroy_variable(variable v);

char* string_concat(int nb_args,...);

char* create_variable_id(variable v,int id);
char* create_name_id(char* name);
void print_variable_html(variable v);
char* print_variable_html_char(variable v);
void print_function_html(function f);
char* print_function_html_char(function f);

void destroy_function_list();
void destroy_variable_list(list var_list);

void print_variable(variable v);
void print_variables();
void print_function(function f);
void print_functions();

#endif
