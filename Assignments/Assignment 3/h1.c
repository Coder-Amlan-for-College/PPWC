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
    int max2 = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=max2 && arr[i]!=max){
            max2 = arr[i];
        }
    }
    if(max2==INT_MIN){
        printf("Largest element: %d\n",max);
        printf("No second largest element\n");
    }
    else{
        printf("Largest element: %d\n",max);
        printf("Second largest element %d\n",max2);
    }
    return 0;
}