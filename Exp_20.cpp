#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class bankaccount
{
    char name[30];
    int acntnum;
    char ac_type[20];
    float balance;

public:
    void assigndata();
    void deposite();
    void withdraw();
    void display();
};

void bankaccount::assigndata()
{
    float b;
    cout << "welcome to our bank:" << endl;
    cout << "You need to pay 300 Tk to open a bank account" << endl;
    cout << "If you want to open bankaccout press 1 otherwise press 2:" << endl;
    cout << endl;
    cout << "What is your option:" << endl;
    cin >> b;
    if (b == 1)
    {
        cout << "Enter the accout  name: " << endl;
        cin >> name;
        cout << "Enter the accout number: " << endl;
        cin >> acntnum;
        cout << "Enter the accout type: " << endl;
        cin >> ac_type;
        cout << "Enter your amount: " << endl;
        cin >> balance;
    }
}
void bankaccount::deposite()
{
    float c;
    cout << "Enter your amount: " << endl;
    cin >> c;
    balance = balance + c;
}

void bankaccount::withdraw()
{
    float w;
    cout << "Enter your amount which you want to withdraw: " << endl;
    cin >> w;
    if ((balance - w) < 300)
    {
        cout << "Sorry!! you can't withdraw..you must have more than 300 Tk in your account: " << endl;
    }
    else
    {
        balance = balance - w;
    }
}
void bankaccount::display()
{
    cout << "Name: " << name << endl;
    cout << "Account type: " << ac_type << endl;
    cout << "Account number: " << acntnum << endl;
    cout << "Balance: " << balance << endl;
}

int main()
{
    bankaccount ac1;
    int x = 1;
    while (x != 5)
    {
        cout << "press-1--to assign data" << endl;
        cout << "Press-2--to deposite" << endl;
        cout << "Press-3--to withdraw" << endl;
        cout << "Press-4--to display data" << endl;
        cout << "Press-5--to quit" << endl;
        cout << "Enter your option" << endl
             << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            ac1.assigndata();
            break;
        case 2:
            ac1.deposite();
            break;
        case 3:
            ac1.withdraw();
            break;
        case 4:
            ac1.display();
            break;
        case 5:
            break;
        default:
            cout << "Invalid search" << endl;
        }
    }
    return 0;
}