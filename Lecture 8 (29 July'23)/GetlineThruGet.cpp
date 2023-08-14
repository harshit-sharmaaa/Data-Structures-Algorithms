#include <iostream>
using namespace std;

void inputString(char *a, char delimiter = '\n')
{

    char ch = cin.get();
    int i = 0;
    while (ch != delimiter)
    {
        a[i] = ch;
        ch = cin.get();

        i++;
    }
    a[i] = '\0';
}
int main()
{
    char a[100];
    inputString(a);
    cout << a;

    return 0;
}