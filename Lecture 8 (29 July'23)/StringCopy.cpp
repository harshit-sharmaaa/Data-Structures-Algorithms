#include <iostream>
#include <cstring>
using namespace std;

void copyString(char *b, char *a, int len)
{

    for (int i = 0; i <= len; i++)
    {
        b[i] = a[i];
    }
}

int main()
{
    char a[100] = "Hello";
    char b[100];
    int len = strlen(a);
    copyString(b, a, len);
    cout << b;

    return 0;
}