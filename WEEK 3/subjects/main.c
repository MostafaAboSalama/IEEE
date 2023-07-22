#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maths,English,Arabic,physics,chemistry,sum,avg,percentage;
    printf("Enter your marks each from 100\n");
    printf("Maths : ");
    scanf("%f",&maths);
    printf("English : ");
    scanf("%f",&English);
    printf("Arabic : ");
    scanf("%f",&Arabic);
    printf("physics : ");
    scanf("%f",&physics);
    printf("chemistry : ");
    scanf("%f",&chemistry);
    sum=maths+English+Arabic+physics+chemistry;
    avg=sum/5;
    percentage=(sum/500)*100;
    printf("Sum = %f , Average = %f , Percentage = %f ", sum, avg , percentage);


    return 0;
}
