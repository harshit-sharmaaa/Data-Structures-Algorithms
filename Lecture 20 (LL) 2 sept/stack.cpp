#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

class stack
{
private:
    node *head;

public:
    stack()
    {
        head = NULL;
    }

    void push(int d)
    {
        // insert at front
        if (!head)
        {
            head = new node(d);
        }
        else
        {
            node *n = new node(d);
            n->next = head;
            head = n;
        }
    }

    void pop()
    {
        // delete at front
        if (head == NULL)
        {
            return;
        }
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    bool empty()
    {
        return head == NULL;
    }

    int top()
    {
        return head->data;
    }
};

void printStack(stack s)
{
    while (s.top() != '\0')
    {
        cout << s.top() << "-->";
        s.pop();
    }
    cout << "NULL";
}

int main()
{
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    printStack(s);

    return 0;
}