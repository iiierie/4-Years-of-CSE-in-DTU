
#include <iostream>
using namespace std;
class DB;
class DM
{
private:
    float metres;
    float centimetres;

public:
    friend float addition(DM, DB);
    DM();
    DM(float a, float b)
    {
        metres = a;
        centimetres = b;
    }
    void display()
    {
        cout << metres << "m " << centimetres << "cm" << endl;
    }
};

class DB
{
private:
    float foot;
    float inches;

public:
    friend float addition(DM, DB);
    DB();
    DB(float a, float b)
    {
        foot = a;
        inches = b;
    }
    void display()
    {
        cout << foot << "ft " << inches << "in " << endl;
    }
};

float addition(DM a, DB b)
{
    float metres = a.metres + (a.centimetres * 0.01) + (b.foot * 0.3048) + (b.inches * 0.0254);
    return metres;
}

int main()
{
    DM obj1(12, 45.56);
    obj1.display();
    DB obj2(10, 55.89);
    obj2.display();
    cout << "sum in metres: " << addition(obj1, obj2) << endl;
    return 0;
}