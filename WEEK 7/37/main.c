#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[3][3];
   int size,det;
    printf("Enter the size of the matrix (2 or 3): ");
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
    if(size==2)
        det=arr[0][0] * arr[1][1] -arr[0][1] * arr[1][0];
    else
        det=arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2]) - arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0]) + arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
    printf("%d",det);
    return 0;
}
