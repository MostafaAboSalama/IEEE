#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void QueueInit(Queue* pq)
{
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}

int QueueEmpty(Queue* pq)
{
    return !pq->size;
}

int QueueFull(Queue* pq)
{
    return 0;
}

void append(Queue* pq ,QueueEntry e)
{
    QueueNode* pn= (QueueNode*)malloc(sizeof(QueueNode));
    pn->next=NULL;
    pn->value=e;
    if(pq->size==0)
    {
        pq->front=pn;
    }
    else
        pq->rear->next=pn;
     pq->rear=pn;
     pq->size++;
}

void serve(Queue* pq,QueueEntry* pe)
{
    *pe=pq->front->value;
    QueueNode* pn=pq->front;
    pq->front=pn->next;
    pq->size--;
    free(pn);
    if(pq->size==0)
        pq->rear=NULL;
}

int QueueSize(Queue* pq)
{
    return pq->size;
}

void TraverseQueue(Queue* pq ,void(*pf)(QueueEntry))
{
    for(QueueNode* pn=pq->front;pn;pn=pn->next)
        (*pf)(pn->value);
}

void ClearQueue(Queue* pq)
{
    while(pq->front)
    {
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;
}
