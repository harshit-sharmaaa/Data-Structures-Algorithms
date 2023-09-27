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

// reverse thru recursion
void reverseLLrec(Node *&head, Node *p = NULL)
{
    if (head == NULL)
    {
        return;
    }
    Node *n;
    n = head->next;
    head->next = p;
    reverseLLrec(n, head);
}

Node *mid(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *s = head;
    Node *f = head->next;

    while (f != NULL && f->next != NULL)
    {
        f = f->next->next;
        s = s->next;
    }
    return s;
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

    // reverseLL(head, tail);
    reverseLLrec(head);

    printLL(head);

    Node *ans = mid(head);
    cout << ans->data;

    return 0;
}