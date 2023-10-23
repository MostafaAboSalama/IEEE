#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter a string : ");
    gets(str);
    printf("The Length of The String = %d",strlen(str));
    return 0;
}
