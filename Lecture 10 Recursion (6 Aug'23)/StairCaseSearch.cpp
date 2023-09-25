#include <iostream>
using namespace std;

int main()
{
    int a[][4] = {
        {1, 2, 3, 4},
        {3, 9, 15, 19},
        {10, 12, 17, 20},
        {16, 18, 22, 25}};

    int r = 0;
    int c = 3;
    int key = 100;
    int flag = 0;
    while (r < 4 and c >= 0)
    {
        if (key > a[r][c])
        {
            r++;
        }
        else if (key < a[r][c])
        {
            c--;
        }
        else
        {
            cout << "found at row:" << r << "and column:" << ' ' << c;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "not found";
    }
    return 0;
}