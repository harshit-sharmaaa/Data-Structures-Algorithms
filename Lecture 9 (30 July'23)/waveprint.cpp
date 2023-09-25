#include <iostream>
using namespace std;

void waveprint(int a[][100], int n, int m)
{
    for (int i = 0; i < m; i++) // for col
    {
        // for rows
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[j][i] << ',';
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[j][i] << ',';
            }
        }
    }
}

void print(int a[][100], int n, int m)
{
    int num = 1;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            a[r][c] = num;
            num++;
            cout << a[r][c] << ' ';
        }
        cout << endl;
    }
}

int main()
{

    int a[100][100];
    cout << "Enter rows and cols: ";
    int n, m, num = 1;
    cin >> n >> m;

    print(a, n, m);

    waveprint(a, n, m);

    return 0;
}