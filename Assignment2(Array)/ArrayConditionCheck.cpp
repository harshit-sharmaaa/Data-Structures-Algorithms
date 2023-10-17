#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool condition;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] < a[k] && a[k] < a[j])
                {
                    condition = true;
                }
                else
                {
                    cout << 0;
                    return 0;
                }
            }
        }
    }
    cout << 1;
    return 0;
}