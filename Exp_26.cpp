#include <iostream>
using namespace std;
class A
{
protected:
    int m;

public:
    void get_m(int);
};
void A::get_m(int x)
{
    m = x;
}

class B
{
protected:
    int n;

public:
    void get_n(int);
};
void B::get_n(int x)
{
    n = x;
}
class c : public A, public B
{
    int c;

public:
    void add();
    void display();
};
void c::add()
{
    c = m + n;
}
void c::display()
{
    cout << "Value of m: " << m << endl;
    cout << "Value of n: " << n << endl;
    cout << "Addition of m and n: " << c << endl;
}

int main()
{
    c obj;
    obj.get_m(100);
    obj.get_n(200);
    obj.add();
    obj.display();
    return 0;
}