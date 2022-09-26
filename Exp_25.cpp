#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void getval_a(int);
    int get_a();
};

class B : public A
{
    int b, c;

public:
    void getval_b(int);
    void add();
    void display();
};
void A::getval_a(int x)
{
    a = x;
}
int A::get_a()
{
    return a;
}

void B::getval_b(int x)
{
    b = x;
}
void B::add()
{
    c = get_a();
    c = c + b;
}
void B::display()
{
    cout << "Value of A is " << get_a() << endl;
    cout << "Value of B is " << b << endl;
    cout << "Value of c is " << c << endl;
}

int main()
{
    int a, b;
    B obj;
    cout << "Enter the value of A: ";
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;
    obj.getval_a(a);
    obj.getval_b(b);
    obj.add();
    obj.display();
    return 0;
}