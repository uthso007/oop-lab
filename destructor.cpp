#include <iostream>
using namespace std;
class xm
{
    static int count;

public:
    xm()
    {
        ++count;
        cout << "constructor called for object no: " << count << endl;
    }
    ~xm()
    {

        cout << count << " no object distroyed.." << endl;
        --count;
    }
};
int xm::count;
int main()
{
    cout << "Inside the main" << endl;
    xm t1;
    {
        cout << "Enter the block:" << endl;
        xm t2, t3;
    }
    cout << "Back to the main" << endl;
    return 0;
}