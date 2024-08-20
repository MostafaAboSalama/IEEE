#include <stdio.h>

void reverseArray(int* arr, int size);

int main()
{
    int arr[20];;
    int size;
    printf("Enter the size of arr : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter element number {%d} of array : ",i+1);
        scanf("%d",&arr[i]);
    }
printf("\n");

     printf("Before reversing:\n");
     for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverseArray(arr, size);

    printf("After reversing:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void reverseArray(int* arr, int size)
{
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
