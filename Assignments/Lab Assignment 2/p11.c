#include <stdio.h>

int main(){
 int start,end;
 printf("Enter the start number: ");
 scanf("%d",&start);
 
 printf("Enter the end number: ");
 scanf("%d",&end);
 if(start<0 || end<0){
   printf("Invalid input");
   return 0;
 }
 for(int i=start;i<=end;i++){
   int c=0;
   for(int j=1;j<=i;j++){
     if(i%j==0){
       c++;
     }
   }
   if(c==2){
    printf("%d ",i);
   }
 }
 printf(/n);
 return 0;
 }
