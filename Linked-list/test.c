#include <stdio.h>
#include <assert.h>
#include "LL.h"

int main(){
  Node *values=NULL;
  for(int i=10;i>0;i--){
    values=insert_at_start(values,i);
  }
    printf("Elements in linked list:\n");
    ll_print(values);

   Node *value_8=ll_find(values,8);

  ll_insert_before(values,value_8,111);
   ll_print(values);
   ll_insert_before(values,value_8,122);
   ll_print(values);
   ll_delete(values, value_8);
   ll_print(values);
  
  return 0;
}