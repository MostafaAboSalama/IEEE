#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED



#define MAXQUEUE 5
#define QueueEntry int

typedef struct queue
{
    QueueEntry entry[MAXQUEUE];
    int front;
    int rear;
    int size;
}Queue;

void QueueInit(Queue* pq);

int QueueEmpty(Queue* pq);

int QueueFull(Queue* pq);

int QueueSize(Queue* pq);

void append(Queue* pq ,QueueEntry e);

void serve(Queue* pq ,QueueEntry* pe);

void ClearQueue(Queue* pq);

void TraverseQueue(Queue* pq ,void(*pf)(QueueEntry));



#endif // QUEUE_H_INCLUDED
