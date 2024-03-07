/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class employee{
    int id;
    int salary;
    static int count;
    public:
    void getdata(){
        count ++;
        cout<<"id? : "<<endl;
        cin>>id;
        cout<<"salary? :"<<endl;
        cin>>salary;
    }
    
    void display(){
        cout<<"id is"<<id<<endl;
        cout<<"salary is "<<salary<<endl;
        cout<<"count is "<<count<<endl;
    };
    
};
int employee::count;
int main()
{
    employee ram;
    ram.getdata();
    ram.display();
 
 employee ramesh;
    ramesh.getdata();
    ramesh.display();

    return 0;
}
