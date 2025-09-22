/*9. Reverse a number. */
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int x = (num<0)?-1:1;
    num = num*x;
    int rev = 0;
    while (num>0)
    {
        rev = rev*10+num%10;
        num = num/10;
    }
    printf("Reverse of the number is: %d\n",rev*x);
    return 0;
}
