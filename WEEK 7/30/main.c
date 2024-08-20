#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50][50];
    int rowSum[50]={0};
    int colSum[50]={0};
    int row,col;
     printf("Enter the number of rows and columns of the matrix respectively : \n");
    scanf("%d %d",&row,&col);
    printf("Enter the first matrix : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           rowSum[i]+=arr[i][j];
           colSum[j]+=arr[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
       printf("The sum of the [%d] row = %d\n",i+1,rowSum[i]);
    }
    for(int i=0;i<col;i++)
    {
        printf("The sum of the [%d] col = %d\n",i+1,colSum[i]);
    }

    return 0;
}
