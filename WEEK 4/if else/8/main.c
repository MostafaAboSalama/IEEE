#include <stdio.h>
#include <stdlib.h>

int main()
{
   char x;
    printf("Enter an alphabet : ");
    scanf("%c",&x);
    if((x == 'a') || (x == 'i') || (x == 'e') || (x == 'o') || (x == 'u') || (x == 'A') || (x == 'I') || (x == 'E') || (x == 'O') || (x == 'U'))
        printf("is vowel");
    else
        printf("is constant");
    return 0;
}
