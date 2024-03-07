// WAP to Calculate the area of Circle and Square.
#include<iostream>
using namespace std;
#define PI 3.14
class area{
    double radius;
    double length;
    public:
    double area_of_circle(double r){
        radius = r;
        return (PI*r*r);
    }
    double area_of_square(double l){
        length = l;
        return (l*l);
    }
};
int main(){
    area a;
    cout<<"Area of Circle "<<a.area_of_circle(3.04)<<endl;
    cout<<"Area of Square "<<a.area_of_square(3);
    return 0;
}