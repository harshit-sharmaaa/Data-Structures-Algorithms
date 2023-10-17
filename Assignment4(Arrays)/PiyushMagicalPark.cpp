#include <iostream>
using namespace std;

int MagicalPark(char a[][100], int n, int m, int S)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (a[row][col] == '.')
            {
                S -= 2;
            }
            else if (a[row][col] == '*')
            {
                S += 5;
            }
            else if (a[row][col] == '#')
            {
                break;
            }

            if (col != m - 1)
            {
                S--;
            }
        }
    }
    return S;
}

int main()
{
    char a[100][100];
    int N, M, K, S;
    cin >> N >> M >> K >> S;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }

    S = MagicalPark(a, N, M, S);
    if (S >= K)
    {
        cout << "Yes" << endl;
        cout << S;
    }
    else
    {
        cout << "No";
    }

    return 0;
}