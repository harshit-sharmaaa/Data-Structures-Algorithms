#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100] = "World";
    char b[100] = "Hello ";
    int j;
    for (int i = strlen(b), j = 0; j < strlen(a); i++, j++)
    {
        b[i] = a[j];
    }
    cout << b << endl;

    return 0;
}