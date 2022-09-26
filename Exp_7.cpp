#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << " How many numbers do you want to calculate: " << endl;
    cin >> n;
    float x[n], sum = 0;
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        sum += x[i];
    }
    float mean, v, v1 = 0;
    mean = sum / n;
    for (int i = 0; i < n; i++)
    {
        v = x[i] - mean;
        v1 += pow(v, 2);
    }
    float variance, deviation;
    variance = v1 / n;
    deviation = sqrt(variance);
    cout << "Variance = " << variance << endl
         << "Standard deviation = " << deviation << endl;
    return 0;
}