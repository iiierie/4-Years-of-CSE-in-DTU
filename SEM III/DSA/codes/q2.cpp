#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class bank
{
    int account_no;
    char Name[100], account_type[100];
    float bal;

public:
    bank(int acc_no, char *name, char *acc_type, float balance)
    {
        account_no = acc_no;
        strcpy(Name, name);
        strcpy(account_type, acc_type);
        bal = balance;
    }

    void deposit() 
    {
        int dep_amt;
        cout << "\n Enter Deposit Amount = ";
        cin >> dep_amt;
        bal += dep_amt;
    }
    void withdraw()
    {
        int wit_amt;
        cout << "\n Enter Withdraw Amount = ";
        cin >> wit_amt;
        if (wit_amt > bal)
            cout << "\n Cannot Withdraw Amount";
        bal -= wit_amt;
    }
    void display()
    {
        cout << "\n ----------------------";
        cout << "\n Accout No. : " << account_no;
        cout << "\n Name : " << Name;
        cout << "\n Account Type : " << account_type;
        cout << "\n Balance : " << bal;
    }
};

int main()
{
    int acc_no;
    char name[100], acc_type[100];
    float balance;
    cout << "\n Enter Details: \n";
    cout << "-----------------------";
    cout << "\n Accout No. ";
    cin >> acc_no;
    cout << "\n Name : ";
    cin >> name;
    cout << "\n Account Type : ";
    cin >> acc_type;
    cout << "\n Balance : ";
    cin >> balance;

    bank b1(acc_no, name, acc_type, balance);
    b1.deposit();                             
    b1.withdraw();                          
    b1.display();                             
    return 0;
}