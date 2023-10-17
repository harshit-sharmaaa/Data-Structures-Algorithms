#include <iostream>
using namespace std;

void spiralPrint(int a[][100], int n, int m)
{
    int sr = 0, er = n - 1, sc = 0, ec = m - 1;

    while (sr <= er and sc <= ec)
    {
        // printing sc from sr->er
        for (int row = sr; row <= er; row++)
        {
            cout << a[row][sc] << ',' << " ";
        }
        sc++;
        // printing er from sc->ec
        for (int col = sc; col <= ec; col++)
        {
            cout << a[er][col] << ',' << " ";
        }
        er--;
        // printing ec from er->sr
        if (sc <= ec)
        {
            for (int row = er; row >= sr; row--)
            {
                cout << a[row][ec] << ',' << " ";
            }
        }

        ec--;
        // printing er from ec->sc
        if (sr <= sr)
        {
            for (int col = ec; col >= sc; col--)
            {
                cout << a[sr][col] << ',' << " ";
            }
        }
        sr++;
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

    spiralPrint(a, row, column);
    cout << "END";
    return 0;
}