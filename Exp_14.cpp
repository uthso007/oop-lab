#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void)
    {
        cout << "Enter a binary number: ";
        cin >> s;
    }
    void cheak(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0' && s[i] != '1')
            {
                cout << "The binary number is not right.The program will quit" << endl;
                exit(0);
            }
        }
    }

    void ones(void)
    {
        cheak();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
            }
            else
                s[i] = '0';
        }
    }
    void display(void)
    {
        cout << "The 1's complement of the above binary number is : " << s;
    }
};
int main()
{
    binary b;
    b.read();
    b.ones();
    b.display();
    return 0;
}