#include <iostream>
using namespace std;
class A
{
private:
    int a;
    // int b;
public:
    void get_aval(int x)
    {
        a = x;
    }
    int get_a()
    {
        return a;
    }
};

class B : public A
{
    int b;
    int c;

public:
    void get_bval(int y)
    {
        b = y;
    }
    void add();
    void display();
};

void B::add()
{
    c = get_a();
    // cout << "The value of c after the a value taken: " << c << endl;
    c = c + b;
    // cout << "value " << c << endl;
}

void B::display()
{
    cout << "The value of a " << get_a() << endl;
    cout << "The value of b " << b << endl;
    cout << "Sum is " << c << endl;
}

int main()
{
    B obj;
    obj.get_aval(2);
    obj.get_bval(5);
    obj.add();
    obj.display();
    return 0;
}