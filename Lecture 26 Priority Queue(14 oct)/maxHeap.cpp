#include <iostream>
#include <queue>
using namespace std;

// by default max heap he hota hai

int main()
{
    priority_queue<int> q;
    // or priority_queue<int, vector<int>, less<int>> q; we dont need to make the class cmp in this
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