#include <iostream>
using namespace std;

void RotateImage(int a[][100], int n)
{
    for (int col = n - 1; col >= 0; col--)
    {
        for (int row = 0; row < n; row++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int a[100][100];
    int n, x;
    cin >> n;

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> a[r][c];
        }
    }

    RotateImage(a, n);

    return 0;
}
