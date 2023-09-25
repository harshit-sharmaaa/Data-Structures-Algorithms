#include <iostream>
using namespace std;

int main()
{
    string s;
    s.push_back('H');
    s.push_back('e');
    s.push_back('l');
    s.push_back('l');
    s.push_back('o');

    cout << s << endl;

    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();

    cout << s << endl;

    string x = "hello";
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << "-";
    }
    cout << endl;

    string y;
    getline(cin, y);
    cout << y;

    return 0;
}