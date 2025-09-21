#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if(n == 0){
        printf("Factorial of o is 1");
    }
    else if(n > 0){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    printf("Factorial of %d is %d",n,fact);}
    else{
        printf("Invalid input");
    }
    return 0;
}