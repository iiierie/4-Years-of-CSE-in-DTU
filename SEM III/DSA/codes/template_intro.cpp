#include <iostream>
using namespace std;

//template definition 
    template <typename T> 
class add{
    T num1; //if both data members are of same datatype
    T num2;
    public:
    add();
    add(T a, T b){
        num1 = a;
        num2 = b; 
    }
    T sum (){
        return (num1+num2);
    }
};

int main(){
    cout << add<int>(5,3).sum() << endl;
    cout << add<float>(5.55,3.0).sum() << endl;
    char i = static_cast<char>(add<char>('c','d').sum());
    cout<<i;
    return 0;
}

