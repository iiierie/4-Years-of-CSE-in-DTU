
/*basic skeleton of try catch
#include<iostream>
using namespace std;
int main(){
    try{
        if( )
            throw
    }
    catch(){

    }
return 0;
}*/



#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 0;
    try{
        if(b==0)
            // throw 101; //we can throw integer,string, char or even classes 
            throw string("CANT DIVIDE BY 0");
            // throw char('A');
        cout<< a/b <<endl;
    }
    catch(string e){
        cout<<"error "<< e <<" : divide by 0 "<<endl;
    }
return 0;
}

//throwing myclass
#include<iostream>
using namespace std;
class myclass{
    public:
    myclass(){
        cout<<"default constructor for my class";
    }
};

int main(){
    int a = 10, b = 0;
    try{
        if(b==0)
            
            throw myclass();
            
        cout<< a/b <<endl;
    }
    catch(myclass e){
    }
return 0;
}



// exception handling stack
#include <iostream>

using namespace std;
class stack{
    private:
        int top;
        int* arr;
        int size;
    public:
        stack();
        stack(int n){
            top = -1;
            size = n;
            arr = new int[size];
        }    
    void push(int value){
        if(top == size - 1)
            throw string("Stack Overflow");
        top++;
        arr[top] = value;
    }
    
    void pop(){
        if(top ==  -1)
            throw string("Stack Underflow");
            cout<<"popped "<< arr[top]<<endl;
        top--;
    }
    void display(){
        for(int i = 0; i <= top ; i++){
            cout<< arr[i] <<" ";
        }
    }
};
int main()
{
    stack s(3);
    try{
        s.push(1);
        s.push(2);
        s.push(3);
        
        s.pop();
        s.pop();
        s.pop();
        s.pop();
    }
    catch(string e){
        cout<<e<<endl;
    }
    s.display();
    return 0;
}
