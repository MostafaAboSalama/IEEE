#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int count=0;
    int arr[100];
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter element[%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
               {
                 count++;
                 break;
               }
        }
    }
    printf("%d",count);

    return 0;
}
