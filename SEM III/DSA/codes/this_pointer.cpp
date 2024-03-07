#include <iostream>
#include <cstring>
using namespace std;
class person{
    string name;
    int age;
    public:
    void setdata(string name , int age){
        this->name = name;     //name = name;
        this->age = age;       //age = age;
    }
    void display(){
        cout << "Name: " << name<<endl;
        cout << "Age: " << age<<endl;
    }
    //reference passing & p garera
    //return type is person reference which goes and gets stored in elder variable of same type
    person & greater(person &p){
        if(age >= p.age){
            return *this;
        }
        else{
            return p;
        }
    }
};
int main(){
    person p1,p2;
    p1.setdata("ramesh",24);
    p2.setdata("mukhesh",25);
    cout<<"elder person is"<<endl;
    person elder = p1.greater(p2);
    elder.display();
    return 0;
}