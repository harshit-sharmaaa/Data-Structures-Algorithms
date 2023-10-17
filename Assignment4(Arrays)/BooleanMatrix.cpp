#include <iostream>
using namespace std;

void booleanMatrix(int a[][100], int n, int m)
{
    int b[100][100];
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (a[row][col] == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    b[row][i] = 1;
                }
                for (int i = 0; i < n; i++)
                {
                    b[i][col] = 1;
                }
            }
            else
            {
                b[row][col] = a[row][col];
            }
        }
    }

    // copying b in a
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

void print(int a[][100], int n, int m)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[100][100];
    int row, column;
    cin >> row >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }

    booleanMatrix(a, row, column);
    return 0;
}