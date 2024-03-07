#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;

int isempty(struct node* top){
    if( top == NULL )
     return 1;
     else
     return 0;
}
int isfull(struct node* top){
    struct node*n = (node*)malloc(sizeof(node));
    if(n == NULL)
        return 1;
    else
    return 0;
    
}

struct node* push(struct node* top , int value_to_push){
    
    struct node* ptr = (node*)malloc(sizeof(node));
    ptr->data = value_to_push;
    ptr->next = top;
    top = ptr;
    
    
    return top;
}

void pop(struct node* top){
    if(isempty(top)){
        printf("empty stack.");
    }
    else{
    struct node* p = top;
    top = p->next ;
    printf("popped %d",p->data);
    free(p) ; 
    }

}
void display(struct node*top){
    struct node* p = top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(){
    node* top = (node*)malloc(sizeof(node));
    top = push(top,1);
    top = push(top,2);
    top = push(top,3);
    top = push(top,4);
    top = push(top,5);
    top = push(top,6);
    display(top);
    pop(top);
  
    
    return 0;
}