#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int sum, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == sum && (a[i] < a[j]) && (a[j] < a[k]) && (a[i] < a[k]))
                {
                    cout << a[i] << ", " << a[j] << " and " << a[k] << endl;
                }
            }
        }
    }
    return 0;
}