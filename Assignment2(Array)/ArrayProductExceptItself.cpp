#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        long long int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                product *= a[j];
            }
        }
        cout << product << " ";
    }
    return 0;
}