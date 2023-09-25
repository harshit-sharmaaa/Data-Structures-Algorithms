#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    cout << "Enter rows and cols: ";
    int n, m, num = 1;
    cin >> n >> m;

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

    return 0;
}