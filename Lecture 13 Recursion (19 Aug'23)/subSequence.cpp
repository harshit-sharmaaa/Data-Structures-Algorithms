#include <iostream>
#include <cstring>
using namespace std;

void subSequence(char *in, int i, char *out, int j)
{
    // base case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    // recursive caseṇ
    // 1)jab i'th character ko include nhi kia
    subSequence(in, i + 1, out, j);
    // 2)jab i'th char ko include kia
    out[j] = in[i];
    subSequence(in, i + 1, out, j + 1);
}

int main()
{
    char a[] = "abc";
    char out[100];
    subSequence(a, 0, out, 0);

    return 0;
}