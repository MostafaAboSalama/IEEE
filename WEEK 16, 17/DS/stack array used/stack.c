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
         printf("Enter the element you want to push : ");
        scanf("%d",&e);
        ps->entry[ps->top++]=e;}
}

void pop(StackEntry *pe,Stack *ps)
{
    if(StackEmpty(ps))
        printf("ERROR : STACK IS EMPTY.\n");
    else{
        *pe=ps->entry[--ps->top];
         printf("%d is popped\n",*pe);}
}

void StackTop(StackEntry *pe, Stack *ps)
{
    *pe= ps->entry[ps->top-1];
    printf("The top value = %d\n",*pe);
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
