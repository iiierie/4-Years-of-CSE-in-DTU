//formula to calculate EMI = ((principle * rate *  pow((1+rate),time)) / ( pow((1+rate),time)-1));

#include <iostream>
#include<math.h>
using namespace std;
class motor{
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
};
//main 
int main(){
      motor m(15,2);
      cout<<"EMI is " << m.emi(100.45f) <<endl; //passing float integer
      cout<<"EMI is " << m.emi(100) <<endl; //passing integer
    return 0;
}

