#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int reverseda = 0, reversedb = 0;
        while (a > 0)
        {
            reverseda = reverseda * 10 + a % 10;
            a /= 10;
        }
        while (b > 0)
        {
            reversedb = reversedb * 10 + b % 10;
            b /= 10;
        }
        int sum = reverseda + reversedb;
        int reversedsum = 0;
        while (sum > 0)
        {
            reversedsum = reversedsum * 10 + sum % 10;
            sum /= 10;
        }
        cout << reversedsum << endl;
    }

    return 0;
}