#include <stdio.h>
#include <stdlib.h>

void swapArr(int arr1[], int arr2[], int* size, int* size2);

int main()
{
    int arr1[20];;
    int size1;
    int arr2[20];;
    int size2;
    printf("Enter the size of arr1 : ");
    scanf("%d",&size1);
    for(int i=0;i<size1;i++)
    {
        printf("Enter element number {%d} of array 1: ",i+1);
        scanf("%d",&arr1[i]);
    }
printf("\n");
    printf("Enter the size of arr2 : ");
    scanf("%d",&size2);
    for(int i=0;i<size2;i++)
    {
        printf("Enter element number {%d} of array 2: ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("Before Swapping :\n");
  for(int i=0;i<size1;i++)
    {
        printf("Array1 element number {%d} = %d \n ", i+1, arr1[i]);

    }
printf("\n");
     for(int i=0;i<size2;i++)
    {
        printf("Array2 element number {%d} = %d \n ", i+1, arr2[i]);
    }

swapArr(arr1, arr2, &size1, &size2);

  printf("After Swapping :\n");

    for(int i=0;i<size1;i++)
    {
        printf("Array1 element number {%d} = %d \n ", i+1, arr1[i]);

    }

printf("\n");
    for(int i=0;i<size2;i++)
    {
        printf("Array2 element number {%d} = %d \n ", i+1, arr2[i]);
    }

    return 0;
}

void swapArr(int* array1, int* array2, int* size1, int* size2)
{
    int maxSize = (*size1 > *size2) ? *size1 : *size2;

    for (int i = 0; i < maxSize; i++) {
        if (i < *size1 && i < *size2) {
            int temp = *(array1 + i);
            *(array1 + i) = *(array2 + i);
            *(array2 + i) = temp;
        }
        else if (i < *size1)
            *(array2 + i) = *(array1 + i);
        else if (i < *size2)
            *(array1 + i) = *(array2 + i);
    }

    int temp = *size1;
    *size1 = *size2;
    *size2 = temp;
}

