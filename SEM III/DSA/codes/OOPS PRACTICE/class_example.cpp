#include<iostream>
using namespace std;
class triangle{
    private:
        int base;
        int height;
    public:
        triangle(int b,int h){
            base=b;
            height = h;
        }
       int area(){
            return (base*height);
        }
        void setheight(int hei){height=hei;}
        int getheight(){return height;}
        int getbase(){return base;}
    };

int main(){
    triangle tr1(10,12);
    cout<<tr1.area()<<endl;
    tr1.setheight(100);
    cout<< tr1.getheight()<<endl;
    cout<< tr1.getbase()<<endl;
    return 0;
}