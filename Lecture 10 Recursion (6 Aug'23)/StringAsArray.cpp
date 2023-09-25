#include <iostream>
using namespace std;

int main()
{
    string s[5] = {
        "Hello",
        "Cat",
        "Kiwi"};
    for (int i = 0; i < 3; i++)
    {
        cout << s[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            cout << s[i][j] << "-";
        }
        cout << endl;
    }

    return 0;
}