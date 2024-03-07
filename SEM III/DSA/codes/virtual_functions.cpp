#include <iostream>
using namespace std;
class base_class{
    int base_data;
    public:
    base_class();
    base_class(int a){
        base_data= a;
    };
    void display(){
        cout<<"This is base class and the base data is "<< base_data<<endl;
    }

    virtual void function(){
        cout<<"This is base class function "<< endl;
    }
};

class derived_class : public base_class{
    int derived_data;
    public:
    derived_class();
    derived_class(int a,int b): base_class(b) 
    {
        derived_data= a;
    };
    void display(){
        cout<<"This is derived class and the derived data  is "<< derived_data << endl;
    }
    void function(){
        cout<<"This is derived class function "<< endl;
    }
};

int main(){
        base_class* bptr;
        derived_class d_obj(10,20);
        bptr = &d_obj; 
        bptr->display();  //display function isn't declared virtual tesaile base kai display call hunxa
        bptr->function(); // function virtual declared in the base class that's why base ko function call navayera derived ko call hunxa //late binding
        //virtual function declared xa vanepxi derived call hunxa
        //remember virtual class->inheritance ma prxa where only one copy of data is inherited from grandparent to parent to child so dont be confused
  
    return 0;
}