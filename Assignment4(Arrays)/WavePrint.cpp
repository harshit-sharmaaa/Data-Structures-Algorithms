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

    for (int i = 0; i < row; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = column - 1; j >= 0; j--)
            {
                cout << a[i][j] << ", ";
            }
        }
        else
        {
            for (int j = 0; j < column; j++)
            {
                cout << a[i][j] << ", ";
            }
        }
    }

    cout << "END";

    return 0;
}