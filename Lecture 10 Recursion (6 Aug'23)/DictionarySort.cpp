#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s[5] = {
        "Hello",
        "World",
        "Cat",
        "Coding",
        "Blocks"};
    int n = 5;
    sort(s, s + n);
    for (int i = 0; i < 5; i++)
    {
        cout << s[i];
        cout << endl;
    }

    return 0;
}