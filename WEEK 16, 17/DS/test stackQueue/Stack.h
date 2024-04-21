#ifndef STACK_H
#define STACK_H

#include "Global.h"

typedef struct {
    int top;
    StackEntry entry[MAX_STACK_SIZE];
    int size;
} Stack;

void InitializeStack(Stack *ps);
int StackFull(Stack *ps);
int StackEmpty(Stack *ps);
void Push(StackEntry e, Stack *ps);
void Pop(StackEntry *pe, Stack *ps);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps, void(*pf)(StackEntry));

#endif
