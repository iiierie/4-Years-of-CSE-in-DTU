#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_roll(int a){
        roll_number = a;
    }
    void display_roll(){
        cout << roll_number << " ";
        cout<<endl;
    }
};

class theory:public virtual student{
    protected:
    int tmaths,tphysics;
    public:
    void set_theory_marks(int a,int b){
        tmaths = a;
        tphysics = b;
    }
    void display_theory_marks(){
        cout << tmaths << " ";
        cout << tphysics << " ";
        cout<<endl;
    }
};

class practical:virtual public student{
    protected:
    int pmaths,pphysics;
    public:
    void set_practical_marks(int a,int b){
        pmaths = a;
        pphysics = b;
    }
    void display_practical_marks(){
        cout << pmaths << " ";
        cout << pphysics << " ";
        cout<<endl;
    }
};


class result: public theory,public practical{
    protected:
    int total_maths,total_physics,total;
    public:
    void display_total(){
        total_maths = pmaths + tmaths;
        total_physics = pphysics + tphysics;
        total = total_maths + total_physics;

        cout<<total<< endl;
        
    }
};
int main(){
    result s;
    s.set_roll(01);
    cout<<"Roll no. ";
    s.display_roll();
    s.set_practical_marks(15,15);
    s.display_practical_marks();
    s.set_theory_marks(70,70);
    s.display_theory_marks();
    s.display_total();
}