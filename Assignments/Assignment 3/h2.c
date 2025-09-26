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
    int min = INT_MAX;
    int min2 = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=min2 && arr[i]!=min){
            min2 = arr[i];
        }
    }
    if(min2==INT_MIN){
        printf("Smallest element: %d\n",min);
        printf("No second smallest element\n");
    }
    else{
        printf("Smallest element: %d\n",min);
        printf("Second smallest element %d\n",min2);
    }
    return 0;
}