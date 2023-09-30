#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int arr[100];
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter element[%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array ordered : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
     printf("\nArray reversed : \n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
