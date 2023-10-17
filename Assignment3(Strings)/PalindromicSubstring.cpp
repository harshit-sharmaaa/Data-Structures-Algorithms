#include <iostream>
#include <cstring>
using namespace std;

bool palindromic(char *a, int i, int j)
{

    while (i < j)
    {
        if (a[i] != a[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int countPalindrome(char *a)
{
    int len = strlen(a);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (palindromic(a, i, j))
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    char a[1000];
    cin.getline(a, 1000);

    cout << countPalindrome(a);

    return 0;
}