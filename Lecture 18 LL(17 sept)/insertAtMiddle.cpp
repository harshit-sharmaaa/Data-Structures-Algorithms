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
void insertAtFront(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *n = new Node(data);
        head = tail = n;
    }
    else
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }
}

void insertAtEnd(Node *&head, Node *&tail, int data)
{
    if (head != NULL)
    {
        Node *n = new Node(data);
        tail->next = n;
        tail = n;
    }
    else
    {
        Node *n = new Node(data);
        head = tail = n;
    }
}

int sizeLL(Node *head)
{
    int size = 0;
    while (head)
    {
        head = head->next;
        size++;
    }
    return size;
}

void insertAtMiddle(Node *&head, Node *&tail, int data, int pos)
{
    if (pos >= sizeLL(head))
    {
        insertAtEnd(head, tail, data);
    }
    else if (pos == 0)
    {
        insertAtFront(head, tail, data);
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}

int main()
{
    Node *head;
    Node *tail;
    head = tail = NULL;

    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 5);

    printLL(head);

    insertAtMiddle(head, tail, 10, 3);
    insertAtMiddle(head, tail, 11, 10);
    insertAtMiddle(head, tail, 9, 0);

    printLL(head);

    return 0;
}