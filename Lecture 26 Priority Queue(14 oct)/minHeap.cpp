#include <iostream>
#include <queue>
using namespace std;

class cmp
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    priority_queue<int, vector<int>, cmp> q;
    // or priority_queue<int, vector<int>, greater<int>> q; we dont need to make the class cmp in this
    // but we need to #include <functional>

    q.push(1);
    q.push(10);
    q.push(2);
    q.push(5);
    q.push(4);
    q.push(3);

    while (!q.empty())
    {
        cout << q.top();
        q.pop();
    }

    return 0;
}