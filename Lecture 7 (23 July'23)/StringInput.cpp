#include <iostream>
using namespace std;

int main()
{
    char a[1000];
    // cin >> a
    // Delimiter - kis character tak input lena hai
    // agar delimiter nhi dea to by default is \n
    // cin.getline(arrayName,size,delimiter)
    cin.getline(a, 1000);
    cout << a << endl;
    return 0;
}