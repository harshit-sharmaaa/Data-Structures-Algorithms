#include <iostream>
using namespace std;

bool isSorted(int *a, int n)
{
    if (n == 1)
    {
        return true;
    }
    if (a[0] < a[1] && isSorted(a + 1, n - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isSorted2(int *a, int n)
{
    if (n == 1)
    {
        return true;
    }
    if (a[n - 2] < a[n - 1] && isSorted2(a, n - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 5;
    int a[] = {1, 2, 3, 4, 5};
    cout << isSorted(a, n) << endl;
    cout << isSorted2(a, n) << endl;

    return 0;
}