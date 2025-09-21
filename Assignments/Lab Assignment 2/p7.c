#include<stdio.h>
#include<math.h>
int main(){
    double b,a,c;
    printf("Enter the value of a: ");
    scanf("%lf",&a);

    printf("Enter the value of b: ");
    scanf("%lf",&b);

    printf("Enter the value of c: ");
    scanf("%lf",&c);

    if(sqrt((b*b)-4*a*c)<0){
        printf("Imaginary roots, invalid input!");
        return 0;
    }
    double val = sqrt((b*b)-4*a*c);
    double r1 = (-1*b + val)/(2*a);
    double r2 = (-1*b - val)/(2*a);
    printf("The two roots are %lf and %lf",r1,r2);
    return 0;
}