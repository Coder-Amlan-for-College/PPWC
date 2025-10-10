#include<stdio.h>
#include<limits.h>
int delete(int arr[],int m,int pos){
    for(int i=pos;i<m-1;i++){
      arr[i] = arr[i+1];
    }
   m--;
   return m;
}
int removeDuplicates(int arr[],int m){
   for(int i=0;i<m;i++){
     for(int j=i+1;j<m;j++){
        if(arr[i]==arr[j]){
            m = delete(arr,m,j);
            j--;
        }
     }
   }
   return m;
}
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the numbers:\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    n = removeDuplicates(arr,n);
    printf("Unqiue elements array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}