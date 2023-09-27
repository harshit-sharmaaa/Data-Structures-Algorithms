#include <iostream>
using namespace std;

class Vector
{
public:
    int *a;
    int s, cap;

    Vector(int n = 1)
    {
        a = new int[n];
        s = 0;
        cap = n;
    }

    void push_back(int data)
    {
        if (s == cap)
        {
            int *olda = a;
            int oldcap = cap;
            cap *= 2;
            a = new int[cap];
            for (int i = 0; i < oldcap; i++)
            {
                a[i] = olda[i];
            }
            delete[] olda;
        }
        a[s] = data;
        s++;
    }
    int pop_back()
    {
        if (s > 0)
        {
            s--;
        }
    }
    bool empty()
    {
        return s == 1;
    }
    int capacity()
    {
        return cap;
    }
    int size()
    {
        return s;
    }
    int operator[](int i)
    {
        return a[i];
    }
};

int main()
{

    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    return 0;
}