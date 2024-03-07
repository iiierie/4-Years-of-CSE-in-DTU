#include <iostream>
using namespace std;
//multiple parameters when different datatypes are to be templated
// template <typename datatype1 , typename datatype2, ....... and so on>
template <typename t1 = int , typename t2 = int> //default int ho 
class myclass{
    t1 n1;
    t2 n2;
    public:
    myclass();
    myclass(t1 a, t2 b){
        n1 = a;
        n2 = b;
    }
    void display(){
        cout<< n1 <<" & "<<n2<<endl;  
    }
    
};

int main(){
    myclass <int , char> (5,'c').display();
    myclass <float , int> (5.55,6).display();
    myclass <double , float> (5.555555,6.02).display();
    myclass<> c(89,45); //default ma datatype is taken as int mathi declaration ma
    c.display();
    return 0;
}