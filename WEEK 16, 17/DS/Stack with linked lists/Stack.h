#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define StackEntry int

typedef struct stacknode
{
    StackEntry value;
    struct stacknode* next;
} StackNode;

typedef struct stack
{
     StackNode* top;
     int size;
     StackEntry min;
} Stack;


void StackInit(Stack *ps);

int StackEmpty(Stack *ps);

int StackFull(Stack *ps);

void push(StackEntry e,Stack *ps);

void pop(StackEntry *pe,Stack *ps);

void StackTop(StackEntry *pe, Stack *ps);

int StackSize(Stack *ps);

void ClearStack(Stack *ps);

void TraverseStack(Stack *ps,void (*pf)(StackEntry));

void FindMin(Stack *ps);

void copyStack(Stack *ps ,Stack* cpy);

void matching(char* str);


#endif // STACK_H_INCLUDED
