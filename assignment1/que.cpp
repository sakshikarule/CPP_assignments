/*Question 1:
Define a struct in C for bank account information details
struct members
	name,
	acountnumber,
	acounttype,  [saving/loan/ppf/nps]
	balance  [minimun balance = 1000]
functions
	AcceptData()
	Deposit()
	Withdraw()
	Display()
in main function test the functionality by using menu driven code */




#include<iostream>
using namespace std;

class Bank
{
    char name[20];
    int accno;
    char type[20];
    float balance;

public:

    void AcceptData()
    {
        cout<<"Enter Name : ";
        cin>>name;

        cout<<"Enter Account Number : ";
        cin>>accno;

        cout<<"Enter Account Type : ";
        cin>>type;

        do
        {
            cout<<"Enter Balance (minimum 1000) : ";
            cin>>balance;

        }while(balance < 1000);
    }

    void Deposit()
    {
        float amount;

        cout<<"Enter Deposit Amount : ";
        cin>>amount;

        balance = balance + amount;

        cout<<"Amount Deposited Successfully\n";
    }

    void Withdraw()
    {
        float amount;

        cout<<"Enter Withdraw Amount : ";
        cin>>amount;

        if(balance - amount >= 1000)
        {
            balance = balance - amount;
            cout<<"Withdrawal Successful\n";
        }
        else
        {
            cout<<"Minimum Balance should be 1000\n";
        }
    }

    void Display()
    {
        cout<<"\n----- Account Details -----\n";

        cout<<"Name : "<<name<<endl;
        cout<<"Account Number : "<<accno<<endl;
        cout<<"Account Type : "<<type<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};

int main()
{
    Bank b;
    int choice;

    do
    {
        cout<<"\n1.Accept Data";
        cout<<"\n2.Deposit";
        cout<<"\n3.Withdraw";
        cout<<"\n4.Display";
        cout<<"\n5.Exit";

        cout<<"\nEnter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                b.AcceptData();
                break;

            case 2:
                b.Deposit();
                break;

            case 3:
                b.Withdraw();
                break;

            case 4:
                b.Display();
                break;

            case 5:
                cout<<"Program Ended";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice != 5);

    return 0;
}
