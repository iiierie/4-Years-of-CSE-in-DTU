#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size;
    int top1;
    int top2;
    int* array;
}stack;

int is_empty(stack* s){
    if(s->top1 == -1 && s->top2 == s->size){
        return 1;
    }
    return 0;
}

int is_full(stack* s){
    if((s -> top1) +1 == s->top2){
        return 1;
    }
    return 0;
}

void push1(stack* s,int value){
    if(!is_full(s)){
        s->top1 ++;
        s->array[s->top1] = value;
    }
else{
        printf("Stack is full. Cannot push %d\n",value);
    }
}
void push2(stack* s,int value){
    if(!is_full(s)){
        s->top2--;
        s->array[s->top2] = value;
    }
else{
        printf("Stack is full. Cannot push %d\n",value);
    }
}

void pop1(stack* s){
    if(!is_empty(s)){
        printf("popped %d. \n ", s->array[s->top1]);
        s->top1 --;
    }
    else{
        printf("\nStack is empty. Cannot pop %d \n");
    }
}

void pop2(stack* s){
    if(!is_empty(s)){
        printf("popped %d. \n ", s->array[s->top2]);
        s->top2 ++;
    }
    else{
        printf("\nStack is empty. Cannot pop %d \n");
    }
}

void display1 (stack* s){
    int i;
    for( i=0; i <= s->top1; i++){
        printf("%d ", s->array[i]);
    }
    printf("\n");
}

void display2 (stack* s){
    int i;
    for( i=s->size-1; i > s->top2 ; i--){
        printf("%d ", s->array[i]);
    }
    printf("\n");
}

int main(){
    stack* st = (stack*)malloc(sizeof(stack));
        st->size = 10;
        st->top1 = -1;
        st->top2 = st->size;
        st->array = (int*)malloc(st->size * sizeof(int));
   push1(st,1);
   push1(st,2);
   push1(st,3);
   push2(st,10);
   push2(st,20);
   push2(st,30);
   display1(st);
   display2(st);
   pop1(st);
   pop2(st);

    
return 0;
}