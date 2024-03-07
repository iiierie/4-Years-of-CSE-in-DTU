
#include <stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int* arr;
};
void display(struct queue* q){
    for(int i=q->f;i<=q->r;i++){
        printf("%d ",q->arr[i]);
    }
}

void enqueue(struct queue* q,int value){
    //case 1: queue empty so euta element put grna xa
    if(q->f==-1 && q->r == -1){
        q->f = q->r = 0;
        q->arr[q->r]= value;
    }
    //case 2: rear lai ek badhauda front auxa i.e. queue full xa
    else if(((q->r+1)%q->size) == q->f){
    printf("queue is full");}

    //case 3: space xa ra increment garera put grne
    else {
    q->r = ((q->r+1)%q->size); //circular increment
    q->arr[q->r] = value;
 }
}


void dequeue(struct queue* q){
    //case 1: euta matra element xa queue ma teslai hataye pxi empty hunxxa queue so front ra rear duitai -1
    if(q->f == q->r){
        q->f = q->r = -1;
    }
    //case 2:empty queue 
    else if(q->f == -1 && q->r == -1 ){
        printf("queue is empty");
    }
    //case 3: 
      
    else {
        printf("\nthe dequeued element is %d\n ",q->arr[q->f]);
        q->f = (q->f+1)%q->size;
    }
}

int main()
{
    struct queue* qq = (struct queue*)malloc(sizeof(struct queue));
        qq->size = 10;
        qq->f = qq->r = -1;
        qq->arr = (int*) malloc (qq->size*sizeof(int));
//enqueue
    enqueue(qq,1);
    enqueue(qq,2);
    enqueue(qq,3);
    enqueue(qq,4);
    enqueue(qq,5);
    enqueue(qq,6);
    enqueue(qq,7);
    enqueue(qq,7);
    enqueue(qq,7);
    enqueue(qq,7);

display(qq);
//dequeue    
    dequeue(qq);
    dequeue(qq);
    dequeue(qq);
    dequeue(qq);
    enqueue(qq,8);
    enqueue(qq,9);

display(qq);
    return 0;
}
