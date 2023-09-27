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

Node *merge(Node *a, Node *b)
{
    // base case
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    // recursive case
    Node *nH;
    if (a->data < b->data)
    {
        nH = a;
        nH->next = merge(a->next, b);
    }
    else
    {
        nH = b;
        nH->next = merge(a, b->next);
    }
    return nH;
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
    Node *head, *head1;
    Node *tail, *tail1;
    head = tail = NULL;

    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 7);
    insertAtEnd(head, tail, 9);

    printLL(head);

    insertAtEnd(head1, tail1, 2);
    insertAtEnd(head1, tail1, 4);
    insertAtEnd(head1, tail1, 6);
    insertAtEnd(head1, tail1, 8);

    printLL(head1);

    merge(head, head1);

    printLL(head);
    printLL(head1);

    return 0;
}