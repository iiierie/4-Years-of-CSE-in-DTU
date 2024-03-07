#include <iostream>
#include <conio.h>
#include <cstring>
#include <cctype>
using namespace std;
// declaration of class books
class books
{
    string author;
    string title;
    string publisher;
    double price;
    int copies;
    double stock;

public:
    books();
    books(string author, string title, string publisher, double price, int copies, double stock)
    {
        this->author = author;
        this-> title = title;
        this-> publisher = publisher;
        this->price = price;
        this->copies = copies;
        this->stock = stock;
    }
    //to check the availability of a
    void check()
    {
        string t;
        string aut;
        int cop;
        cout << "\nEnter the following details to search for book:\n";
        cout << "\nTitle of the book:";
        cin>>t;
        cout << "\nEnter Author's Name :";
        cin>>aut;
        cout << "\nNumber of copies:";
        cin >> cop;
        if (t== title  && (cop <= copies))
        {
            cout << "\nBook is available in store\nPrice = " << cop * price;
            copies -= cop;
        }
        else
        {
            cout << "Not available";
        }
    }
};

int main()
{
    books bk("Haruki Murakami","Norwegian Wood","Japan",990,1000,78000);
    bk.check();
    getch();
}