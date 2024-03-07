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
};

class derived_class : public base_class{
    int derived_data;
    public:
    derived_class();
    derived_class(int a,int b): base_class(b) //constructors in derived classes //takes two parameters a for derived class and b for base class
    {
        derived_data= a;
    };
    void display(){
        cout<<"This is derived class and the derived data  is "<< derived_data<<endl;
    }
};

int main(){
        base_class* bptr;
        derived_class d_obj(10,20);
        bptr = &d_obj; //base pointer pointing to derived class ko object 
        bptr->display(); // runs the base class ko display function //late binding kinaki kun display bind grne is decided at runtime  

  /*Derived class pointer cannot point to base class.
        derived_class *dptr;
        base_class b_obj(20);
        dptr = &b_obj;
        dptr->display(); ->ERROR DERIVED CLASS CANNOT POINT TO BASE CLASS
   reason ->  derived class has inherited all the information from base class so no need to point to base class object 
   */         

    return 0;
}