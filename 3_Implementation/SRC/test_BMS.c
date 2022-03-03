/**
 * @file tes_BMS_.c
 * @author ajay bagodi(you@domain.com)
 * @brief Unit testing
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"unity.h"
#include"BMS.h"

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
void printstack(st*s){
    printf("Stack:");
    for(int i=0;i<count;i++){
        printf("%d-->",s->items[i]);
    }
    printf("\n");


}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_loadcurrent);
    RUN_TEST(test_reamining percentage);
    return UNITY_END();
}



