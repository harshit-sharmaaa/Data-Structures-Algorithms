#include <iostream>
#include <cstring>
using namespace std;

string diffASCII(char *a)
{
    string converted = "";
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        converted += a[i];
        if (i < len - 1)
        {
            converted += to_string(int(a[i + 1] - a[i]));
        }
    }
    return converted;
}

int main()
{
    char a[1000];
    cin.getline(a, 1000);
    cout << diffASCII(a);

    return 0;
}