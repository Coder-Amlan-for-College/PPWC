#include<stdio.h>

int main(){
 int arr[] = {1,2,3,4,5};
 int *p = arr;
 printf("Forward order: \n");
 for(int i=0;i<5;i++){
  printf("arr[%d] = %d\n",i,*p);
  p++;
 }
 p--;
 printf("\nReverse order:\n");
 for(int i=4;i>=0;i--){
  printf("arr[%d] = %d\n",i,*p);
  p--;
 }
}
