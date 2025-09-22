/*8. Find GCD and LCM of two numbers.*/
#include <stdio.h>

int main(){
  int n1,n2;
  printf("Enter the first number: ");
  scanf("%d",&n1);
  
  printf("Enter the second number: ");
  scanf("%d",&n2);
  int gcd = 1;
  int min = (n1<n2)?n1:n2;
  for(int i=1;i<=min;i++){
    if(n1%i==0 && n2%i==0){
      gcd = i;
    }
  }
  int lcm = n1*n2/gcd;
  printf("GCD: %d and LCM %d",gcd,lcm);
}
