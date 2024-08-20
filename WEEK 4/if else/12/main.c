#include <stdio.h>
#include <stdlib.h>

int main()
{
    int monthsNumber;
    printf("Enter a months number : ");
    scanf("%d",&monthsNumber);
    if((monthsNumber == 1) || (monthsNumber == 3) || (monthsNumber == 5) || (monthsNumber == 7) || (monthsNumber == 8) ||
        (monthsNumber == 10) || (monthsNumber == 12) )
        printf("31 days");
    else if((monthsNumber == 4) || (monthsNumber == 6) || (monthsNumber == 9) || (monthsNumber == 11))
        printf("30 days");
    else if (monthsNumber == 2)
        printf("28 days");
    return 0;
}
