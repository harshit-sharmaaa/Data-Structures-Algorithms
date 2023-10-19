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

// reverse LL
void reverseLL(Node *&head, Node *&tail)
{
    Node *c = head;
    Node *p = NULL;
    Node *n;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    swap(head, tail);
}

int findKthElement(Node *head, Node *tail, int k)
{
    Node *temp = head;
    for (int i = 1; i < k; i++)
    {
        temp = temp->next;
    }
    return temp->data;
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
    int k;
    int value;
    cin >> value;
    insertAtEnd(head, tail, value);
    while (value != -1)
    {
        cin >> value;
        if (value != -1)
        {
            insertAtEnd(head, tail, value);
        }
    }

    reverseLL(head, tail);

    cin >> k;

    cout << findKthElement(head, tail, k);
    return 0;
}