#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char*str1="My Name is ";
    char*str2;
    strcpy(str2,str1);
    printf("%s\t%s",str1,str2);
    return 0;
}
