#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int arr[], int n)
{
    int *p1 = array,*p2 = arr + n - 1;
    while (p1 < p2) {
        swap(p1, p2);
        p1++;
        p2--;
    }
}
void print(int* arr, int n)
{
    // Length pointing at end of the array
    int *length = array + array_size,

    // Position pointing to the beginning of the array
    *position = array;
    printf("Array = ");
    for (position = array; position < length; position++)
        printf("%d ", *position);
}
int main()
{
    int array[] = { 2, 4, -6, 5, 8, -1 };

    printf("Original ");
    print(array, 6);

    printf("Reverse ");
    reverse(array, 6);
    print(array, 6);
    return 0;
}
