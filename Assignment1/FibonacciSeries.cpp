#include <iostream>
using namespace std;

void fibonacci(int i, int *n1, int *n2, int *n3)
{

    for (int j = 1; j <= i; j++)
    {
        cout << *n1 << "\t";
        *n3 = *n1 + *n2;
        *n1 = *n2;
        *n2 = *n3;
    }
}
int main()
{
    int N;

    cin >> N;
    int n1 = 0;
    int *n1p = &n1;
    int n2 = 1;
    int *n2p = &n2;
    int n3 = n1 + n2;
    int *n3p = &n3;
    for (int i = 1; i <= N; i++)
    {
        fibonacci(i, n1p, n2p, n3p);
        cout << endl;
    }

    return 0;
}