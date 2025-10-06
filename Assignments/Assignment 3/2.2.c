#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Invalid size\n");
        return 0;
    }
    double arr[n + 1];  
    printf("Enter the numbers (sorted in order):\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    int isAscending = (arr[0] <= arr[1]) ? 1 : 0;
    for (int i = 1; i < n; i++) {
        if ((isAscending && arr[i] < arr[i - 1]) || (!isAscending && arr[i] > arr[i - 1])) {
            printf("Invalid array\n");
            return 0;
        }
    }
    int num;
    printf("Enter the number you want to insert: ");
    scanf("%d", &num);
    int i = 0;
    for (; i < n; i++) {
        if (isAscending) {
            if (num <= arr[i]) {
                break;
            }
        } else {
            if (num >= arr[i]) {
                break;
            }
        }
    }
    for (int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = num;
    printf("Array after insertion:\n");
    for (int k = 0; k <= n; k++) {
        printf("%lf ", arr[k]);
    }
    printf("\n");
    return 0;
}
