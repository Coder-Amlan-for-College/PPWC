/* 5.  Write a C Program to find percentage of marks for given 5 subjects*/
#include <stdio.h>

int main(){
    double mark1,mark2,mark3,mark4,mark5;
    printf("Enter the marks in first subject: ");
    scanf("%lf",&mark1);
    printf("Enter the marks in second subject: ");
    scanf("%lf",&mark2);
    printf("Enter the marks in third subject: ");
    scanf("%lf",&mark3);
    printf("Enter the marks in fourth subject: ");
    scanf("%lf",&mark4);
    printf("Enter the marks in fifth subject: ");
    scanf("%lf",&mark5);
    if(mark1<0 || mark2<0 || mark3<0 || mark4<0 || mark5<0){
        printf("Error:Marks cannot be negative");
        return 0;
    }
    if(mark1>100 || mark2>100 || mark3>100 || mark4>100 || mark5>100){
        printf("Marks cannot be greater than 100");
        return 0;
    }
    double per = (mark1+mark2+mark3+mark4+mark5)/500*100;
    printf("Percentage: %lf",per);
}
/*
Enter the marks in first subject: 70
Enter the marks in second subject: 80
Enter the marks in third subject: 90
Enter the marks in fourth subject: 60
Enter the marks in fifth subject: 100
Percentage: 80.000000 */