#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid size\n");
        return 0;
    }
    double arr[n+1];  
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    double num;
    int pos;
    printf("Enter the number to insert:\n");
    scanf("%lf",&num);
    printf("Enter the position:\n");
    scanf("%d",&pos);
    pos = pos-1;
    if(pos>n || pos<0){
      printf("Invalid position");
    }
    if(pos<n){
     int j=n; 
     for(;j>pos;j--){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = arr[j];
     }
     arr[j] = num;   
    }
    else{
        arr[pos] = num;
    }
    printf("After insertion Array:\n");
      for(int k=0;k<n+1;k++){
       printf("%lf ",arr[k]);
      }
      printf("\n");
    return 0;
}
