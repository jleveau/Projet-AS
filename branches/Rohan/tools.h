#ifndef TOOLS_H
#define TOOLS_H
#include <stdio.h>
#include <stdlib.h>





typedef struct list_t {
	char* val;
	struct list_t* next;
} *list;


list function_list;

void add_to_list(list l,char* name);


#endif
