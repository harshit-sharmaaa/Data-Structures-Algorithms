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

// size of LL
int sizeLL(Node *head)
{
    int size = 0;
    while (head)
    {
        size++;
        head = head->next;
    }
    return size;
}

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

// insert at front
void insertAtFront(Node *&head, Node *&tail, int d)
{
    if (head)
    {
        Node *n = new Node(d);
        n->next = head;
        head = n;
    }
    else
    {
        Node *n = new Node(d);
        head = tail = n;
    }
}

// insert at middle
void insertAtMiddle(Node *&head, Node *&tail, int d, int pos)
{
    if (pos > sizeLL(head))
    {
        insertAtEnd(head, tail, d);
    }
    else if (pos == 0)
    {
        insertAtFront(head, tail, d);
    }
    else
    {
        Node *n = new Node(d);
        Node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
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

    // insertAtEnd(head, tail, 1);
    // insertAtEnd(head, tail, 2);
    // insertAtEnd(head, tail, 3);
    // insertAtEnd(head, tail, 4);

    insertAtFront(head, tail, 1);
    insertAtFront(head, tail, 2);
    insertAtFront(head, tail, 3);
    insertAtFront(head, tail, 4);

    insertAtMiddle(head, tail, 7, 2);

    printLL(head);

    return 0;
}