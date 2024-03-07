/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class time{
    int hours;
    int minutes;
    int seconds;
    public:
    void gettime(int h, int m,int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display(){
        cout << hours << " : " << minutes<< " : " <<seconds << endl;
    }
    
    void sum_time(time t1 , time t2){
        seconds = t1.seconds + t2.seconds;
        minutes = seconds / 60;
        seconds = seconds % 60;
        minutes = minutes + t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes = minutes % 60;
        hours = hours + t1.hours + t2.hours;
    }
};



int main(){
    time t1,t2,t3;
     t1.gettime(1,0,30);
     t2.gettime(1,0,30);
    
    t3.sum_time(t1,t2);
    t3.display();

    return 0;
}
