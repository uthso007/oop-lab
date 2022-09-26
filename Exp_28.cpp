#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << "Display base " << endl;
    }
    virtual void show()
    {
        cout << "Show base " << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Display derived" << endl;
    }
    void show()
    {
        cout << "Show derived " << endl;
    }
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    cout << "bptr points to base " << endl;
    bptr = &B;
    bptr->display();
    bptr->show();
    cout << "bpte points to Derived " << endl;
    bptr = &D;
    bptr->display();
    bptr->show();
    return 0;
}