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
    int count;
    int MaxCount = 0;
    int MaxElements;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
            if (count > MaxCount)
            {
                MaxCount = count;
                MaxElements = a[i];
            }
        }
    }
    cout << MaxElements;

    return 0;
}