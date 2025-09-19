#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Invalid input");
        return 0;
    }
    int n1=num, rev=0;
    while(n1>0){
       rev = rev*10 + n1%10;
       n1 = n1/10;
    }
    if(rev == num){
        printf("Palindrome");
    }
    else{
        printf("Non Palindrome");
    }
    return 0;
}