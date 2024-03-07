
#include <stdio.h>
#define length 5


//queue adt
typedef struct{
    int front;
    int rear,size,array[length];
}queue;
/
int isempty(queue q){
    //element nai halena or dequeue grda grda rear vanda thulo vayo front
    if(q.front == -1 || q.front>q.rear){
        return 1;
    }
    return 0;
}

int isfull(queue q){
    //max size samma full vayo
    if(q.rear == length-1){
        return 1;
    }
    return 0;
}
/
queue enqueue( queue q, int value){
    // case 1:full xa vane
    if(isfull(q))
        printf("Queue Full. ");
    //case 2: if empty xa vane
    else if(isempty(q)){
        q.front = q.rear = 0;
        q.array[q.rear]= value;
    }
    //case 3: normal case
    else {
        q.rear = q.rear + 1;
        q.array[q.rear] = value;
    }
    return q;
    }

queue dequeue(queue q){
    //case 1: empty queue xa vane
    if(isempty(q)){
        printf("empty queue");
    }
    //case 2: if euta mtra element xa vane tyo remove garepxi queue khali so front rear -1 hunxa
    else if(q.front == q.rear){
        printf("\nthe dequeued element is %d\n", q.array[q.front]);
        q.front = q.rear = -1;
    }
    //case 3: normal case front lai agadi badhaideko
    else{
        printf("\nthe dequeued element is %d\n", q.array[q.front]);
        q.front = q.front + 1;
    }
    return q;
}
//display from front to rear
void display(queue q){
    for(int i = q.front; i<=q.rear ; i++){
        printf("%d ",q.array[i]);
    }
}
int main()
{
    queue q1;
    q1.front = q1.rear = -1;
    q1.size = 0;
    
    q1=enqueue(q1,5);
    q1=enqueue(q1,6);
    q1=enqueue(q1,7);
    q1=enqueue(q1,8);
    q1=enqueue(q1,9);
    display(q1);
    q1=dequeue(q1);
    display(q1);
    q1=dequeue(q1);
    display(q1);
    return 0;
}
