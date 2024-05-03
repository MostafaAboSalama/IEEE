
1- Queue using Two Stacks


#define MAXSTACK 100000
#define StackEntry long long int

typedef struct stack
{
    int top;
    StackEntry entry[MAXSTACK];
} Stack;



void push(StackEntry e,Stack *ps)
{
    ps->entry[ps->top++]=e;
}

void pop(StackEntry *pe,Stack *ps)
{
    *pe=ps->entry[--ps->top];
}


int StackSize(Stack *ps)
{
    return ps->top;
}




void copyStack(Stack* psrc, Stack* pdest);


int main()
{
    int q;
    scanf("%d", &q);
    int type;
    long long int x;

    Stack S, Q;
    //StackInit(&S);
    S.top=0;
    //StackInit(&Q);
    Q.top=0;
    for(int i=0; i<q; i++)
    {
        scanf("%d", &type);

        switch (type)
        {
            case 1:
                scanf("%lld", &x);
                push(x, &S);
                break;

            case 2:
                copyStack(&S, &Q);
                pop(&x, &Q);
                S.top=0;
                copyStack(&Q, &S);
                Q.top=0;
                break;

            case 3:
                printf("%lld\n", S.entry[0]);
                break;

        }
    }
    return 0;
}

void copyStack(Stack* psrc, Stack* pdest)
{
    long long int e;
    //StackInit(pdest);
    pdest->top=0;
    int len = StackSize(psrc);
    for (int i=0; i<len; i++)
    {
        pop(&e, psrc);
        push(e, pdest);
    }


}