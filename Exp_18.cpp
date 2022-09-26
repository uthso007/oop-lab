#include <iostream>
using namespace std;

class employee
{
private:
    char name[30];
    int age;

public:
    void getdata(void);
    void putdata(void);
};

void employee::getdata(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void employee::putdata(void)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
const int sizes = 3;

int main()
{
    employee manager[sizes];
    for (int i = 0; i < sizes; i++)
    {
        cout << "Please give the information of the "
             << "manager " << i + 1 << endl;
        manager[i].getdata();
    }
    cout << endl
         << endl;
    for (int i = 0; i < sizes; i++)
    {
        cout << "Manager: " << i + 1 << endl;
        manager[i].putdata();
    }
    return 0;
}
