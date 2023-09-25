#include <iostream>
using namespace std;

int main()
{

    int a[100][100];
    cout << "Enter rows and cols: ";
    int n, m, num = 1;
    cin >> n >> m;

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            a[r][c] = num;
            num++;
            cout << a[r][c] << ' ';
        }
        cout << endl;
    }
    int key, r, c;
    int found = 0;
    cout << "Enter key: ";
    cin >> key;
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            if (a[r][c] == key)
            {
                cout << "Index: " << r << ' ' << c << endl;
                found = 1;
                break;
            }
        }
    }
    if (found)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}