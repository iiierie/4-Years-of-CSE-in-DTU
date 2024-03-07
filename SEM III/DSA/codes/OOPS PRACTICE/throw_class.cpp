/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cstring>
using namespace std;
class error{
    string error_desc;
    int error_code;
    public:
    error(){    }
    error(string n, int c){
        error_desc= n;
        error_code = c;
}   
    void display(){
        cout<<"Error "<< error_desc<< " Error code "<<error_code<<endl;
    }
};
using namespace std;

int main()
{
    try{
        if(1){
            throw error("unknown",45);
        }
    }
        catch(error e){
            e.display();
        }
    
    return 0;
}
