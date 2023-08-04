#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    int choice;
    printf("Enter 2 numbers : \n");
    scanf("%f %f",&n1,&n2);
    printf("1-ADD 2-SUBTRACT 3-MULTIPLCATION 4-DIVISION \n");
    printf("Choose a number for the operation :  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("%f + %f = %f",n1,n2,n1+n2);
        break;
    case 2:
        printf("%f - %f = %f",n1,n2,n1-n2);
        break;
    case 3:
        printf("%f * %f = %f",n1,n2,n1*n2);
        break;
    case 4:
        printf("%f / %f = %f",n1,n2,n1/n2);
        break;
    default :
        printf("Invalid number");
    }
    return 0;
}
