// WAP to implement Polymorphism by using Sum function of 2 and 3 variables.
#include<iostream>
using namespace std;
class sum{
    int x;
    int y;
    int z;
    public:
    int add(int a,int b){
        x = a;
        y = b;
        return x+y;
    }
    int add(int a,int b,int c){
        x = a;
        y = b;
        z = c;
        return x+y+z;
    }
};
int main(){
    sum s1;
    cout<< s1.add(5,2)<<endl;
    cout<< s1.add(5,2,5)<<endl;
    return 0;
}