#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAXSTACK 100
#define StackEntry int

typedef struct stack
{
    int top;
    StackEntry entry[MAXSTACK];
} Stack;

void StackInit(Stack *ps);

int StackEmpty(Stack *ps);

int StackFull(Stack *ps);

void push(StackEntry e,Stack *ps);

void pop(StackEntry *pe,Stack *ps);

void StackTop(StackEntry *e, Stack *ps);

int StackSize(Stack *ps);

void ClearStack(Stack *ps);

void TraverseStack(Stack *ps,void (*pf)(StackEntry));


#endif // STACK_H_INCLUDED
