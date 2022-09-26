#include <iostream>
using namespace std;
class number
{
    int a;
    int b;

public:
    number()
    {
        a = 0;
        b = 0;
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    number first;
    first.display();
    return 0;
}