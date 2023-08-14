#include <iostream>
#include <cstring>
using namespace std;

void apppendStrings(char *a, char *b, char *c)
{
    int totalLength = strlen(a) + strlen(b);
    strcpy(c, a);

    for (int j = strlen(a); j <= totalLength; j++)
    {
        c[j] = b[j - strlen(a)];
    }
}

int main()
{

    char a[100], b[100], c[100];

    cin.getline(a, 100);
    cin.getline(b, 100);

    apppendStrings(a, b, c);

    cout << c;
    return 0;
}