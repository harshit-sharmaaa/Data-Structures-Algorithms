#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;
    int a[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < column; j++)
    {
        if (j % 2 != 0)
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << a[i][j] << ", ";
            }
        }
        else
        {
            for (int i = 0; i < row; i++)
            {
                cout << a[i][j] << ", ";
            }
        }
    }

    cout << "END";

    return 0;
}