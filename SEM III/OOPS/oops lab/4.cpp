//4. WAP to implement Single,Multiple and Multi-level Inheritance
#include <iostream>
using namespace std;
class base_class{
    private:
    int x=10;
    public:
    void display1(){
        cout<<"THIS IS BASE CLASS."<<endl;
    }
};
class child_class_1:public base_class{
    private:
    int y=20;
    public:
    void display2(){
        cout<<"THIS IS CHILD 1 CLASS."<<endl;
    }
};
class child_class_2:public child_class_1{
    private:
    int z=30;
    public:
    void display3(){
        cout<<"THIS IS CHILD 2 CLASS."<<endl;
    }
};

class A{
    public:
    A(){
        cout<<"A called"<<endl;
    }
};
class B: public A , public base_class{
    public:
    B(){
        cout<<"B called"<<endl;
    }
};

int main(){
//single level inheritance base -> child1 & child1 -> child2
//multilevel inheritance base -> child1 -> child2
//multiple inheritance child1 & child2 -> child_class_3
child_class_2 obj;
    obj.display1();
    obj.display2();
    obj.display3();

B obj2;
    obj2.display1();
    
    
}