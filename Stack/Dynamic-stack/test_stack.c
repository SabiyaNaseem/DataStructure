#include <stdio.h>
#include <assert.h>
#include "dynamic_stack.h"
int main(void){
  int size = 10;
stackEntry a[]={1,2,3,4,5,6,7,8,9,10};
stack* stack=stack_create(size);
assert(!stack_is_full(stack));
for(int i = 0; i < 10; i++)
stack_push(stack, a[i]);

assert(stack_is_full(stack));
stackEntry tos;
  assert(stack_top(stack, &tos)==0);
  printf("Top of stack = %d\n",tos);

  assert(!stack_is_Empty(stack));
  while (!stack_is_Empty(stack)){
    int poped_item;
    stack_pop(stack, &poped_item);
    printf("Poped item %d\n", poped_item);
  }
  assert(stack_is_Empty(stack));
  assert(stack_pop(stack, &tos)!=0);
  return 0;
}
