#include <iostream>
using namespace std;

int length(char *a)
{
    char ch;
    int i = 0;
    ch = a[i];
    while (ch != '\0')
    {
        i++;
        ch = a[i];
    }
    cout << i;
}

int main()
{

    char a[100];
    cin.getline(a, 100);
    length(a);

    return 0;
}