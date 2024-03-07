/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<conio.h>
#include <string>
using namespace std;
class binary{
    string s;
    public:
    void getdata(){
    cout<<"Enter binary number: ";
    cin>>s;
}

void chkbin(){
    int i=0;
    for(i=0;i<s.length();i++){
    if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"incorrect binary number system"<<endl;
        exit(0);
    }
}
}

void ones(void){
    chkbin();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
          s.at(i)= '1';}
          else {
          s.at(i) = '0';}
    }
}

void display(){
    ones();
    cout<<s;
}

};



int main()
{
   binary bin;
   bin.getdata();
   bin.display();
 
    return 0;
}

