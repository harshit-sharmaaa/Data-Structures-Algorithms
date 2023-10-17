#include <iostream>
#include <cstring>
using namespace std;

string conversion(char *a)
{
    string converted = "";
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            converted += a[i] + 1;
        }
        else
        {
            converted += a[i] - 1;
        }
    }
    return converted;
}

int main()
{
    char a[1000];
    cin.getline(a, 1000);
    cout << conversion(a);

    return 0;
}