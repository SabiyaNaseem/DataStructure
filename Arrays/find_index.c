#include<stdio.h>
#include<assert.h>

int find_index(int *ptr,int size,int num){
  for(i=0;i<size;i++){
   if(ptr[i]=num)
   return i;
   }
   return -1;
}
int main(){
 int arr[]={1,2,3,4,5};
int size=sizeof arr/sizeof arr[0];
 int num=5;
   int result=find_index(arr,size,num);
   printf("the index of %d is %d\n",num,result);

   assert(find_index(arr,4,2)==1);
   assert(find_index(arr,4,3)==2);
   assert(find_index(arr,4,2)==3);
   return 0;
   }
