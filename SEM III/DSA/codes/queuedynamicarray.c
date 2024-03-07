#include <stdio.h>
#include<stdlib.h>
typedef struct queue{
    int size;
    int f;
    int r;
    int* arr;
}queue;

void display(struct queue* q){
    for(int i=q->f;i<=q->r;i++){
        printf("%d ",q->arr[i]);
    }
}
int isempty(struct queue* q){
    //element nai halena or dequeue grda grda rear vanda thulo vayo front
    if(q->f == -1 || q->f>q->r){
        return 1;
    }
    return 0;
}

int isfull(struct queue* q){
    //max size samma full vayo
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue* q,int value){
    if(q->r == q-> size-1){
        printf("queue is full.");
    }
    else{
       q->f=0;
       q->r++;
       q->arr[q->r] = value;
    }
}

void dequeue(struct queue* q){
    if(q->f == -1){
        printf("queue is empty.");
    }
    else{
        printf("\nthe dequeued element is %d\n ",q->arr[q->f]);
        q->f++;
    }
}

int main()
{
    struct queue* qq = (struct queue*)malloc(sizeof(struct queue));
    qq->size = 10;
    qq->f = qq->r= -1;
    qq->arr = (int*) malloc (sizeof(int));
    
    enqueue(qq,1);
    enqueue(qq,2);
    enqueue(qq,3);
    enqueue(qq,4);
    enqueue(qq,5);
    enqueue(qq,6);
    enqueue(qq,7);
    display(qq);
    dequeue(qq);
    dequeue(qq);
    display(qq);
    return 0;
}
