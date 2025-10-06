#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid size\n");
        return 0;
    }
    double arr[n];  
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    int start = 0, end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--; 
    }
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%lf ",arr[i]);
    }
    printf("\n");
    return 0;
}
