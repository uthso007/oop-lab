#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    void geta(int a)
    {
        x = a;
    }
};
class B
{
protected:
    int y;

public:
    void getb(int b)
    {
        y = b;
    }
};
class c : public A, public B
{
    int c;

public:
    void add();
    void display();
};
void c::add()
{
    c = x + y;
}
void c::display()
{
    cout << "The first value is " << x << endl;
    cout << "The 2nd value is " << y << endl;
    cout << "The sum is " << c << endl;
}

int main()
{
    c k;
    k.geta(100);
    k.getb(200);
    k.add();
    k.display();
    return 0;
}