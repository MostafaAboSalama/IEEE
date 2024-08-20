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
    int max1=arr[0];
    int max2=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max1)
            max1=arr[i];
    }
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max2 && arr[i]!=max1)
            max2=arr[i];
    }
    printf("second largest = %d",max2);

    return 0;
}
