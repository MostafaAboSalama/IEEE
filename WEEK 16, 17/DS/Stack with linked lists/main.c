#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"



void Display(int e)
{
   printf("e is: %d\n", e);
}

 /*void copyStack(Stack *ps ,Stack cpy)
{

    StackInit(&cpy);
    StackNode *pn=ps->top;
    while(pn!=NULL)
    {
            push(pn->value,&cpy);
            pn=pn->next;
    }
}
*/

int main()
{
    int choice, e;
    Stack S;
    StackInit(&S);
    Stack cpy;
    printf("1- PUSH\n2- POP\n3- DISPLAY\n4- STACK SIZE\n5- STACK TOP\n6- CLEAR STACK\n7- FIND MINIMUM\n8- COPY STACK\n9- EXIT\n");
    do
    {
        printf("___________________________________________________________________________________\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("___________________________________________________________________________________\n");
            printf("Enter the element you want to push: ");
            scanf("%d", &e);
            push(e, &S);
            break;
        case 2:
            printf("___________________________________________________________________________________\n");
            pop(&e, &S);
            break;
        case 3:
            printf("___________________________________________________________________________________\n");
            TraverseStack(&S, &Display);
            break;
        case 4:
            printf("___________________________________________________________________________________\n");
            printf("Size = %d\n", StackSize(&S));
            break;
        case 5:
            printf("___________________________________________________________________________________\n");
            StackTop(&e, &S);
            break;
        case 6:
            printf("___________________________________________________________________________________\n");
            ClearStack(&S);
            break;
        case 7:
            printf("___________________________________________________________________________________\n");
            FindMin(&S);
            break;
        case 8:
            printf("___________________________________________________________________________________\n");
            Stack copiedStack;
            StackInit(&copiedStack);
            copyStack(&S, &copiedStack);
            printf("The copied Stack:\n");
            TraverseStack(&copiedStack, Display);
            break;
        case 9:
            printf("___________________________________________________________________________________\n");
            printf("Exit\n");
            break;
        default:
            printf("___________________________________________________________________________________\n");
            printf("ERROR: INVALID INPUT.\n");
        }

    } while (choice != 9);

/*char expression1[] = "[()()()({})()]";
char expression2[] = "[()()()}{()()()]";
char expression3[] = "[({})}]";
char expression4[] = "({)[({})}]";
printf("%s",expression1);

    matching(expression1);
    matching(expression2);
    matching(expression3);
    matching(expression4);

    printf("HELLO");*/

    return 0;
}

