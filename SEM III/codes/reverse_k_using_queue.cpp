#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void reverse_after_k(queue<int>& q,int k){
   stack<int> s;
   int n = q.size();
   for(int i = 1 ; i<=k ; i++){
    s.push(q.front());
    q.pop();
   }

   for(int i = 1 ; i<=k ; i++){
    q.push(s.top());
    s.pop();
   }

   for(int i = 1 ; i <= n-k ; i++){
    q.push(q.front());
    q.pop();
   }
}
void prints(queue<int> q){
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}

int main(){
  queue<int> q;
  int x, i = 0,k;
  cout<<"Enter the elements in the queue: ";
  for(; i<5 ; i++){
    cin>>x;
    q.push(x);
  }
  cout<<"Enter k: ";
  cin>>k;
  reverse_after_k(q,k);
  prints(q);
  return 0;
}
