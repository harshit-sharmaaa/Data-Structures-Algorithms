#include <iostream>
using namespace std;

int searchMatric(int a[][100], int n, int m, int x)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            if (a[r][c] == x)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int a[100][100];
    int n, m, x;
    cin >> n >> m;

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cin >> a[r][c];
        }
    }
    cin >> x;

    cout << searchMatric(a, n, m, x);

    return 0;
}