#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 1.11;
    char ch = 'A';

    cout << "&a : " << &a << endl;
    cout << "&b : " << &b << endl;
    cout << "&ch : " << &ch << endl;

    int arr[] = {1, 2, 3, 4, 5};

    cout << arr << endl;
    cout << "&arr[0] : " << &arr[0] << endl;

    int *ap = &a;
    cout << "&a : " << &a << endl;
    cout << "ap : " << ap << endl;
    return 0;
}