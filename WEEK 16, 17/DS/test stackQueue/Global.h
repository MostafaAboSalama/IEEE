#ifndef GLOBAL_H
#define GLOBAL_H

#define MAX_STACK_SIZE 100
#define MAX_QUEUE_SIZE 100

typedef struct {
    char Name[50];
    int ID;
    int modelYear;
} ElementType;

typedef ElementType StackEntry;
typedef ElementType QueueEntry;

#endif
