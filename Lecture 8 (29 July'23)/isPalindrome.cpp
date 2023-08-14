#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *a)
{
    int i = 0;
    int len = strlen(a);
    int j = len - 1;
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

int main()
{
    char a[100];
    cin.getline(a, 100);
    cout << isPalindrome(a);

    return 0;
}