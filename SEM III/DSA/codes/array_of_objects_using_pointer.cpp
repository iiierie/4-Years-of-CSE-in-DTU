#include <iostream>
using namespace std;
class marks{
    int physics;
    int maths;
    public:
    void setdata(int x,int y){
        physics = x;
        maths = y;
    }
    void display(){
        cout<<"Physics: "<<physics<<endl;
        cout<<"Maths: "<<maths<<endl;
    }
    };
int main(){
    int x,y;
    //marks vanne class takes total 2+2 bytes

    marks* m = new marks[5]; // creates array of objects of type marks 
    //5 ota * sizeof class marks i.e 4 = 20 bytes space in heap ani address return grdinxa of first object marks and stores in m
    for(int i = 0; i < 5 ;i++){
        cout<<"Enter the marks in phy and maths for student #" << i+1 << endl;
        cin >> x >> y;
        m->setdata(x,y);
        m->display();
        m++; //points to next object in the array
    }
    return 0;
}