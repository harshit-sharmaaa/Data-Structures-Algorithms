#include <iostream>
using namespace std;

string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void backwards(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << s[n % 10] << " ";
    backwards(n / 10);
}

int main()
{

    int n = 2048;
    backwards(n);

    return 0;
}