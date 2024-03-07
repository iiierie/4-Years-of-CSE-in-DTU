#include <iostream>
#define n 8
int array[n];
int front = 0 , rear = 0;
using namespace std;


int isfull(void){
if(front == 0 && rear == n-1){
 cout<<"FULL";
    return 1;}
    else {
    
    return 0;
    }
}

int isempty(void){
if(front == 0 && rear == 0){
    cout<<"EMPTY";
        return 1;}
    else {
    
    return 0;
    }
}


int enqueue(){
     int value;
    if ( isfull() == 1 ){
    cout<<"Queue is full";
    }
    else {
        cout<<"what to insert? : "<<endl;
        cin>>value;
        array[rear] = value;
        rear ++;
        
    }
}

int dequeue(){

    if ( isempty()== 1){
        cout<< " Queue is empty";
    }
    else{
        cout<<"dequeued element is " << array[front]<<endl;
        front ++;
    }
}

void display(void){
    cout<<"The array is: ";
    for(int i=front;i<rear;i++){
        cout << array[i]<<" ";
    }
}

int main(){
    int T;
    cout<<"number of iterations? ";
    cin>>T;
    while(T--){
    int choice;
    cout<<"ENTER THE OPERATION"<<endl;
    cout<<"1: ENQUEUE"<<endl;
    cout<<"2: DEQUEUE"<<endl;
    cout<<"3: CHECK FULL(returns if full)"<<endl;
    cout<<"4: CHECK EMPTY(returns if empty)"<<endl;
    cin>>choice;
    switch (choice){
        case 1: enqueue();
        break;

        case 2: dequeue();
        break;

        case 3: isfull();
        break;

        case 4: isempty();
        break;

        default: display();
        
    }
    display();
    };

return 0;
}