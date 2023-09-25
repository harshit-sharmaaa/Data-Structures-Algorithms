#include <iostream>
#include <cstring>
using namespace std;

bool permutation(char *a, char *a1)
{
    int freq[26] = {0};
    int current;
    for (int i = 0; a[i] != '\0'; i++)
    {
        current = int(a[i]) - 97;
        freq[current]++;
    }
    for (int i = 0; a1[i] != '\0'; i++)
    {
        current = int(a1[i]) - 97;
        freq[current]--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    char a[] = "abcdae";
    char a1[] = "baadec";
    cout << permutation(a, a1);
    return 0;
}