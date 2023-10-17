#include <iostream>
#include <cstring>
using namespace std;

string duplicates(char *a)
{
    string answer = "";
    int len = strlen(a);
    char current = a[0];
    answer += current;
    for (int i = 1; i < len; i++)
    {
        if (a[i] != current)
        {
            current = a[i];
            answer += current;
                }
    }
    return answer;
}

int main()
{

    char a[1000];
    cin.getline(a, 1000);
    cout << duplicates(a);

    return 0;
}