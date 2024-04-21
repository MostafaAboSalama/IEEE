#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stack.c"

void Display(int e)
{
   printf("e is: %d\n", e);
}


int main()
{
    int choice,e;
    Stack S;
    StackInit(&S);
    printf("1- PUSH\n 2-POP\n 3-DISPLAY\n 4- STACK SIZE\n 5- STACK TOP\n 6-ClEAR STACK\n 7-EXIT\n");
   do
        {
            printf("___________________________________________________________________________________\n");
            printf("Enter the choice : ");
                scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("___________________________________________________________________________________\n");
                push(e,&S);
                break;
            case 2:
                printf("___________________________________________________________________________________\n");
                pop(&e,&S);
                break;
            case 3:
                printf("___________________________________________________________________________________\n");
                TraverseStack(&S,&Display);
                break;
            case 4:
                printf("___________________________________________________________________________________\n");
                printf("%d\n",StackSize(&S));
                break;
            case 5:
                printf("___________________________________________________________________________________\n");
                StackTop(&e,&S);
                break;
            case 6:
                printf("___________________________________________________________________________________\n");
                ClearStack(&S);
                break;
            case 7:
                printf("___________________________________________________________________________________\n");
                printf("Exit\n");
                break;
            default :
                printf("___________________________________________________________________________________\n");
                printf("ERROR : INVALID INPUT.\n");
            }
        } while(choice!=7);

    return 0;
}

