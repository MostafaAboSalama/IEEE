#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


#include "Queue.h"

typedef struct {
    Queue* q1;
    Queue* q2;
} Stack;

void StackInit(Stack* ps);
int StackEmpty(Stack* ps);
void push(Stack* ps, QueueEntry e);
void pop(Stack* ps, QueueEntry* pe);
QueueEntry top(Stack* ps);
int StackSize(Stack* ps);
void ClearStack(Stack* ps);
void TraverseStack(Stack* ps, void (*pf)(QueueEntry));
void PrintEntry(QueueEntry e);
#endif // STACK_H_INCLUDED
