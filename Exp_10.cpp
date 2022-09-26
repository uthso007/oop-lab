#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    int total;
    return total = a + b;
}
int sum(int a, int b, int c)
{
    int sum;
    return sum = a + b + c;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << sum(a, b);
    cout << endl
         << sum(a, b, c) << endl;
}
