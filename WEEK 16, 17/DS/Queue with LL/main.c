#include <stdio.h>
#include <stdlib.h>
#include "queue.h"



void display(int e)
{
    static int i=0;
    printf("[%d] element = %d\n",++i,e);
}


int main()
{
    int e;
    Queue q;
    QueueInit(&q);
    printf("Is Queue Empty : %d\n",QueueEmpty(&q));
    append(&q,1);
    append(&q,2);
    append(&q,3);
    append(&q,4);
    append(&q,5);
    printf("Is Queue Full : %d\n",QueueFull(&q));
    serve(&q,&e);
    printf("%d is served\n",e);
    append(&q,6);
    TraverseQueue(&q,display);
    serve(&q,&e);
    printf("%d is served\n",e);
    serve(&q,&e);
    printf("%d is served\n",e);
    serve(&q,&e);
    printf("%d is served\n",e);
    serve(&q,&e);
    printf("%d is served\n",e);
    printf("Size = %d\n",QueueSize(&q));
    TraverseQueue(&q,display);
    ClearQueue(&q);
    printf("Size = %d\n",QueueSize(&q));
    TraverseQueue(&q,display);
    return 0;
}

