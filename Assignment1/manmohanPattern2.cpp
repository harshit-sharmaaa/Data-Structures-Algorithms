// 1
// 11
// 202
// 3003
// 40004

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << 1 << endl;
    for (int i = 2; i <= n; i++)
    {
        cout << i - 1;
        for (int j = 2; j < i; j++)
        {
            cout << 0;
        }
        cout << i - 1;
        cout << endl;
    }
    return 0;
}