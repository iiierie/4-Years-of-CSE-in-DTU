#include <iostream>
#include <cstring>
using namespace std;

//abstract base class : base class jasko object create hudaina ani its made just for sake of inheritance provide garna ra pointer create grna for runtime polymorphism
//abstract base class must have at least one pure virtual function
class media{
    protected:
        string name;
        float price;
    public:
    media();
    media(string name,float price){
        this->name = name;
        this->price = price;
    };
    virtual void display()= 0; //pure virtual function declared by writing "= 0";
};


class book:public media{
    protected:
        int pages;
    public:
    book();
    book(string name,float price,int pages):media(name,price){
        this-> pages = pages;
    };

     void display(){ //redefining display function
        cout<<"\nThe details for the book are:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Pages: "<<pages<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
class movie:public media{
    protected:
        float length;
    public:
    movie();
    movie(string name,float price,float length):media(name,price){
        this-> length = length;
    };

     void display(){
        cout<<"\nThe details for the movie are:"<<endl;
        cout<<"Name: "<< name<< endl;
        cout<<"Length: "<< length<< endl;
        cout<<"Price: "<< price<< endl;
    }
};

int main(){
    media* media_pointer[2]; //duita pointer to point at book ani movie object

    book book_object("Malice",450.55,200); //name,price,pages
    movie movie_object("Shawshank Redemption",300,120);

    media_pointer[0] = &book_object;    //base pointer pointing to derived object
         media_pointer[0] -> display(); //if media base class ma display virtual navako vaye tei base function call hunthyo
    media_pointer[1] = &movie_object;   //base pointer pointing to derived object
         media_pointer[1] -> display();

    return 0;
}