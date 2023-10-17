#include <iostream>
#include <cstring>
using namespace std;

void Read(char *a)
{
    int len = strlen(a);
    int i = 0;
    while (i < len)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            cout << a[i];
            i++;
        }
        while (a[i] >= 'a' && a[i] <= 'z')
        {
            cout << a[i];
            i++;
        }
        cout << endl;
    }
}

int main()
{

    char a[1000];
    cin.getline(a, 1000);
    Read(a);

    return 0;
}