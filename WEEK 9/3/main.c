#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[]= "My Name is ";
    char str2[]= "Mostafa";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
