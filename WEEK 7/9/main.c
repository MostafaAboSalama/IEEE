#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size,pos,e;
    int arr[100];
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter element[%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to insert : ");
    scanf("%d",&e);
    printf("Enter the position : ");
    scanf("%d",&pos);
    size++;
    for(int i=size-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos-1]=e;
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
