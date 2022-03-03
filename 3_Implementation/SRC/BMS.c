#include "BMS.h"

int count=0;

struct stack
{
    int items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack(st*s){
    s->top=-1;
}
int isfull(st*s){
    if(s->top==MAX-1)
        return 1;
    else
        return 0;
}

int isempty(st*s){
    if(s->top==-1)
        return 1;
    else
        return 0;
}
void push(st*s,float newitem){
    if(isfull(s)){
        printf("STACKFULL");
    }else{
        s->top++;
        s->items[s->top]=newitem;
    }
     count++;


}

void pop(st*s){
    if(isempty(s)){
        printf("\nSTACK EMPTY\n");
    }else{
        printf("Item popped=%d",s->items[s->top]);
        s->top--;

    }
    count--;
    printf("\n");

}



int Load_current(int Voc,float Load,int i_t)                                                         //function definition
{
    i_t=Voc/Load;
    return i_t;
}

int Remaining_percentage(int SOCt1,float i_t,int MUn,float Time,int SOCt)
{
    SOCt=SOCt1+(-(i_t/MUn)*Time)*100;
    return SOCt;

}

void printstack(st*s){
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
