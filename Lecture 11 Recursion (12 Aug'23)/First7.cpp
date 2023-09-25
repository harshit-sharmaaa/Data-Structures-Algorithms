#include <iostream>
using namespace std;

int First7(int *a, int n, int i)
{

    if (i == n)
    {
        return -1;
    }
    if (a[i] == 7)
    {
        return i;
    }
    return First7(a, n, i + 1);
}

int main()
{
    int a[] = {1, 2, 3, 7, 5, 9};
    cout << First7(a, 6, 0);

    return 0;
}