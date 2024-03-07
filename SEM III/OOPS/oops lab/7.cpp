// WAP to implement Overloading using Motor as a class and it should calculate
// its monthly EMI if principle is passed as a parameter (take one P(int) and
// another P(float).rate=15 % and time=2 years.
#include<iostream>
#include<math.h>
using namespace std;
class motor{
    private:
        int rate = 15;
        int time = 2;
    public:
            int emi(int principle){
                int temp1 = pow((1+rate),time);
                int temp = ((principle * rate * temp1) / (temp1-1));
                return temp;
        }
            double emi(double principle){
                int temp1 = pow((1+rate),time);
                double temp = ((principle * rate * temp1) / (temp1-1));
                return temp;
        }
};


int main(){
      motor m;
      
      cout<< m.emi(100.45) <<endl;
      cout<< m.emi(100) <<endl;
    return 0;
}