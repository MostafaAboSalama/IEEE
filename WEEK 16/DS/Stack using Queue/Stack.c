#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void StackInit(Stack* ps)
{
    ps->q1 = (Queue*)malloc(sizeof(Queue));
    ps->q2 = (Queue*)malloc(sizeof(Queue));
    QueueInit(ps->q1);
    QueueInit(ps->q2);
}

int StackEmpty(Stack* ps)
{
    return QueueEmpty(ps->q1);
}

void push(Stack* ps, QueueEntry e)
{
    while (!QueueEmpty(ps->q1)) {
        QueueEntry temp;
        serve(ps->q1, &temp);
        append(ps->q2, temp);
    }
    append(ps->q1, e);
    while (!QueueEmpty(ps->q2)) {
        QueueEntry temp;
        serve(ps->q2, &temp);
        append(ps->q1, temp);
    }
}

void pop(Stack* ps, QueueEntry* pe)
{
    serve(ps->q1, pe);
}

QueueEntry top(Stack* ps)
{
    return ps->q1->front->value;
}

int StackSize(Stack* ps)
{
    return QueueSize(ps->q1);
}

void ClearStack(Stack* ps)
{
    QueueInit(ps->q1);
    QueueInit(ps->q2);
}

void TraverseStack(Stack* ps, void (*pf)(QueueEntry))
{
    QueueNode* current = ps->q1->front;
    while (current != NULL) {
        (*pf)(current->value);
        current = current->next;
    }
}

void PrintEntry(QueueEntry e)
{
    printf("%d ", e);
}
