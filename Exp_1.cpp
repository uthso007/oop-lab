#include <iostream>
using namespace std;
int m = 10;
int main()
{
again:
    int m = 20;
    {
        int k;
        k = m;
        int m = 30;
        cout << "We are in the inner block" << endl;
        cout << "k = " << k << endl;
        cout << "m = " << m << endl;
        cout << "::m = " << ::m << endl;
    }
    cout << "We are in the outer block" << endl;
    cout << "m = " << m << endl;
    cout << "::m = " << ::m << endl;
    cout << "What is your choice: " << endl;
    int x;
    cin >> x;
    if (x == 1)
    {
        goto again;
    }
    return 0;
}