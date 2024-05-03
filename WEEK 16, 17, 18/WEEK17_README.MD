
1- Balanced Brackets :


/#define MAXSTACK (50000)
#define StackEntry char

typedef struct stack
{
    int top;
    StackEntry entry[MAXSTACK];
} Stack;



 void StackInit(Stack *ps)
{
    ps->top=0;
}
int StackEmpty(Stack *ps)
{
    return (!ps->top);
}

int StackFull(Stack *ps)
{
    return (ps->top==MAXSTACK);
}

void push(StackEntry e,Stack *ps)
{
    if(StackFull(ps))
        printf("ERROR : STACK IS FULL.\n");
    else{
        ps->entry[ps->top++]=e;}
}

void pop(StackEntry *pe, Stack *ps)
{
    *pe = ps->entry[--ps->top];
}

char StackTop(Stack *ps)
{
    return ps->entry[ps->top-1];
}

int StackSize(Stack *ps)
{
    return ps->top;
}

void ClearStack(Stack *ps)
{
    ps->top=0;
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry))
{
    for(int i=0;i<ps->top;i++)
        (*pf)(ps->entry[i]);
}

void Display(char e)
{
    printf("%c", e);
}

char* isBalanced(char* s) {
    Stack S;
    StackInit(&S);

    char* temp = (char*)malloc(strlen(s) * sizeof(char));
    memcpy(temp, s, strlen(s));

    while (*temp != '\0') 
    {
        if (*temp == '(' || *temp == '[' || *temp == '{') 
            push(*temp, &S);
        else if (*temp == ')' || *temp == ']' || *temp == '}') 
        {     
           if (StackEmpty(&S)) 
            {
                //free(temp); 
                return "NO"; 
            }
            char ch = StackTop(&S);
            if ((*temp == ')' && ch == '(') ||
                (*temp == ']' && ch == '[') ||
                (*temp == '}' && ch == '{')) 
                pop(&ch, &S); 
             else 
             {  
                 //free(temp); 
                return "NO"; 
            }
        }
        temp++;
    }

    if (!StackEmpty(&S)) 
     {   
        //free(temp); 
        return "NO"; 
    }

    //free(temp); 
    return "YES"; 
}



2- Waiter :


#define MAXSTACK (50000)
#define StackEntry int

typedef struct stack
{
    int top;
    StackEntry entry[MAXSTACK];
} Stack;



 void StackInit(Stack *ps)
{
    ps->top=0;
}
int StackEmpty(Stack *ps)
{
    return (!ps->top);
}

int StackFull(Stack *ps)
{
    return (ps->top==MAXSTACK);
}

void push(StackEntry e,Stack *ps)
{
    if(StackFull(ps))
        printf("ERROR : STACK IS FULL.\n");
    else{
        ps->entry[ps->top++]=e;}
}

int pop(Stack *ps)
{
    if(StackEmpty(ps))
        return  -5;
    else{
        return ps->entry[--ps->top];
         }
}

int StackTop(StackEntry *pe, Stack *ps)
{
    *pe= ps->entry[ps->top-1];
    return *pe;
}

int StackSize(Stack *ps)
{
    return ps->top;
}

void ClearStack(Stack *ps)
{
    ps->top=0;
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry))
{
    for(int i=ps->top;i>0;i--)
        (*pf)(ps->entry[i-1]);
}

 
 bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
 
    for (int i = 2; i <= n / 2; i++) 
    {
         if (n % i == 0)
            return false;
    }
    return true;
}

void Display(int e)
{
   printf("e is: %d\n", e);
}

