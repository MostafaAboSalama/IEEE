#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size1;
    int arr1[100];
    printf("Enter the size of arr1 : ");
    scanf("%d",&size1);
    for(int i=0;i<size1;i++)
    {
        printf("Enter element[%d] : ",i+1);
        scanf("%d",&arr1[i]);
    }
    int size2;
    int arr2[100];
    printf("Enter the size of arr2 : ");
    scanf("%d",&size2);
    for(int i=0;i<size2;i++)
    {
        printf("Enter element[%d] : ",i+1);
        scanf("%d",&arr2[i]);
    }
     int size3=size1+size2;
    int arr3[100];
    for(int i=0;i<size1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=size1;i<size3;i++)
    {
        arr3[i]=arr2[i-size1];
    }
    for(int i=0;i<size3;i++)
    {
        printf("%d ",arr3[i]);
    }

    return 0;
}
