// WAP to implement friend function in Java or C++ . Use class Sphere with
// radius as variable and friend function cylinder (with given height) and
// calculate the Volume of both.

#include<iostream>
using namespace std;
#define PI 3.14
class sphere{
    double radius;
    public:
    friend double cylinder(sphere);;
    sphere();
    sphere(double r){
        radius = r;
    }
    double volume_sphere(){
        return ((4*PI*radius*radius*radius)/3);
    }
    };

double cylinder(sphere s){
    double height = 5;
    return (height*PI*s.radius*s.radius); 
}

int main(){
    sphere s(1);
    cout<<" Volume of Sphere is " << s.volume_sphere()<<endl;
    cout<<" Volume of Cylinder is " << cylinder(s);
    return 0;
}