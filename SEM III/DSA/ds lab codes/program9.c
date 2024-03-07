/*to find minimum element in constant time but using 
more space so we create another stack where we store the minimum values as we find them while pushing in stack*/

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

static int min = 9999; // high value taken so that first element is always less than 9999
void push(stack* s,stack* temp, int value){
    if(is_full(s))
        printf("Stack is full. Cannot push %d\n",value);
    //if value to be stored is greater than minimum then store it in stack normally
   if(value > min){
        s->top++;
        s->array[s->top] = value;   
    }
    //else if smaller or equal to then store it in both stacks as well as update the minimum element
    else{
        s->top++;
        s->array[s->top] = value;
        temp->top++;
        temp->array[temp->top] = value;
        min = temp->array[temp->top];
    }
    }
        

void pop(stack* s,stack* temp){
    //second stack's top element is the minimum element
    int min = temp->top ;
    if(is_empty(s)){
        printf("\nStack is empty. Cannot pop %d \n");
    }
    //while popping if both stack ko same element encountered i.e. remove from both stack
    if(s->array[s->top]  <= min ){
        s->top--;
        temp->top--;
        min = temp ->top;
    }
    else{
        //simple pop from stack 1 if greater than min
        s->top--;
    }
}

void display (stack* s){
    int i;
    for( i=0; i <= s->top; i++){
        printf("%d ", s->array[i]);
    }
}

void get_min(stack* temp){
    if(is_empty(temp)){
        printf("Stack is empty.");
    }
    else{
         printf("\n %d ", temp->array[temp->top]);
    }
}

int main(){
    stack* s = (stack*)malloc(sizeof(stack));
        s->size = 10;
        s->top = -1;
        s->array = (int*)malloc(s->size * sizeof(int));
    //create new stack to store minimum values
    stack* min_stack = (stack*)malloc(sizeof(stack));
        min_stack->size = 10;
        min_stack->top = -1;
        min_stack->array = (int*)malloc(min_stack->size * sizeof(int));
    //push operations
        push(s,min_stack,5);
        push(s,min_stack,8);
        push(s,min_stack,4);
        push(s,min_stack,6);
        push(s,min_stack,1);
        push(s,min_stack,7);
    printf("The main stack is: ");
    display(s);
    printf("\nThe auxiliary stack containing minimum values is ");
    display(min_stack);
    printf("\n min value is: ");
    get_min(min_stack);
        pop(s,min_stack);
        pop(s,min_stack);
    printf("\nAfter popping main stack:  ");
    display(s);
    printf("\nAfter popping auxiliary stack:  ");
    display(min_stack);
    printf("\n");
    printf("\nmin value after popping is: ");
    
    get_min(min_stack);
     
return 0;
}