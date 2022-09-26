#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    float p[10] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    float r[10] = {0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.20};
    float t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float ci;
    cout << setw(5) << "n=1";
    for (int i = 2; i <= 10; i++)
        cout << setw(9) << "n=" << i;
    cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        cout << setw(-6) << "v=";
        for (int j = 0; j < 10; j++)
        {
            ci = p[i] * pow((1 + r[j]), t[j]);
            cout << fixed << setprecision(2) << ci << setw(10);
        }
        cout << endl;
    }

    return 0;
}