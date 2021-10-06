#ifndef _stack_H
#define _stack_H
#include<stddef.h>
#include<stdbool.h>
typedef int stackEntry;

 typedef struct stack{
   stackEntry *elements;
   size_t size;
   int top;
   } stack;
stack* stack_create(size_t stack_size);
 int stack_pop(stack* stack,stackEntry *item);
 int stack_push(stack* stack,stackEntry item);
 int stack_top(stack* stack,stackEntry *item);
  bool stack_is_Empty(stack* stack);
  bool stack_is_full(stack* stack);
  void stack_destroy(stack* stack);

  #define STACK_OK 0
  #define STACK_ERROR_EMPTY -1
  #define STACK_ERROR_FULL -2

  #endif
