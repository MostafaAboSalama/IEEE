#include <stdio.h>
#include <stdlib.h>

void copyArr(int* arrPtr,int size);

int main()
{
    int arr[20];;
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter element number {%d} : ",i+1);
        scanf("%d",&arr[i]);
    }
   copyArr(arr, size);
    return 0;
}

void copyArr(int* arrPtr, int size)
{
  int arr2[20];
  printf("Before Copying :\n");
  for(int i=0;i<size;i++)
    {
        printf("Array2 element number {%d} = %d \n ", i+1, arr2[i]);
         *(arr2+i)=*(arrPtr+i); // instead of using another loop.
    }

/* for(int i=0;i<size;i++)
    {
        *(arr2+i)=*(arrPtr+i);
    }*/
  printf("After Copying :\n");

    for(int i=0;i<size;i++)
    {
        printf("Array2 element number {%d} = %d \n ", i+1, arr2[i]);
    }
}
