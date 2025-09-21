 /*8.  Write a C Program to read a positive integer and print sum of first 3 powers 
 (N^1 + N^2 + N^3)*/

 #include<stdio.h>
 #include<math.h>
 int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input");
        return 0;
    }
    int sum = n + n*n + (int)pow(n,3);
    printf("Sum of first three powers: %d",sum);
    return 0;
 }

 /*
Enter a positive integer: 2
Sum of first three powers: 14
 */
