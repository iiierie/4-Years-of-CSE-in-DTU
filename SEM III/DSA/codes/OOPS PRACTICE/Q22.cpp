#include <iostream>
#include<stack>
//queue using stacks
using namespace std;
struct Queue {
  stack < int > s1, s2;
  void push(int data) {
    while (!s1.empty()) {
      s2.push(s1.top());
      s1.pop();
    }
    cout << "The element pushed is " << data << endl;
    s1.push(data);
    while (!s2.empty()) {
      s1.push(s2.top());
      s2.pop();
    }
  }
  int pop() {
    if (s1.empty()) {
      cout << "Stack is empty";
      exit(0);
    }
    int val = s1.top();
    s1.pop();
    return val;
  }
  // Return the Topmost element from the Queue
  int top() {
    if (s1.empty()) {
      cout << "Stack is empty";
      exit(0);
    }
    return s1.top();
  }
};
int main {
  Queue q;
  q.push(3);
  q.push(4);
  q.push(20);
  cout << "The element poped is " << q.pop() << endl;
  q.push(5);
  cout << "The top of the queue is " << q.top() << endl;
}