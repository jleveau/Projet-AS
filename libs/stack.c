#include "stack.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

typedef struct list_t * list;

struct list_t
{
    void* elem;
    list next;
};

struct stack_t
{
    list l;
};

/* create an empty stack */
stack stack_create()
{
    stack s=malloc(sizeof(struct stack_t));
    s->l=NULL;
    return s;
}

/* destroy a stack */
void stack_destroy(stack s)
{
    while (s->l != NULL)
    {
        list next = s->l->next;
        free(s->l);
        s->l=next;
    }
    free(s);
}

/* push an object on a stack */
void stack_push(stack s, void *object)
{
    list new = malloc(sizeof(struct list_t));
    new->elem=object;
    new->next=s->l;
    s->l=new;
}

/* return true if and only if the stack is empty */
int stack_empty(stack s)
{
    return (s->l == NULL);
}

/* return the top element of the stack.
   The stack must not be empty (as reported by stack_empty()) */
void * stack_top(stack s)
{
    if (stack_empty(s))
        return NULL;

    return s->l->elem;
}

/* pop an element off of the stack.
   The stack must not be empty (as reported by stack_empty()) */
void stack_pop(stack s)
{
    if (stack_empty(s))
        return ;
    s->l=s->l->next;
}
