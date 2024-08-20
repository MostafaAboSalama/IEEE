#ifndef QUEUE_H
#define QUEUE_H

#include "Global.h"

typedef struct {
    int front;
    int rear;
    int size;
    QueueEntry entry[MAX_QUEUE_SIZE];
} Queue;

void InitializeQueue(Queue *pq);
int QueueFull(Queue *pq);
int QueueEmpty(Queue *pq);
void Enqueue(QueueEntry e, Queue *pq);
void Dequeue(QueueEntry *pe, Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq, void(*pf)(QueueEntry));

#endif
