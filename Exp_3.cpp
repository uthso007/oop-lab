#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 15;
    cout << "Before swaping: " << endl
         << "a = " << a << endl
         << "b = " << b << endl;
    swap(a, b);
    cout << "After swaping: " << endl
         << "a = " << a << endl
         << "b = " << b << endl;
    return 0;
}