int* waiter(int number_count, int* number, int q, int* result_count) 
{
  
    // Find all primes
  int *primes = (int*)malloc(q * sizeof(int));
    int count = 0;
    int num = 2; 

    while (count < q) {
        if (isPrime(num)) {
            primes[count] = num;
            count++;
        }
        num++;
    }

    // Allocate memory for result
    int *result = (int *)malloc(number_count * sizeof(int));
    int result_count_value = 0;

    // Create stacks
    Stack stack_A, stack_B;
    StackInit(&stack_A);
    StackInit(&stack_B);
    
    Stack S;
    StackInit(&S);

    
    for (int j = 0; j < number_count; j++)
    {
        push(number[j], &S);
    }

    for (int j = 0; j < q; j++)
    {
        int b = primes[j];

        // Move plates from stack A to stack B
        while (!StackEmpty(&S))
        {
            int plate = pop(&S);

            if (plate % b == 0)
            {
                push(plate, &stack_B);
            }
            else
            {
                push(plate, &stack_A);
            }
        }

        // Move plates from stack B to the result array
        while (!StackEmpty(&stack_B))
        {
            int plate = pop(&stack_B);
            result[result_count_value++] = plate;
        }
        
        int size = StackSize(&stack_A);
        for(int i=0; i< size; i++)
        {
            int plate = pop(&stack_A);
            push(plate, &S);
            push(plate, &stack_A);
        }
    }

    // Move remaining plates from stack A to the result array
    while (!StackEmpty(&stack_A))
    {
        int plate = pop(&stack_A);
        result[result_count_value++] = plate;
    }
    
    for(int i=0; i< number_count; i++)
    {
        printf("%d\n", result[i]);
    }
    
   
    // Set the result count
    *result_count = number_count;
    free(primes);
    return result;
}

3- Poisonous Plants :   "Time limit for 5 cases."


#define ListEntry int

#define MAX_SIZE 100000


typedef struct {
    ListEntry data[MAX_SIZE];
    int size;
} List;


void ListInit(List* plist) {
    plist->size = 0;
/*for (int i = 0; i < MAX_SIZE; i++) {
        plist->data[i] = malloc(sizeof(ListEntry));
         memset(plist->data[i], 0, sizeof(ListEntry));
    }*/
}

int ListIsEmpty(const List* plist) {
    return plist->size == 0;
}

int ListIsFull(const List* plist) {
    return plist->size == MAX_SIZE;
}

void ListInsert(List* plist, ListEntry* element, int position) {
    if (plist == NULL)
    {
      printf("Invalid list. Cannot insert element.\n");
      return;
     }
    if (ListIsFull(plist)) {
        printf("List is full. Cannot insert element.\n");
        return;
    }

    if (position < 0 || position > plist->size) {
        printf("Invalid position. Cannot insert element.\n");
        return;
    }

    // Shift elements to the right
    for ( int i = plist->size-1; i >= position; i--) {
        plist->data[i+1] = plist->data[i];
    }

    // Insert the new element
    plist->data[position] = *element;
    plist->size++;
}

void ListRemove(List* plist,  int position) {
    if (ListIsEmpty(plist)) {
        printf("List is empty. Cannot remove element.\n");
        return;
    }

    if (position < 0 || position >= plist->size) {
        printf("Invalid position. Cannot remove element.\n");
        return;
    }

    // Shift elements to the left
    for ( int i = position; i < plist->size - 1; i++) {
        plist->data[i] = plist->data[i + 1];
    }

    plist->size--;
}

ListEntry* ListGetElement(List* plist,  int position) {
    if (position < 0 || position >= plist->size) {
        //printf("Invalid position. Cannot retrieve element.\n");
        return NULL;
    }

    return &(plist->data[position]);
}

void ListPrint(List* plist) {
    if (ListIsEmpty(plist)) {
        printf("List is empty.\n");
        return;
    }

    printf("List elements:\n");
    for ( int i = 0; i < plist->size; i++) {
        printf("e[%d]: %d\n", i, plist->data[i]);
        printf("\n");
    }
}


int poisonousPlants(int p_count, int* p) 
{
    long int days = 0;
    
    List list;
    ListInit(&list);
    
    List index;
    ListInit(&index);
    
    for(int i=0; i<p_count; i++)
    {
        ListInsert(&list, &(p[i]), i);
    }
    
    //ListPrint(&list);
    int flag = 1;
    while(flag) 
    {
        flag = 0;
        for( int i=1; i<list.size; i++)
        {
            if(list.data[i] > list.data[i-1])
            {
                flag = 1;
                ListInsert(&index, &(i), index.size);
            }
        }
        // ListPrint(&index);
        int size = index.size;
        for ( int i = size - 1; i >= 0; i--) 
        {
            ListRemove(&list, index.data[i]);
        }

        //ListPrint(&index);
       // ListPrint(&list);
        days++;
        ListInit(&index);
        
    }
    
    return days-1;
}