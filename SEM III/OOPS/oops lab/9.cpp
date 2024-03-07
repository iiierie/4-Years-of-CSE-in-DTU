// WAP to implement Encapsulation. Create class Cylinder and function to
// calculate Volume (be sure to protect variable volume from outside world.)
#include<iostream>
#define PI 3.14
using namespace std;
class cylinder{
    private:
        double radius;
        double height;
    public:
        cylinder();
        cylinder(int r,int h){
            radius = r;
            height = h;
        }
        double volume(){
            return (PI*radius*radius*height);
        }
};
int main(){
    cylinder c(4.5,5);
    cout<< "Volume is " << c.volume();
    return 0;
}