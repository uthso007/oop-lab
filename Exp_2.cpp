#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int basic = 950;
    int allowance = 95;
    int total = 1045;
    cout << "Basic" << setw(10) << basic << endl
         << "Allowance" << setw(6) << allowance << endl
         << "Total" << setw(10) << total << endl;
    return 0;
}