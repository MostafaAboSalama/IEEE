
1- Inserting a Node Into a Sorted Doubly Linked List :


/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
 
  #define QueueEntry int

/*typedef struct QueueNode
{
    QueueEntry value;
    struct QueueNode* next;
}QueueNode;*/

typedef struct queue
{
    DoublyLinkedListNode* front;
    DoublyLinkedListNode* rear;
    int size;
}Queue;
 
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


void append(Queue* pq ,QueueEntry e)
{
    DoublyLinkedListNode* pn= (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    pn->next=NULL;
    pn->prev=NULL;
    pn->data=e;
    if(pq->size==0)
    {
        pq->front=pn;
    }
    else
    {
        pq->rear->next=pn;
        pn->prev = pq->rear;
    }
     pq->rear=pn;
     pq->size++;
}



int QueueSize(Queue* pq)
{
    return pq->size;
}

void TraverseQueue(Queue* pq ,void(*pf)(QueueEntry))
{
    for(DoublyLinkedListNode* pn=pq->front;pn;pn=pn->next)
        (*pf)(pn->data);
}

void display(int e)
{
    static int i=0;
    printf("[%d] element = %d\n",++i,e);
}

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) 
{
    Queue q;
    QueueInit(&q);
    DoublyLinkedListNode* ptr = llist;
    int flag =0;
    while(ptr)
    {
        
        if(ptr->data > data && flag ==0)
        {
            append(&q, data);
            flag =1;
        }
        append(&q, ptr->data);
        ptr = ptr->next;
    }
    
    if(flag==0)
    {
        append(&q, data);
    }
    
    return q.front;
}


2- Merge two sorted linked lists


// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 #define QueueEntry int

/*typedef struct QueueNode
{
    QueueEntry value;
    struct QueueNode* next;
}QueueNode;*/

typedef struct queue
{
    SinglyLinkedListNode* front;
    SinglyLinkedListNode* rear;
    int size;
}Queue;
 
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


void append(Queue* pq ,QueueEntry e)
{
    SinglyLinkedListNode* pn= (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    pn->next=NULL;
    pn->data=e;
    if(pq->size==0)
    {
        pq->front=pn;
    }
    else
        pq->rear->next=pn;
     pq->rear=pn;
     pq->size++;
}



int QueueSize(Queue* pq)
{
    return pq->size;
}

void TraverseQueue(Queue* pq ,void(*pf)(QueueEntry))
{
    for(SinglyLinkedListNode* pn=pq->front;pn;pn=pn->next)
        (*pf)(pn->data);
}

void display(int e)
{
    static int i=0;
    printf("[%d] element = %d\n",++i,e);
}

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    SinglyLinkedListNode* ptr1 = head1; 
    SinglyLinkedListNode* ptr2 = head2;
    
     Queue q;
    QueueInit(&q);
    
    while(ptr1 && ptr2)
    {
        if(ptr1->data <= ptr2->data)
        {
            append(&q, ptr1->data);
            ptr1 = ptr1->next;
        }
        else
        {
            append(&q, ptr2->data);
            ptr2 = ptr2->next;
        }
    
    }
    
    while(ptr1)
    {
        append(&q, ptr1->data);
        ptr1 = ptr1->next;
    }
    
    while(ptr2)
    {
        append(&q, ptr2->data);
        ptr2 = ptr2->next;
    }
    
    
    return q.front;
}


3- Cycle Detection :


// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */


bool has_cycle(SinglyLinkedListNode* head) {
    if (head == NULL) {
        return false;
    }
    
    // second method
    /*SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        if (slow == fast) {
            return true; // Cycle detected
        }
        slow = slow->next;
        fast = fast->next->next;
    }*/
    
    // first method
    SinglyLinkedListNode* ptr = head;
    for (int i=0; i<1000; i++) {
    if(ptr == NULL)
        return false;
        
    ptr=ptr->next;
    }
    return true; 

}