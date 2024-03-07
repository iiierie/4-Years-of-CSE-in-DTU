#include<iostream>
using namespace std;
class abc;
class xyz{
    int data;
    friend void add(xyz,abc);
    friend void swap(xyz,abc);
    public:
    void setdata(int x){
        data = x;
    }
};

class abc{
    int data;
    friend void add(xyz,abc);
    friend void swap(xyz,abc);
    public:
    void setdata(int x){
        data = x;
    }
};

void add(xyz a, abc b){
    cout<< "sum: "<<(a.data + b.data)<<endl;
}

void swap(xyz o1, abc o2){
    int temp = o1.data;
    o1.data = o2.data;
    o2.data = temp;

    cout<<o1.data<<"  "<<o2.data<<endl;
}

int main(){
    xyz d1;
    d1.setdata(10);
    abc d2;
    d2.setdata(23);
    add(d1,d2);
    swap(d1,d2);
    return 0;
}