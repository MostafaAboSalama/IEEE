#include <stdio.h>
#include <stdlib.h>

int main()
{
    int physics, chemistry, biology, mathematics ,computer;
    printf("Enter grades from 100 \n");
    printf("Physics : ");
    scanf("%d",&physics);
    printf("chemistry : ");
    scanf("%d",&chemistry);
    printf("biology : ");
    scanf("%d",&biology);
    printf("mathematics : ");
    scanf("%d",&mathematics);
    printf("computer : ");
    scanf("%d",&computer);
    int percentage= (physics + chemistry + biology + mathematics + computer)/5;
    printf("percentage = %d \n",percentage);
    if(percentage >= 90)
        printf("Grade A");
    else if(percentage >= 80)
        printf("Grade B");
    else if(percentage >= 90)
        printf("Grade A");
    else if(percentage >= 70)
        printf("Grade C");
    else if(percentage >= 60)
        printf("Grade D");
    else if(percentage >= 50)
        printf("Grade E");
    else
        printf("Grade F");



    return 0;
}
