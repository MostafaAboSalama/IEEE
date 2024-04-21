#include <stdio.h>
#include "Stack.h"
#include "Global.h"

void InitializeStack(Stack *ps) {
    ps->top = 0;
    ps->size=0;
}

int StackFull(Stack *ps) {
    return ps->top >= MAX_STACK_SIZE;
}

int StackEmpty(Stack *ps) {
    return ps->top <= 0;
}

void Push(StackEntry e, Stack *ps) {
    if (StackFull(ps)) {
        printf("Stack Overflow\n");
    } else {
        ps->entry[ps->top++] = e;
        ps->size++;
    }
}

void Pop(StackEntry *pe, Stack *ps) {
    if (StackEmpty(ps)) {
        printf("Stack Underflow\n");
    } else {
        *pe = ps->entry[--ps->top];
        ps->size--;
    }
}

int StackSize(Stack *ps) {
    return ps->size;
}

void ClearStack(Stack *ps) {
    ps->top = 0;
    ps->size=0;
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry))
{
    for(int i=ps->size;i>0;i--)
        (*pf)(ps->entry[i-1]);
}
