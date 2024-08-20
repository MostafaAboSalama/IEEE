#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include <string.h>

void StackInit(Stack *ps)
{
    ps->top=NULL;
    ps->size=0;
}

int StackEmpty(Stack *ps)
{
    return (! (ps->top));
}

int StackFull(Stack *ps)
{
    return 0;
}

void push(StackEntry e,Stack *ps)
{
    //printf("Enter the element you want to push : ");
    //scanf("%d",&e);
   StackNode* pn=(StackNode*)malloc(sizeof(StackNode));
   pn->value=e;
   pn->next=ps->top;
   ps->top=pn;
   ps->size++;
   if(ps->size==1)
      ps->min=e;
   else
      if(ps->min >e)
   ps->min=e;
}

void pop(StackEntry *pe,Stack *ps)
{
    if(!StackEmpty(ps))
    {
        StackNode* pn=ps->top;
       *pe=pn->value; // to be checked
        ps->top=pn->next;
       free(pn);
       ps->size--;

    }
    else
        printf("STACK IS EMPTY");

    if(*pe==ps->min)
    {
        StackEntry current_min=ps->top->value;
        for(StackNode *i=ps->top;i;i=i->next)
        {
            if(current_min > i->value)
                current_min=i->value;
        }
        ps->min=current_min;
    }


}

void StackTop(StackEntry *pe, Stack *ps)
{
    *pe=ps->top->value;
    printf("The top value = %d\n",*pe);
}

int StackSize(Stack *ps)
{
    return ps->size;
}

void ClearStack(Stack *ps)
{
    StackNode *pn; // check
    for(pn=ps->top;pn;pn=pn->next)
        free(pn);
    ps->size=0;
    ps->top=NULL;
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry))
{
     StackNode *pn;
    for(pn=ps->top;pn;pn=pn->next)
        (*pf)(pn->value);
}


void FindMin(Stack *ps)
{
    if(StackEmpty(ps))
        printf("STCK IS EMPTY \n");
   else
        printf("The min = %d\n ",ps->min) ;
}

void copyStack(Stack *ps ,Stack* cpy)
{
    StackInit(cpy);
    StackNode *pn=ps->top;
    while(pn!=NULL)
    {
            push(pn->value,cpy);
            pn=pn->next;
    }
}




/*void matching(char* str)
{

    Stack S;
    StackInit(&S);
    char e;
    int i = 0;
    int isValid = 1;

    while (str[i] != '\0')
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            push(str[i], &S);
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (StackEmpty(&S))
            {
                ClearStack(&S);
                isValid = 0;
                break;
            }
            pop(&e, &S);
            if ((str[i] == '(' && e != ')') ||
                (str[i] == '{' && e != '}') ||
                (str[i] == '[' && e != ']'))
            {
                ClearStack(&S);
                isValid = 0;
                break;
            }
        }
        i++;
    }

    if (isValid && StackEmpty(&S))
        printf("The expression is valid.\n");
    else
        printf("The expression is invalid.\n");

    ClearStack(&S);
}*/
