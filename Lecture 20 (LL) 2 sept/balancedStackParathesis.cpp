#include <iostream>
#include <stack>
using namespace std;

bool checkBalanced(char *a)
{
    stack<char> s;
    for (int i = 0; a[i] != '\0'; i++)
    {
        char ch = a[i];
        switch (ch)
        {
        case '(':
        case '{':
        case '[':
            s.push(ch);
            break;
        case ')':
            if (s.top() == '(')
            {
                s.pop();
                break;
            }
        case ']':
            if (s.top() == '[')
            {
                s.pop();
                break;
            }
        case '}':
            if (s.top() == '{')
            {
                s.pop();
                break;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char s[] = "(7+{4+3})";

    if (checkBalanced(s))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "NOT Balanced";
    }

    return 0;
}