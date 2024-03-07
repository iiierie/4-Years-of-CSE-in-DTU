#include<iostream>
using namespace std;
class calc{
    private:
    int x;
    int y;
    public:
    calc();
    calc(int a,int b){
        x = a;
        y = b;
    }
    int add(){
        return x+y;
        }
    int subtract(){
        return x-y;
        }
    int multiply(){
        return x*y;
        }
    int divide(){
        return x/y;
        }
};
int main(){
    //  calc(3,4);
    cout<<calc(3,4).add()<<endl;
    cout<<calc(3,4).subtract()<<endl;
    cout<<calc(3,4).multiply()<<endl;
    cout<<calc(3,4).divide()<<endl;
    return 0;
}