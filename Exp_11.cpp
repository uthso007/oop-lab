#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the vaule of the m and n " << endl;
    cin >> m >> n;
    int mat[m][n];
    cout << "Enter the vaules: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "matrix[" << i << "]"
                 << "[" << j << "]"
                 << " =";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}