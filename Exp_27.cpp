#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void get_roll(int);
    void put_roll();
};
void student::get_roll(int x)
{
    roll = x;
}

void student::put_roll()
{
    cout << "Roll number: " << roll << endl;
}
class test : public student
{
protected:
    float m1, m2;

public:
    void get_marks(float, float);
    void put_marks();
};
void test::get_marks(float x, float y)
{
    m1 = x;
    m2 = y;
}
void test::put_marks()
{
    cout << "Marks in sub1: " << m1 << endl;
    cout << "Marks in sub2: " << m2 << endl;
}
class result : public test
{
    float total;

public:
    void display();
};
void result::display()
{
    total = m1 + m2;
    put_roll();
    put_marks();
    cout << "Total: " << total << endl;
};
int main()
{
    result obj;
    obj.get_roll(101);
    obj.get_marks(53.3, 70.1);
    obj.display();
    return 0;
}