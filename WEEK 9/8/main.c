#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0;
    int alphabetCount=0;
    int digitCount=0;
    int specialCount=0;
    char str1[20];
    printf("Enter string1 : ");
    gets(str1);
    while(str1[i])
    {
        if(str1[i]>='A' && str1[i]<='z')
            alphabetCount++;
        else if(str1[i]>='0' && str1[i]<='9')
            digitCount++;
        else
            specialCount++;
        i++;
    }
    printf("alphabets count = %d\t digits count = %d\t special characters count = %d\t",alphabetCount,digitCount,specialCount);
    return 0;
}
