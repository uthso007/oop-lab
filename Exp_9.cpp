
#include <iostream>
using namespace std;
int sum(int a, int b, int c = 10, int d = 20)
{
    return (a + b + c + d);
}

int main()
{
    cout << sum(10, 15) << endl;

    cout << sum(10, 15, 25) << endl;

    cout << sum(10, 15, 25, 30) << endl;
    return 0;
}