#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// insert at end
void insertAtEnd(Node *&head, Node *&tail, int d)
{
    Node *n = new Node(d);
    if (head)
    {
        tail->next = n;
        tail = n;
    }
    else
    {
        head = tail = n;
    }
}

void partition(Node *&head, Node *&tail, int n, int x)
{
    Node *lessHead = NULL;
    Node *lessTail = NULL;
    Node *moreHead = NULL;
    Node *moreTail = NULL;

    Node *current = head;

    for (int i = 0; i < n; i++)
    {

        if (current->data < x)
        {
            insertAtEnd(lessHead, lessTail, current->data);
        }
        else
        {
            insertAtEnd(moreHead, moreTail, current->data);
        }
        current = current->next;
    }
    // merging odd and even

    if (lessHead)
    {
        lessTail->next = moreHead;
        head = lessHead;
    }
}

// print LL
void printLL(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertAtEnd(head, tail, value);
    }

    partition(head, tail, n, x);
    printLL(head);

    return 0;
}