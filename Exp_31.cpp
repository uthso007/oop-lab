#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    while (number <= 1000)
    {
        int sum = 0;
        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
            {
                sum += i;
            }
        }

        if (sum == number)
        {
            cout << number << " is perfect" << endl;
        }
        number++;
    }

    return 0;
}