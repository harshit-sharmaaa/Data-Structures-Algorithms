#include <iostream>
using namespace std;

void PrintArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}

void BubbleSort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                swap(*(a + j), *(a + j + 1));
            }
        }
    }
}

int main()
{
    int a[] = {3, 6, 8, 1, 2, 9, 5};
    int n = 7;
    BubbleSort(a, n);
    PrintArray(a, n);
    return 0;
}