#include <iostream>
using namespace std;

int main()
{
    string s[5] = {
        "Hello",
        "Cat",
        "hello world"};
    string largest = "";
    for (int i = 0; i < 3; i++)
    {
        if (s[i].size() > largest.size())
        {
            largest = s[i];
        }
    }
    cout << "largest: " << largest;

    return 0;
}