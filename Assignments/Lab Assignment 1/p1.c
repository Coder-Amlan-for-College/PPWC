/* 1.  Write a C Program to find area and circumference of a circle [Consider PI=3.141593].*/
#include <stdio.h>
#define PI 3.141593

int main(){
    double r;
    printf("Enter the radius: ");
    scanf("%lf",&r);
    double area = PI*r*r;
    double circumference = 2*PI*r;
    printf("Area of the circle: %lf \n",area);
    printf("Circumference of the circle: %lf \n",circumference);
}

/*OUTPUT
Enter the radius: 7
Area of the circle: 153.938057
Circumference of the circle: 43.982302*/