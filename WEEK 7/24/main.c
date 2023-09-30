#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[50][50];
    int arr2[50][50];
    int arr3[50][50];
    int row,col;
     printf("Enter the number of rows and columns of the matrices respectively : \n");
    scanf("%d %d",&row,&col);
    printf("Enter the first matrix : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the second matrix : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
             printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The subtraction of the 2 matrices : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Element [%d][%d] : %d\n",i+1,j+1,arr1[i][j]-arr2[i][j]);
        }
    }
    return 0;
}
