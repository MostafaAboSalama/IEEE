#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define QueueEntry int

typedef struct QueueNode
{
    QueueEntry value;
    struct QueueNode* next;
}QueueNode;

typedef struct queue
{
    QueueNode* front;
    QueueNode* rear;
    int size;
}Queue;

void QueueInit(Queue* pq);

int QueueEmpty(Queue* pq);

int QueueFull(Queue* pq);

void append(Queue* pq ,QueueEntry e);

void serve(Queue* pq,QueueEntry* pe);

int QueueSize(Queue* pq);

void TraverseQueue(Queue* pq ,void(*pf)(QueueEntry));

void ClearQueue(Queue* pq);


#endif // QUEUE_H_INCLUDED
