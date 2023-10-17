#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1, sumOdd = 0, sumEven = 0, lastDigit;
    int m = n;
    while (m > 0)
    {
        lastDigit = m % 10;
        m = m / 10;
        if (i % 2 == 0)
        {
            sumEven += lastDigit;
        }
        else
        {
            sumOdd += lastDigit;
        }
        i++;
    }
    cout << sumOdd << endl
         << sumEven;
    return 0;
}