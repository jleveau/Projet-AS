#include "tools.h"


void add_to_list(list l,char* name){
	list new=malloc(sizeof(*new));
	new->val=name;
	new->next=l;
	l=new;
}
