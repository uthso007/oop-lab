#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void get_roll(int a)
    {
        roll = a;
    }
    void putroll();
};
void student::putroll()
{
    cout << "The roll is: " << roll << endl;
}
class test : public student
{
protected:
    float m1, m2;

public:
    void get_mark(float x, float y)
    {
        m1 = x;
        m2 = y;
    }

    void put_mark()
    {
        cout << "mark of the first sub: " << m1 << endl;
        cout << "mark of the 2nd sub: " << m2 << endl;
    }
};

class result : public test
{
protected:
    float total;

public:
    void get_total()
    {
        total = m1 + m2;
    }
    void puttotal();
};
void result::puttotal()
{
    cout << "Total mark is " << total << endl;
}

int main()
{
    result std1;
    std1.get_roll(1918032);
    std1.get_mark(22.5, 24.5);
    std1.putroll();
    std1.put_mark();
    std1.get_total();
    std1.puttotal();
    return 0;
}