#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    int a=0,b=1;
    if(n > 0){
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2){
        printf("%d %d ",a,b);
    }
    else{
        printf("%d %d ",a,b);
        for(int i=3;i<=n;i++){
            int c = a+b;
            a = b;
            b = c;
            printf("%d ",c);
        }
    }}
    else{
        printf("Invalid input");
    }
    return 0;
}