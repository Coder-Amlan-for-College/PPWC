/*7. Find the roots of a quadratic equation.*/
#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    printf("Enter the coeff of x^2: ");
    scanf("%lf",&a);
    if(a==0){
      printf("Invalid input");
      return 0;   
    }

    printf("Enter the coeff of x: ");
    scanf("%lf",&b);

    printf("Enter the constant c: ");
    scanf("%lf",&c);
    
    double d = b*b - 4*a*c;
    if(d>0){
        double r1 = (-b + sqrt(d))/(2*a);
        double r2 = (-b - sqrt(d))/(2*a);
        printf("The roots are: %lf and %lf\n",r1,r2);
    }
    else if(d==0){
        double r = (-b + sqrt(d))/(2*a);
        printf("The root is: %lf\n",r);
    }
    else{
        printf("The roots are imaginary\n");
    }
    return 0;
}
