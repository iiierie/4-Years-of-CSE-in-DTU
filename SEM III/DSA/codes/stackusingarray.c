#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size;
    int top;
    int* arr;
}stack;

//isempty function returns 1 is empty otherwise returns 0
int isempty(stack* s){
    if( s->top == -1 ){
        return 1;
    }
    else{
        return 0;
    }
}

//isfull function returns 1 if full otherwise returns 0
int isfull(stack* s){
    if( s->top == (s->size -1) ){
        return 1;
    }
    else{
        return 0;
    }
}

//displays the stack array //loops until the last element i.e. the top ani prints each element inside the array
void display (stack* s){
    for(int i=0; i <= s->top; i++){
        printf("%d ", s->arr[i]);
    }
}

//inserts element //increment top ani then insert
void push(stack* s,int value){
    if(isfull(s)){
        printf("stack is full. cannot push %d",value);
        }
    else{
        s->top++;
        s->arr[s->top] = value;
    }
    
}
//deletes the top most element //just decrease top 
void pop(struct stack* s){
    if(isempty(s)){
        printf("\n stack is now empty. ");
    }
    else{
        printf("\n the popped element is %d .",s->arr[s->top]);
        s->top -- ;
    }
}

//main function ma structure lai suru ma memory allocate grne dynamically heap ma
//array lai dynamically memory allocate garne 
int main(){
   //defining stack pointer and allocating memory
     stack* s = (stack*) malloc( sizeof(stack));
        s->top=-1;
        s->size=5;
        s->arr=(int*)malloc(s->size * sizeof(int)); //allocating memory for the array inside the stack
//push operations
  push(s,1);
  push(s,2);
  push(s,3);
  push(s,4);
  push(s,5);
display(s);
//pop operations 
  pop(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
  pop(s);
}