#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

/*
 * Le pointeur sur la file : queue
 * la file contient de cellules list_t (morceau de chaine)
 * 
 *   queue -->  list_t->list_t->list_t ...
 * 
 * */

typedef struct list_t* list;


struct list_t{
	list next;
	void* elem;
};

struct queue_t{
	list l;
};


/* create an empty queue */
queue queue_create(void){
  queue q=malloc(sizeof(struct queue_t));
  
  return q;
}

/* return true if and only if the queue is empty */
int queue_empty(queue s){
  return s->l==NULL;
}

/* create an empty queue */
void queue_destroy(queue s){
	while (!queue_empty(s)){
		list tmp=s->l->next;
		free(s->l);
		s->l=tmp;
	}
}


/* push an object on the back of the queue */
void queue_push(queue s, void *object){
	//Si la file est vide
	if (s->l==NULL){
		s->l=malloc(sizeof(struct list_t));
		s->l->elem=object;
		s->l->next=NULL;
	}
	
	//Si on a déjà un élément, on va chercher le dernier pour enfiler
	else{
		list l=s->l;
		while(l->next!=NULL){
			l=l->next;
		}
		list new=malloc(sizeof(struct list_t));
		new->elem=object;
		new->next=NULL;
		l->next=new;
	}
}


/* return the front element of the queue.
   The queue must not be empty (as reported by queue_empty()) */
void* queue_front(queue s){
	if (!queue_empty(s))
		return s->l->elem;
	return NULL;
}

/* pop the front element off of the queue.
   The queue must not be empty (as reported by queue_empty()) */
void queue_pop(queue s){
	list tmp=s->l->next;
	free(s->l);
	s->l=tmp;
}
