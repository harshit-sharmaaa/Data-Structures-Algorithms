#include <iostream>
#include <cstring>
using namespace std;

char maxFreq(char *a)
{
    int len = strlen(a);
    int maxCount = -1;
    int count = 0;
    char Freq;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            Freq = a[i];
        }
        count = 0;
    }
    return Freq;
}

int main()
{

    char a[1000];
    cin.getline(a, 1000);
    cout << maxFreq(a);

    return 0;
}