#include<iostream>
using namespace std;
class Employee{
    private:
    char name[20];
    int employee_id;
    float salary;
    int age;
    float basic_salary , gross_salary ,net_salary,da,it;

    public:
    void get_data(){
        int count = 1;
        cout<<"ENTER DETAILS FOR EMPLOYEE "<< count++ <<endl;
        cout<<"Enter Name: "<<endl;
        gets(name);
        cout<<"Enter Employee ID: "<<endl;
        cin>> employee_id;
        cout<<"Enter age: "<<endl;
        cin>> age;
        cout<<"Enter basic salary: "<<endl;
        cin>>basic_salary;
    }

    float calc_net_salary(){
        da= basic_salary*0.52;
        gross_salary = basic_salary + da;
        it = gross_salary * 0.30;
        net_salary = basic_salary + da - it;
        return net_salary;
    }

    void display(){
        cout<<"\nEMPLOYEE DETAILS : "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<employee_id<<endl;

        cout<<"Age: "<<age<<endl;
        cout<<"Net Salary : "<<net_salary<<endl;
    }
};
int main(){
    Employee e1;
    e1.get_data();
    e1.calc_net_salary();
    e1.display();
}