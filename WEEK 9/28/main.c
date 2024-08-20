#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int index = -1;
    char str1[60];
    printf("Enter string1: ");
    gets(str1);

    char str2[60];
    printf("Enter a word to search: ");
    gets(str2);

    for (int i=0; i <=strlen(str1) - strlen(str2); i++)
    {
        int j;
        for (j=0; j <strlen(str2); j++)
        {
            if (str1[i + j] != str2[j])
                break;
        }

        if (j==strlen(str2))
        {
            printf("index %d\n", i);
        }
    }


    return 0;
}
