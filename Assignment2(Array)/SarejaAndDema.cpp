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
    int sareja = 0;
    int dima = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sareja += a[i];
        }
        else
        {
            dima += a[i];
        }
    }
    cout << sareja << " " << dima;
    return 0;
}