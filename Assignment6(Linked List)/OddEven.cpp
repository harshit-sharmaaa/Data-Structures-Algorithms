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

void oddEven(Node *&head, Node *&tail, int n)
{
    Node *oddHead = NULL;
    Node *oddTail = NULL;
    Node *evenHead = NULL;
    Node *evenTail = NULL;

    Node *current = head;

    for (int i = 0; i < n; i++)
    {
        if (current->data % 2 != 0)
        {
            insertAtEnd(oddHead, oddTail, current->data);
        }
        else
        {
            insertAtEnd(evenHead, evenTail, current->data);
        }
        current = current->next;
    }
    // merging odd and even

    if (oddHead)
    {
        oddTail->next = evenHead;
        head = oddHead;
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

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertAtEnd(head, tail, value);
    }

    oddEven(head, tail, n);
    printLL(head);

    return 0;
}