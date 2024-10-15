#include <iostream>

using namespace std;

int main()
{
    int pin;
    int password = 1234;
    int count = 0;
    int enter;
    double deposit = 0.0;
    double balance = 0.0;
    double withdraw = 0.0;
    bool IsTrue = true;
    do
    {
        cout<<"Welcome to Mr L Sithole"<<endl;
        cout<<"Enter your pin"<<endl;
        cin>>pin;
        if(pin == password)
        {
            do
            {
                cout<<"Wellcome to Mr L Sithole"<<endl;
            cout<<"1. Deposit"<<endl;
            cout<<"2. Withdraw"<<endl;
            cout<<"3. Balance"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Choose an option......"<<endl;
            cin>>enter;

            switch(enter)
            {
            case 1:
                cout<<"Deposit amount:"<<endl;
                cin>>deposit;
                balance = balance + deposit;
                break;
            case 2:
                if(balance <= 0)
                {
                    cout<<"deposit funds"<<endl;
                }
                else
                {
                    cout<<"Withdraw amount:"<<endl;
                    cin>>withdraw;
                    balance = balance - withdraw;
                }
                break;
            case 3:
                cout<<"Current balance R"<< balance <<endl;
                break;
            case 4:
                cout<<"Have an amazing day"<<endl;
                IsTrue = false;
                break;
            }
            }while(IsTrue !=false);

        }
        else
        {
             count ++;
            if (count == 3)
                IsTrue = false;
            else
                cout<<"Wrong pin!";
        }
    }
    while(IsTrue != false);

    return 0;
}
