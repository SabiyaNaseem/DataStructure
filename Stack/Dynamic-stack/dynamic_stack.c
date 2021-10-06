#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "dynamic_stack.h"
stack* stack_create(size_t stack_size){
stack* stack=calloc(1,sizeof(stack));
stack->size=stack_size;
stack->elements=calloc(stack_size,sizeof(stackEntry));
stack->top=0;
return stack;
}
int stack_pop(stack* stack,stackEntry *item){
if (stack_is_Empty(stack))
return STACK_ERROR_EMPTY;
*item=stack->elements[--stack->top];
return STACK_OK;
}
int stack_push(stack* stack,stackEntry item){
if (stack_is_full(stack))
return STACK_ERROR_FULL;
stack->elements[stack->top++]=item;
return STACK_OK;
}
int stack_top(stack* stack,stackEntry *item){
if (stack_is_Empty(stack))
return STACK_ERROR_EMPTY;
*item=stack->elements[stack->top-1];
return STACK_OK;
}
bool stack_is_Empty(stack* stack){
return stack->top==0;
}
bool stack_is_full(stack* stack){
return stack->top>=stack->size ;
}
void stack_destroy(stack* stack){
free(stack->elements);
free(stack);
}

