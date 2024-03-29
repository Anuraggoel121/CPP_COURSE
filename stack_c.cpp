// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};
int isfull(struct stack * ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(struct stack * ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack * ptr,int data)
{
    if(isfull(ptr))
    {
        printf("overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=data;
    }
}

int pop(struct stack * ptr)
{
    if(isempty(ptr))
    {
        printf("underflow");
    }
    else
    {
         int data=ptr->arr[ptr->top];
         ptr->top --;
         return data;
    }
}

int main() {
    struct stack*sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));
    printf("stack create successfully\n");
    printf("before pushing : %d\n",isfull(sp));
    printf("before pushing : %d\n",isempty(sp));
    push(sp,33);
    push(sp,3);
    printf("after pushing : %d\n",isfull(sp));
    printf("after pushing : %d\n",isempty(sp));
    printf("pop %d from the stack \n",pop(sp));
    

    return 0;
}