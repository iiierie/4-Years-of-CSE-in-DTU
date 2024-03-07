#include <iostream>
using namespace std;

//simply first base with its constructor that takes one argument 
class first_base{
    int first_base_data;
    public:
    first_base();
    first_base(int a){
        first_base_data = a;
        cout<<"first base constructor : "<<first_base_data <<endl;
    }
};
//simply second base with its constructor that takes one argument 
class second_base{
    int second_base_data;
    public:
    second_base();
    second_base(int a){
     second_base_data = a;
         cout<<"second base constructor : "<<second_base_data<<endl;
         
    }  
};

/*derived class constructor takes three arguments  
tyo maddhey two of them are passed to base 1 and base 2 constructor ani arko last chai for itself
*remember the order of execution of constructors*
order:  virtual base class(in order of their declaration ) -> base class (in order of declaration ) -> finally derived class */

class derived: public second_base, public first_base {
    int derived_data;
    public:
    derived();
    derived(int a,int b, int c):first_base(a) , second_base(b){
        derived_data = c;
            cout<<"derived base constructor : "<<derived_data<<endl;
        }
};

int main()
{
    derived d(1,2,3);
    return 0;
}