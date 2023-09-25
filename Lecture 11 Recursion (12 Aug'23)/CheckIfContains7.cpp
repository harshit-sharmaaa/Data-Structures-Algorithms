#include <iostream>
using namespace std;

bool check(int *a, int n, int i)
{
    if (i == n)
    {
        return false;
    }
    if (a[i] == 7)
    {
        return true;
    }
    return check(a, n, i + 1);
}

int main()
{
    int a[] = {1, 2, 3, 8, 5, 9};
    cout << check(a, 6, 0);

    return 0;
}