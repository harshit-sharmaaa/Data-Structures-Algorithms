#include <iostream>
using namespace std;

int Last7(int *a, int n, int i)
{

    if (i == 0)
    {
        return -1;
    }
    if (a[i] == 7)
    {
        return i;
    }
    return Last7(a, n, i - 1);
}

int main()
{
    int a[] = {1, 2, 3, 5, 7, 9};
    cout << Last7(a, 6, 5);

    return 0;
}