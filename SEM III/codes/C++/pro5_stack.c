#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size;
    int top;
    int* array;
}stack;

int is_empty(stack* s){
    if(s->top == -1){
        return 1;
    }
    return 0;
}

int is_full(stack* s){
    if(s -> top == (s->size -1) ){
        return 1;
    }
    return 0;
}

void push(stack* s,int value){
    if(!is_full(s)){
        s->top ++;
        s->array[s->top] = value;
    }
else{
        printf("Stack is full. Cannot push %d\n",value);
    }
}

void pop(stack* s){
    if(!is_empty(s)){
        printf("popped %d. \n ", s->array[s->top]);
        s->top --;
    }
    else{
        printf("\nStack is empty. Cannot pop %d \n");
    }
}

void display (stack* s){
    int i;
    for( i=0; i <= s->top; i++){
        printf("%d ", s->array[i]);
    }
}

int main(){
    stack* st = (stack*)malloc(sizeof(stack));
        st->size = 5;
        st->top = -1;
        st->array = (int*)malloc(st->size * sizeof(int));
    printf("is empty? %d \n",is_empty(st));
    printf("is full? %d \n",is_full(st));
    push(st,1);
    push(st,2);
    push(st,3);
    push(st,4);
    display(st);
    pop(st);
    push(st,5);
    display(st);
    pop(st);
    display(st);
    

    
return 0;
}