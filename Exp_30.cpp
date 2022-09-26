#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string a[5];
    cout << "Please enter the students name: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    float arr[5][4];
    float total = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the mark of student no: " << i + 1 << endl;
        float sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        arr[i][3] = sum / 3;
        total += arr[i][3];
    }
    cout << setw(8) << "Name" << setw(18) << "Subject 1" << setw(17) << "Subject 2" << setw(17) << "subject 3" << setw(13) << "Average" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setw(8) << a[i];
        for (int j = 0; j < 4; j++)
        {
            cout << setw(16) << arr[i][j];
        }
        cout << endl;
    }
    cout << "The average of all student averages is " << total / 5 << endl;
}