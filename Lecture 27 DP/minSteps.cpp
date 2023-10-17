#include <iostream>
#include <climits>
using namespace std;

int minSteps(int n, int *dp)
{
    // base case
    if (n == 1)
        return dp[n] = 0;

    if (dp[n] != -1)
        return dp[n];

    // recursive case
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;

    if (n % 3 == 0)
        op1 = minSteps(n / 3, dp);
    if (n % 2 == 0)
        op2 = minSteps(n / 2, dp);
    op3 = minSteps(n - 1, dp);

    return dp[n] = min(op1, min(op2, op3)) + 1;
}

int main()
{
    int dp[10000];
    for (int i = 0; i < 10000; i++)
    {
        dp[i] = -1;
    }

    cout << minSteps(10, dp);

    return 0;
}
