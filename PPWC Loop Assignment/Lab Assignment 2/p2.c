#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n>0){
    for(int i=1;i<=n;i++){
      sum += i;
    }
   printf("Sum: %d",sum);}
   else{
    printf("Invalid input");
   }
}