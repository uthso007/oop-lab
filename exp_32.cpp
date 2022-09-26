#include <iostream>
using namespace std;
void salary(int &sal)
{
    sal += 100;
}
int main()
{
    int s;
    cout << "Enter the salary: " << endl;
    cin >> s;
    salary(s);
    cout << "The salary after the increment: " << s << endl;
    return 0;
}