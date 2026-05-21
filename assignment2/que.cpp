/*1: Convert account class using cin and cout*/

#include <iostream>
using namespace std;

class Account
{
private:
    int accNo;
    string name;
    float balance;

public:
    
    void accept()
    {
        cout << "Enter Account Number : ";
        cin >> accNo;

        cin.ignore(); 

        cout << "Enter Account Holder Name : ";
        getline(cin, name);

        cout << "Enter Balance : ";
        cin >> balance;
    }

    
    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Name           : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    Account a1;

    a1.accept();
    a1.display();

    return 0;
}

