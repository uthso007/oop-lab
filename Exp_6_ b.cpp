#include <iostream>
#include <math.h>
using namespace std;
#define accuracy 0.0001
int main()
{
    int n;
    float sum, n1, m;
    n = 1;
    sum = 0;
    int i = 1;
    for (;;)
    {

        n1 = float(1) / n;
        m = pow(n1, i);
        sum += m;
        if (m <= accuracy)
            break;
        n++;
        i++;
    }
    cout << sum << "\n";
    return 0;
}
