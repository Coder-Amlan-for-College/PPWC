#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid position");
        return 0;
    }
    printf("Enter the elements: ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]<min){
            min = arr[j];
        }
    }
    printf("Max difference: %d",(max-min));
}