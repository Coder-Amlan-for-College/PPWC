#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    if(n<1){
      printf("Invalid size");
      return 0;
    }
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int end = 1, start = 0;
    while(start<end){
      if(arr[start]%2==0 && arr[end]%2!=0){
         int temp = arr[start];
         arr[start] = arr[end];
         arr[end] = temp;
         start++;
         end--;
      }
      else if(arr[start]%2!=0 && arr[end]%2!=0){
            start++;
      }
      else if(arr[start]%2==0 && arr[end]%2==0){
            end--;
      }
      else{
        start++;
        end--;
      }
    }
    printf("After separation Array:\n");
      for(int k=0;k<n;k++){
       printf("%d ",arr[k]);
      }
      printf("\n");
    return 0;
}