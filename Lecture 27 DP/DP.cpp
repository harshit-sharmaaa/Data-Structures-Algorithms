#include <iostream>
using namespace std;

int topDown(int n, int *dp)
{
    // base case
    if (n <= 1)
    {
        return dp[n] = n;
    }
    // recursive case
    if (dp[n] != -1)
        return dp[n];

    return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
}

int bottomUp(int n)
{
    int dp[1000];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i < 1000; i++)
    {
        dp[i] = dp[i - 1] + dp[1 - 2];
    }
    return dp[n];
}

int main()
{
    int dp[1000];
    for (int i = 2; i < 1000; i++)
    {
        dp[i] = -1;
    }

    cout << topDown(100, dp);
    cout << bottomUp(100);
    return 0;
}
