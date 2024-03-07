/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cstring>
using namespace std;
class stringg{
    int length;
    char* name; 
    public:
    stringg(){
        length = 0;
        name = new char[length+1];
    }
    stringg (char* s){
        length = strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }
    void display(){
        cout<<name<<endl;
    }
    
    void join(stringg &a,stringg &b){
        length = a.length + b.length;
        delete name;
        name = new char[length+1];
        strcpy(name,a.name);
        strcat(name,b.name);
    }
};



int main()
{
    stringg s1("sandesh");
    s1.display();
    stringg s2("shrestha");
    s2.display();
    stringg s3;
    s3.join(s1,s2);
    s3.display();
    
        return 0;
}
