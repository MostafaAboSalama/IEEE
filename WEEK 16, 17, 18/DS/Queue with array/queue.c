#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void QueueInit(Queue* pq)
{
    pq->size=0;
    pq->front=0;
    pq->rear=-1;
}

int QueueEmpty(Queue* pq)
{
    return (!pq->size);
}

int QueueFull(Queue* pq)
{
    return (pq->size==MAXQUEUE);
}

int QueueSize(Queue* pq)
{
    return pq->size;
}

void append(Queue* pq ,QueueEntry e)
{
    pq->rear=(pq->rear+1) % MAXQUEUE;
    pq->entry[pq->rear]=e;
    pq->size++;
}

void serve(Queue* pq ,QueueEntry* pe)
{
    *pe=pq->entry[pq->front];
     pq->front=(pq->front+1) % MAXQUEUE;
    pq->size--;
}

void ClearQueue(Queue* pq)
{
    pq->size=0;
    pq->front=0;
    pq->rear=-1;
}

void TraverseQueue(Queue* pq ,void(*pf)(QueueEntry))
{
    int s;
    for(int i=pq->front,s=0;s<pq->size;s++)
    {
        (*pf)(pq->entry[i]);
         i=(i+1) % MAXQUEUE;
    }
}
