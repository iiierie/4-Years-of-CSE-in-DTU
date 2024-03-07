//so yo program ma chai constant time ani constant space ma minimum element nikalna xa so euta natra stack rakheko ani minimum element vetyo vane encrypt form ma stack ma haldine ani pop grda decrypt grne
//https://www.youtube.com/watch?v=QTrNy-0Og7E 
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

static int min = 9999;

void push(stack* s, int value){
    //if full
    if(is_full(s))
        printf("Stack is full. Cannot push %d\n",value);
    //if stack empty then insert first element and update minimum value with that first element
    if(is_empty(s)){
        s->top++;
        s->array[s->top] = value;
        min = value;
        }
    //if value to be inserted in stack is less then the minimum value present in stack then that new value is min value so encrypt it and store encrypted in stack 
    else if(value < min){
        s->top++;
        s->array[s->top] = (2*value) - min;   
        min = value;
    }
    //else just store the value normally in stack
    else{
        s->top++;
        s->array[s->top] = value;
    }
    }
        

void pop(stack* s){
    //if empty
    if(is_empty(s)){
        printf("\nStack is empty. Cannot pop %d \n");
    }
    //while popping if minimum element gets popped then decrypt the element to get next minimum value
    if(s->array[s->top]  <= min ){
        min = ((2*min) - s->array[s->top]);
        s->top--;
    }
    //simple pop if greater than min
    else{
        s->top--;
    }
}

//function to display stack
void display (stack* s){
    int i;
    for( i=0; i <= s->top; i++){
        printf("%d ", s->array[i]);
    }
}

//function for getting minimum
void get_min(stack* temp){
    if(is_empty(temp)){
        printf("Stack is empty.");
    }
    else{
         printf("\n minimum element : %d ", min);
    }
}

int main(){
    stack* s = (stack*)malloc(sizeof(stack));
        s->size = 10;
        s->top = -1;
        s->array = (int*)malloc(s->size * sizeof(int));

    //push operations
        push(s,5);
        push(s,8);
        push(s,4);
        push(s,6);
        push(s,1);
        push(s,7);
    display(s);
    printf("\n");
    get_min(s);
        pop(s);
        pop(s);
    get_min(s);
        pop(s);
        pop(s);
    get_min(s);
    
return 0;
}