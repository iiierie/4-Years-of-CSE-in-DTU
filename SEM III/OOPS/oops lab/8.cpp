#include<iostream>
#include<math.h>
using namespace std;
class motor{
        int rate = 15;
        int time = 2;
    public:
            int emi(int principle){
                int temp1 = pow((1+rate),time);
                int temp = ((principle * rate * temp1) / (temp1-1));
                return temp;        }
            double emi(double principle){
                int temp1 = pow((1+rate),time);
                double temp = ((principle * rate * temp1) / (temp1-1));
                return temp;        }
};
class car:public motor{
    private:
       char car_brand[30];
       char car_model[20];
       double price;
    public:
       void get_data(){
        cout<<"Enter the Car Brand :";
        gets(car_brand);
        cout<<"Enter the Car Model :";
        gets(car_model);
        cout<<"Enter the price :";
        cin>>price;
       } 
};
int main(){  
      car c;
      c.get_data();
      cout<<"EMI is "<< c.emi(100000)<<endl;
    return 0;
}