#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
    return (a + b);
}
int main()
{
    int x, y;
    cout << "Enter the vaule of x and y :" << endl;
    cin >> x >> y;
    cout << "The sum of the two numbers is " << sum(x, y);
    return 0;
}