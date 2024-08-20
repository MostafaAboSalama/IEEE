#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ip,years,weeks,days;
    printf("Enter the days : ");
    scanf("%d",&ip);
    years=ip/365;
    weeks=(ip % 365)/7;
    days= ip-((years*365)+(weeks*7));
    printf("YEARS: %d , WEEKS: %d , DAYS: %d", years, weeks, days);
    return 0;
}
