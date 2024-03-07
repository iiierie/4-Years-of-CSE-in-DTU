#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;

struct node* enqueue(struct node* front,struct node* rear,int value){
    // if(front != rear ){
    //     while(rear->next != NULL){
    //         rear = rear->next;
    //     }
    // }
        struct node* newnode = (node*)malloc(sizeof(node));
        newnode->data= value;
        newnode->next = NULL;
        //empty queue
    if( front == 0 && rear == 0 ){
        front = rear = newnode;
    }
    else{
        //normal queue
        rear -> next = newnode;
        rear = newnode;
    }
    return front;
}

struct node* dequeue(struct node* front,struct node* rear){
    if(front == 0){
        printf("empty queue");
    }
    else if(front == rear){
        front = rear = 0;
    }
    else{
        struct node* ptr = front;
        front = front->next;
        free(ptr);
    }
    return front;
}

void display(struct node* front,struct node* rear){
    if(front == 0){
        printf("EMPTY LIST");
    }
    else {
    while(rear != NULL){
        printf("%d ",rear->data);
        rear = rear->next; 
    }
    }
}



int main(){
    
struct node* front = (node*)malloc(sizeof(node));
struct node* rear = (node*)malloc(sizeof(node));
front->data = 1;
front->next = rear;
rear->data = 2;
rear->next = NULL;
front = enqueue(front,rear,12);



return 0;
}