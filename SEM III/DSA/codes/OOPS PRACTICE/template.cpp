#include<iostream>
#include<bits/stdc++.h>
template <class T>
class operations{
    private:
        T num1;
        T num2;
    public:
    operations(T a,T b){
        num1=a;
        num2=b;
    }
    T sum(){
        T c = num1+num2;
        return c;
    }
    T difference(){
        T c=num1-num2;
        return c;
    }
    T division(){
        T c = num1/num2;
        return c;
    }
    T multiplication(){
        T c=num1*num2;
        return c;
    }
};
  

int main(){
using namespace std;
    operations<int> op(20,3);
    cout<<op.sum()<<endl;
    cout<<op.difference()<<endl;
    cout<<op.division()<<endl;
    cout<<op.multiplication()<<endl;

return 0;
}

