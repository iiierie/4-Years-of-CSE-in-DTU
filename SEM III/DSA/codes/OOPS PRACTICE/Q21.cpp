#include<iostream>
#include<queue>
using namespace std;
class stack{
    queue<int> q1,q2;
        public:
        void push(int element){
            
            // enqueue in secondary_queue
            q2.push(element);
            
            // add elements of primary_queue to secondary_queue
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            
            // swapping the queues
            queue<int> temp_queue = q1;
            q1 = q2;
            q2 = temp_queue;
        }
    
        void pop(){
            if(q1.empty()){
                return;
            } else {
                q1.pop();
            }
        }
    
        int top(){
            if(q1.empty()){
                return -1;
            } else {
                return q1.front();
            }
        }
         void printStack()
        {
            queue<int> temp_queue = q1;
            
            while(!temp_queue.empty()){
                cout<<temp_queue.front()<<" ";
                temp_queue.pop();
            }
            cout<<"\n";
            
        }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.printStack();
    cout<<"Top: "<<s.top()<<"\n";
    s.pop();
    s.printStack();
    return 0;
}