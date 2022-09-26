#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    test(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    test t1(10, 20);
    t1.display();
    return 0;
}