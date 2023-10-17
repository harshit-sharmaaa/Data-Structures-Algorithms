// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i == mid)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else if (i == 1)
        {
            cout << "*";
            for (int j = 2; j < mid; j++)
            {
                cout << " ";
            }
            for (int j = mid; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else if (i == n)
        {
            for (int j = 1; j <= mid; j++)
            {
                cout << "*";
            }
            for (int j = mid + 1; j < n; j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        else if (i < mid)
        {
            cout << "*";
            for (int j = 2; j < mid; j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        else
        {
            for (int j = 1; j < mid; j++)
            {
                cout << " ";
            }
            cout << "*";
            for (int j = mid + 1; j < n; j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
    return 0;
}