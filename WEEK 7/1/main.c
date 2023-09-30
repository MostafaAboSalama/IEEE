#include <stdio.h>
#include <stdlib.h>
void display(int arr[],int size);
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
    printf("DISPLAYING..........\n");
   display(arr,size);
    return 0;
}
void display(int arr[],int size)
{
    static int i=0;
    while(i<size)
    {
        printf("%d ",arr[i++]);
        display(arr,size);
    }
}
