#include <iostream>
using namespace std;
int count = 0;
class test
{
public:
    test()
    {
        count++;
        cout << "Constructor Msg: Object number " << count << " is created.. " << endl;
    }
    ~test()
    {
        cout << "Destructor Msg: Object number " << count << " is distroyed.. " << endl;
        count--;
    }
};
int main()
{
    cout << "Inside the main block.." << endl;
    cout << "Creating the first object T1.." << endl;

    test T1;
    {
        cout << "Inside Block 1..." << endl;
        cout << "Creating two more object T2 and T3 " << endl;
        test T2, T3;
        cout << "Leaving the block 1" << endl;
    }
    cout << "Back inside the main block " << endl;
    return 0;
}