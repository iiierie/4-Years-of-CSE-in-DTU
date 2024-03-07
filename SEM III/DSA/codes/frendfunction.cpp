/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class marks{
    int physics;
    int chemistry;
    int maths;
    friend void print(marks);
    public:
    void getmarks(){
        cout<<"enter marks P-C-M : "<<endl;
        cin>>physics;
        cin>>chemistry;
        cin>>maths;
    }
};

void print(marks a){
    cout << a.physics<<endl;
    cout << a.chemistry<<endl;
    cout << a.maths<<endl;
}



int main()
{
    marks student[5];
    for(int i=0;i<5;i++){
    student[i].getmarks();
    print(student[i]);
}
    return 0;
}

