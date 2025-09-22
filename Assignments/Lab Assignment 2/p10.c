/*10. Check a number whether power of two or not.*/
#include <stdio.h>
#include <math.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  double x = log(num)/log(2);
  if((int)x == x){
    printf("Power of 2\n");
  }
  else{
   printf("Not a power of 2\n");
  }
}
