#include <iostream>
using namespace std;

class myclass{
    int first_data;
    int second_data;
    int third_data;
    public:
    myclass();
    //initialization list vaneko argument ra data assignment vitra grthyo paila hamle but aba bahira ni grna sakinxa within constructor declaration line 
    myclass(int arg1, int arg2, int arg3): first_data(arg1),second_data(arg2-first_data), third_data(second_data + arg3) //follow the order of data member declaration
    {
        cout<<"myclass constructor : "<<first_data << " " << second_data << " " << third_data <<endl;
    }
};


int main()
{
    myclass m(1,3,3);
    return 0;
}