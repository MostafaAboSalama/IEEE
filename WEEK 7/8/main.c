#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size;
    int arr1[100];
    int arr2[100];
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter element[%d] : ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<size;i++)
    {
       arr2[i]=arr1[i];
    }
    for(int i=0;i<size;i++)
    {
        printf("element[%d] of arr1 = %d |", i+1,arr1[i]);
        printf(" element[%d] of arr2 = %d\n", i+1,arr2[i]);
    }

    return 0;
}
