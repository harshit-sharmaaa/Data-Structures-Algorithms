//  * * * * *
//  * *   * *
//  *       *
//  * *   * *
//  * * * * *
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = (n + 1) / 2;
    for (int i = 1; i <= mid; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        for (int j = 1; j <= mid - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        for (int k = 1; k < 2 * mid - 1; k = k + 2)
        {
            cout << " ";
        }
        cout << endl;
        for (int j = 1; j <= mid - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}