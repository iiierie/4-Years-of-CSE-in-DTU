#include <iostream>
using namespace std;
class base{
    public:
    base(){
    cout<< "Base constructor called." << endl;
    }
    virtual ~base(){
    cout<< "Base destructor called." << endl;
    }
};
class derived : public base{
    public:
    derived(){
     cout<<"Derived constructor called." << endl; 
    }
     ~derived(){
     cout<<"Derived destructor called." << endl; 
    }
    
    
};

int main(){
    base* ptr = new derived();
    delete(ptr);
    return 0;
}