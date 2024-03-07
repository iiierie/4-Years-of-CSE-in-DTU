#include <iostream>
using namespace std;

//overloaded sum functions
template <typename T>
T sum(T a , T b){
    return a+b;
} 
 

template <typename T= int> //default ma int
T sum(T a , T b , T c){
    return a+b+c;
} 


int main(){ 
    cout << sum(4,5) << endl;
    cout << sum<float>(4.6,6.1) << endl;
    cout << sum<int>(4,5,6) << endl;
    return 0;
}