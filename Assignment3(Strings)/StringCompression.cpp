#include <iostream>
#include <cstring>
using namespace std;

string compression(char *a)
{
    string k = "";
    int len = strlen(a);
    int i;
    int count = 1;
    for (i = 0; i < len; i++)
    {
        while (a[i + 1] == a[i] && i < len)
        {
            count++;
            i++;
        }
        k += a[i];
        k += to_string(count);
        count = 1;
    }

    return k;
}

int main()
{
    char a[1000];
    cin.getline(a, 1000);
    cout << compression(a);

    return 0;
    char c = 'b';
    cout << c + 1;
}