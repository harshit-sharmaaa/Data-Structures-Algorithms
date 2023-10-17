#include <iostream>
using namespace std;

void print(int a[][100], int n, int m)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i > j)
            {
                cout << "0"
                     << " ";
            }
            else
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int a[100][100];
    int row, column;
    cin >> row;
    column = row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }

    print(a, row, column);

    return 0;
}