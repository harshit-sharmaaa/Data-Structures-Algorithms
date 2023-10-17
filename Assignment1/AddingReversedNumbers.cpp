#include <iostream>
using namespace std;

int reverse(int a)
{
    int lastDigit, reversedNum = 0;
    while (a > 0)
    {
        lastDigit = a % 10;
        a = a / 10;
        reversedNum = reversedNum * 10 + lastDigit;
    }
    return reversedNum;
}

int reverseAdd(int a, int b)
{
    int sum, reverseSum;
    sum = reverse(a) + reverse(b);
    reverseSum = reverse(sum);
    return reverseSum;
}

int main()
{
    int n, num1, num2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num1;
        cin >> num2;

        cout << reverseAdd(num1, num2) << endl;
    }

    return 0;
}