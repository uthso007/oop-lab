#include <iostream>
#include <math.h>
using namespace std;
#define accuracy 0.000128
long int fac(int n)
{
    if (n <= 1)
        return 1;
    else

        return n * fac(n - 1);
}

int main()
{

    float y, y1, x, fx;
    int n = 1;
    int m;
    const float pi = 3.1416;
    cout << " Enter the value of angle in terms of degree: ";
    cin >> x;
    if (x < 0)

        x = x * (-1);
    x = (pi / 180) * x;

    fx = 1;

    m = 2;

    float y2;

    long int h;

    for (;;)

    {

        h = fac(m);

        int factor = pow(-1, n);

        y1 = pow(x, m);

        y2 = (y1 / h) * factor;

        fx += y2;

        if (y1 / h <= accuracy)

            break;

        m = m + 2;

        n++;
    }

    cout << fx << "\n";
}