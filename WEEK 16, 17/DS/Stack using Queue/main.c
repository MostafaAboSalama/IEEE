#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

int main()
{
Stack s;
StackInit(&s);

push(&s, 1);
push(&s, 2);
push(&s, 3);

printf("Stack size: %d\n", StackSize(&s));
printf("Stack elements: ");
TraverseStack(&s, &PrintEntry);
printf("\n");

QueueEntry topElement = top(&s);
printf("Top element: %d\n", topElement);

pop(&s, &topElement);
printf("Popped element: %d\n", topElement);

printf("Stack size: %d\n", StackSize(&s));
printf("Stack elements: ");
TraverseStack(&s, &PrintEntry);
printf("\n");

ClearStack(&s);

printf("Stack size: %d\n", StackSize(&s));
printf("Stack elements: ");
TraverseStack(&s, &PrintEntry);
printf("\n");

return 0;
}
