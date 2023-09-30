#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[50][50];
   int transpose[50][50];
   int size;
   int res=1;
    printf("Enter the size of the square matrix : ");
    scanf("%d",&size);
    printf("Enter the matrix : \n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i][j]!=transpose[i][j]){
                res=0;
                break;}
        }
    }
    if(res==1)
        printf("SYMMETRIC");
    else
        printf("NOT SYMMETRIC");
    return 0;
}
