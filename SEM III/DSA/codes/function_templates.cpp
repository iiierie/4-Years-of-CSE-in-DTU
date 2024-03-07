#include <iostream>
#include <cstring>
using namespace std;
template <typename T>

T sum( T a , T b){
        return a+b;
    }
template <typename T>
T difference( T a , T b){
    if(a>b)
        return a-b;
    return b-a;
    }
template <typename T>
T product( T a , T b){
        return a*b;
    }
template <typename T>
float divide( T a , T b){
    if(b==0)
        throw string("Error : Divide by 0 ");
    return a/b;  
}

int main(){
    cout << sum<int>(5,6)<<endl;
    cout << difference<int>(5,6)<<endl;
    cout << product<int>(5,6)<<endl;
    
    try{
    cout << divide<int>(6,0);
    }
    catch(string e){
        cout<<e<<endl;
    }
    return 0;
}