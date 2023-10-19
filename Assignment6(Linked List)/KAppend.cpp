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

// K append
void kAppend(Node *&head, Node *&tail, int n, int k)
{
    Node *lastHead = NULL;
    Node *lastTail = NULL;
    Node *firstHead = NULL;
    Node *firstTail = NULL;

    Node *current = head;

    for (int i = 0; i < n - k; i++)
    {
        insertAtEnd(firstHead, firstTail, current->data);
        current = current->next;
    }
    for (int i = n - k; i < n; i++)
    {
        insertAtEnd(lastHead, lastTail, current->data);
        current = current->next;
    }

    // joining first and last
    if (lastHead)
    {
        lastTail->next = firstHead;
        head = lastHead;
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
    int n, k;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertAtEnd(head, tail, value);
    }
    cin >> k;

    kAppend(head, tail, n, k);
    printLL(head);
    return 0;
}