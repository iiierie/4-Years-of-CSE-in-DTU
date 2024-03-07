#include <iostream>
using namespace std;
inline int area(int radius){
    return radius*radius*3.1415;
}
inline float perimeter(int radius){
    return 3.1415 * 2 * radius;
}
int main(){
    cout<<area(5)<<endl;
    cout<<perimeter(5);
    return 0;
}