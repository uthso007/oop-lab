#include <iostream>
using namespace std;
class math
{
    int sub;

public:
    math()
    {
        sub = 1;
    }
    math(int a)
    {
        sub = a;
    }
    math(math &obj)
    {
        cout << "Calling copy constructor" << endl;
        sub = obj.sub;
    }
    void display()
    {
        cout << "The value of a is " << sub << endl;
    }
};
int main()
{
    math c1(15), c2(10), c3;
    c1.display();
    c2.display();
    c3.display();
    math c4(c1);
    c4.display();
    math c5 = c4;
    c5.display();
    return 0;
}