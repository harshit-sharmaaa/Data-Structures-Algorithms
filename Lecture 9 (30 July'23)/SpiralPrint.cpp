#include <iostream>
using namespace std;

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

void spiralprint(int a[][100], int n, int m)
{
    int sr = 0, er = n - 1, sc = 0, ec = m - 1;
    while (sr <= er and sc <= ec)
    {
        // 1.printing sr from sc->ec
        for (int col = sc; col <= ec; col++)
        {
            cout << a[sr][col] << ' ';
        }
        sr++;
        // 2.printing ec from sr to er
        for (int row = sr; row <= er; row++)
        {
            cout << a[row][ec] << ' ';
        }
        ec--;
        // 3.print er from ec to sc
        if (sr < er)
        {
            for (int col = ec; col >= sc; col--)
            {
                cout << a[er][col] << ' ';
            }
        }
        er--;

        // 4. print sc from er to sr
        if (sc < ec)
        {
            for (int row = er; row >= sr; row--)
            {
                cout << a[row][sc] << ' ';
            }
        }
        sc++;
    }
}

int main()
{
    // spiral print
    int a[100][100];
    cout << "Enter rows and cols: ";
    int n, m, num = 1;
    cin >> n >> m;

    print(a, n, m);

    spiralprint(a, n, m);
    return 0;
}