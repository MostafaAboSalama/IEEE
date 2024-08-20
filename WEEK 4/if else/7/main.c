#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter a character : ");
    scanf("%c",&x);
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        printf("is alphabet");
    else
        printf("is not");
    return 0;
}
