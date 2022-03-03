#include "BMS.h"

int count=0;

struct stack
{
    int items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack(st*s)    //function definition
{
    s->top=-1;
}
int isfull(st*s)
{
    if(s->top==MAX-1)
        return 1;
    else
        return 0;
}

int isempty(st*s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}
void push(st*s,float newitem)
{
    if(isfull(s)){
        printf("STACKFULL");
    }
    else
    {
        s->top++;
        s->items[s->top]=newitem;
    }
     count++;


}

void pop(st*s)
{
    if(isempty(s)){
        printf("\nSTACK EMPTY\n");
    }
    else
    {
        printf("Item popped=%d",s->items[s->top]);
        s->top--;

    }
    count--;
    printf("\n");

}




void printstack(st*s)
{
    printf("Stack:");
    for(int i=0;i<count;i++){
        printf("%d-->",s->items[i]);
    }
    printf("\n");


}
double i(double t)
{
    return(t/pow(t,2)+1);
}
