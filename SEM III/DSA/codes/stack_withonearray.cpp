// Online C++ compiler to run C++ program online

#include <iostream>
#include<bits/stdc++.h>
#define n 8
using namespace std;
int top1=-1, top2 = n;
int array[n];

void push1(int value){
    int x;
    if(top1 > (top2-1)){
        cout<<"overflow"<<endl;
    }
    else{
        cout<<"what to push? "<<endl;
        cin>> x;
        top1++;
        array[top1] = value;
    }
}

void push2(int value){
    int x;
    if(top1 > (top2-1)){
        cout<<"overflow"<<endl;
    }
    else{
         cout<<"what to push? "<<endl;
        cin>> x;
        top2--;
        array[top2] = value;
    }
}

void pop1(void){
    if(top1<=0){
        cout<<"underflow";
}
else{
    cout<< " The popped value is " << array[top1]<<endl;
    top1--;
}
}

void pop2(void){
    if(top2 >= n){
        cout<<"underflow";
}
else{
    cout<< " The popped value is " << array[top2]<<endl;
    top2++;
}
}

void display1(void){
    for(int i=top1;i<=0;i--){
        cout << array[i];
    }
}
    
void display2(void){
    for(int i = top2;i<n;i++){
        cout << array[i];
    }
}
    
using namespace std;

int main() {
    int choice;
    cout<<"ENTER THE OPERATION TO DO: "<<endl;
    cout<<"1: push in first stack"<<endl;
    cout<<"2: pop from first stack"<<endl;
    cout<<"3: push in second stack"<<endl;
    cout<<"4: pop from second stack"<<endl;
    cin>>choice;
    
    switch (choice){
    case 1: push1(1);
            break;
    case 2: pop1();
            break;
    case 3: push2(2);
            break;
    case 4: pop2();
            break;
    }
    

    return 0;
}