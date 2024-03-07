// function overriding 
//formula to calculate EMI = ((principle * rate *  pow((1+rate),time)) / ( pow((1+rate),time)-1));

#include<iostream>
#include<math.h>
#include<cstring>

using namespace std;
class motor{
        protected:
        int rate;
        int time;
    public:
        motor();
        motor(int r, int t){
            rate = r;
            time = t;
        };
        public:
                int emi(int principle){
                    int temp1 = pow((1+rate),time);
                    int temp = ((principle * rate * temp1) / (temp1-1));
                    return temp;
                }   
                float emi(float principle){
                    int temp1 = pow((1+rate),time);
                    double temp = ((principle * rate * temp1) / (temp1-1));
                    return temp;
            }
                  virtual void display(){
                  cout<<"Model class is running "<<endl;
        }
};

//derived class
class car:public motor{
    protected:
        string name;
        string model;
    public:
    car();
    car(string a,string b, int r, int t):motor(r,t){
        name = a;
        model = b;
    };
    public:
        void display(){
            cout<<"Details for the car is: "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Model: "<<model<<endl;
        }
};

//main function
int main(){
      motor* ptr;
      car tesla("Tesla","X",15,2);
      ptr = &tesla;
      cout<<"EMI  is "<< ptr -> emi(300000)<<endl;
      ptr -> display();
    return 0;
}

