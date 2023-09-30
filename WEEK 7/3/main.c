#include <stdio.h>
#include <stdlib.h>
int arrSum(int arr[],int size);
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
    printf("SUM = %d",arrSum(arr,size));
    return 0;
}

int arrSum(int arr[],int size)
{
    static int i=0;
    static int sum=0;
    while(i<size)
    {
        sum+=arr[i++];
        arrSum(arr,size);
    }
    return sum;
}
