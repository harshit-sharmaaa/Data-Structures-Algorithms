#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    int first, last;
    bool firstDone = false;
    bool atleastOne = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target && (not firstDone))
        {
            first = i;
            firstDone = true;
            atleastOne = true;
        }
        if (a[i] == target && (firstDone))
        {
            last = i;
        }
    }
    if (atleastOne)
    {
        cout << first << " " << last;
    }
    else
    {
        cout << "-1 -1" << endl;
    }

    return 0;
}