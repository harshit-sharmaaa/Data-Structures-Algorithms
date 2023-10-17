#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    int n = N;
    int n1 = N;
    int lastDigit;
    int sum = 0;
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            count++;
        }
        n = n / 10;
    }
    while (n1 > 0)
    {
        lastDigit = n1 % 10;
        sum += pow(lastDigit, count);
        n1 = n1 / 10;
    }
    if (sum == N)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}