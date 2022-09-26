#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main()
{
    point p1(2, 3);
    point p2(5, 6);
    cout << "Point p1 = ";
    p1.display();
    cout << "Point p2 = ";
    p2.display();
    return 0;
}