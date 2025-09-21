/*4.  Write a C Program to calculate a simple interest (SI) for given rate of interest (r), principal 
amount (p), time in years(t), [SI = (p x r x t)/100]. */

#include<stdio.h>

int main(){
    double p,r,t;
    printf("Enter the principal amount: ");
    scanf("%lf",&p);

    printf("Enter the rate of interest:");
    scanf("%lf",&r);

    printf("Enter the time in years: ");
    scanf("%lf",&t);

    double si = (p*r*t)/100.0;
    printf("Simple Interest: %lf",si);

}

/*
Enter the principal amount: 10000
Enter the rate of interest:10
Enter the time in years: 2
Simple Interest: 2000.000000
*/