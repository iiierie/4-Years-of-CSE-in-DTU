#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fibonacci (int n){
    int a=0,b=1,temp,i;
    cout<<a<<" "<<b<<" ";
    for(i=0;i<n;i++){
        temp = a+b;
        a=b;
        b= temp;
        cout<<temp<<" ";
    }
}

int main(){
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}