#include <iostream>

using namespace std;

class complex{
    int real;
    int imag;
    public:
    complex(){
        real = 0;
        imag = 0;
    }
    complex(int a,int b){
        real = a;
        imag = b;
    }
    
    void display(){
        cout<<real<<" + "<<imag<<"i "<<endl;
    }
    
    complex operator +(complex a){
        complex result;
        result.real = real + a.real;
        result.imag = imag + a.imag;
        return result;
    }
    };
    


int main()
{
    
    complex c1(1,2);
    complex c2(3,4);
    complex c3(4,5);
    complex c4(4,5);

    complex c5 = c1 + c2 + c3 + c4; //c1.add(c2);
    c5.display();
    return 0;
}
