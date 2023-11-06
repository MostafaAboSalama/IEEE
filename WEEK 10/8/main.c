#include <stdio.h>
#include <stdlib.h>

searchElement(int* arr, int size, int element);

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

    printf("Enter the element to search: ");
    scanf("%d", &element);
    printf("index = %d 'if index = -1 -> does not exist' ", searchElement(arr, size, element));
    return 0;
}

int searchElement(int* arr, int size, int element)
{
    int* ptr = arr;

    for (int i = 0; i < size; i++) {
        if (*ptr == element)
            return i;
        ptr++;
    }
    return -1;
}
