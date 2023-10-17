#include <iostream>
#include <cstring>
using namespace std;

void check(char *a)
{
    int i = 0;
    int len = strlen(a);
    int j = len - 1;
    int k = 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            cout << "false";
            k = 0;
        }
        i++;
        j--;
    }
    if (k)
    {
        cout << "true";
    }
}

int main()
{
    char a[100];
    cin.getline(a, 100);
    check(a);

    return 0;
}