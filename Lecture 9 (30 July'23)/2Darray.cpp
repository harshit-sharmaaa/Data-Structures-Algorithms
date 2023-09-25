#include <iostream>
using namespace std;
void input(int a[2][2])
{
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            cin >> a[r][c];
        }
    }
}
void print(int a[2][2])
{
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            cout << a[r][c] << ' ';
        }
        cout << endl;
    }
}
int main()
{
    int a[2][2];
    input(a);
    print(a);

    return 0;
}