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
void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
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

int main()
{
    Node *head;
    Node *tail;
    head = tail = NULL;

    insertAtFront(head, tail, 1);
    insertAtFront(head, tail, 2);
    insertAtFront(head, tail, 3);
    insertAtFront(head, tail, 4);
    insertAtFront(head, tail, 5);

    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 5);

    printLL(head);

    return 0;
}