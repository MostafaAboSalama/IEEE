#include <stdio.h>
#include "Queue.h"
#include "Global.h"

void InitializeQueue(Queue *pq) {
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

int QueueFull(Queue *pq) {
    return pq->size >= MAX_QUEUE_SIZE;
}

int QueueEmpty(Queue *pq) {
    return pq->size <= 0;
}

void Enqueue(QueueEntry e, Queue *pq) {
    if (QueueFull(pq)) {
        printf("Queue Overflow\n");
    } else {
        pq->rear = (pq->rear + 1) % MAX_QUEUE_SIZE;
        pq->entry[pq->rear] = e;
        pq->size++;
    }
}

void Dequeue(QueueEntry *pe, Queue *pq) {
    if (QueueEmpty(pq)) {
        printf("Queue Underflow\n");
    } else {
        *pe = pq->entry[pq->front];
        pq->front = (pq->front + 1) % MAX_QUEUE_SIZE;
        pq->size--;
    }
}

int QueueSize(Queue *pq) {
    return pq->size;
}

void ClearQueue(Queue *pq) {
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

void TraverseQueue(Queue *pq, void(*pf)(QueueEntry)) {
    int pos = pq->front;
    for (int s = 0; s < pq->size; s++) {
        (*pf)(pq->entry[pos]);
        pos = (pos + 1) % MAX_QUEUE_SIZE;
    }
}
