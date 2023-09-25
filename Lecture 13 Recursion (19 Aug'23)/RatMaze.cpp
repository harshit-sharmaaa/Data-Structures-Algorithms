#include <iostream>
#include <cstring>
using namespace std;

bool ratInMaze(char maze[][5], int sol[][10], int i, int j, int n, int m)
{
    // base case
    if (i == n - 1 && j == m - 1)
    {
        sol[i][j] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }
    // recursive case
    // 1)pehle right jaake dekho mil gll gya to theek hai
    if (j + 1 < m and maze[i + 1][j] != 'X')
    {
        bool kyaYehBaatSahiHai = ratInMaze(maze, sol, i, j + 1, n, m);
        if (kyaYehBaatSahiHai == true)
        {
            return true;
        }
    }
    // 2)ab down jake dekho , mil gya to sahi hai
    if (i + 1 < n and maze[i][j + 1] != 'X')
    {
        bool kyaYehBaatSahiHai = ratInMaze(maze, sol, i + 1, j, n, m);
        if (kyaYehBaatSahiHai == true)
        {
            return true;
        }
    }

    // 3)agar na right na down mila to peche jao
    sol[i][j] = 0;
    return false;
}

int main()
{
    int sol[10][10] = {0};
    char a[][5] = {
        "0000",
        "00XX",
        "0000",
        "XX00"};
    ratInMaze(a, sol, 0, 0, 4, 4);
    return 0;
}