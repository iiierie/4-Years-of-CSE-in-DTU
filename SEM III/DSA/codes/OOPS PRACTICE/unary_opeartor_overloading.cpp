
#include <iostream>
using namespace std;
class coordinates{
        int x,y,z;
    public:
        coordinates(){}
        coordinates(int a, int b , int c):x(a),y(b),z(c){
        }
        void operator -(){
            x = -x;
            y = -y;
            z = -z;
        }
        void display(){
            cout<<"the coordinates are "<<"( "<< x<<" , "<<y<<" , "<<z<<" )"<<endl;
        }
};
int main() {
    coordinates c1(2,3,5);
    c1.display();
    -c1;
    c1.display();

    return 0;
}