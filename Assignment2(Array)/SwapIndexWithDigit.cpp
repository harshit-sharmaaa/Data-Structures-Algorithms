#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    int b[100];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}