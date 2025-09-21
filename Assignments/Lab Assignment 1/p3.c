/*3.  Write a C Program to find area of triangle for given base and height [area = 0.5 X base X 
height]. */

#include<stdio.h>

int main(){
    double b,h;
    printf("Enter the base of the triangle: ");
    scanf("%lf",&b);
    printf("Enter the height of the triangle: ");
    scanf("%lf",&h);
    double area = 0.5*b*h;
    printf("Area of the triangle: %lf",area);
}

/*
Enter the base of the triangle: 12
Enter the height of the triangle: 13
Area of the triangle: 78.000000 
*/