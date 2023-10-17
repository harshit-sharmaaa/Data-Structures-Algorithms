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

void insertAtFront(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *n = new node(d);
        head = tail = n;
    }
    else
    {
        node *n = new node(d);
        n->next = head;
        head = n;
    }
}

void insertAtEnd(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *n = new node(d);
        head = tail = n;
    }
    else
    {
        node *n = new node(d);
        tail->next = n;
        tail = n;
    }
}

int lengthLL(node *head)
{
    int count = 0;
    while (head != NULL)
    {

        head = head->next;
        count++;
    }
    return count;
}

void insertAtMiddle(node *&head, node *&tail, int d, int position)
{
    if (position >= lengthLL(head))
    {
        insertAtEnd(head, tail, d);
    }
    else if (position == 0)
    {
        insertAtFront(head, tail, d);
    }
    else
    {
        node *temp = head;
        for (int i = 1; i < position; i++)
        {
            temp = temp->next;
        }
        node *n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}

void deleteAtFront(node *&head, node *&tail)
{
    if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
    }
    else if (head == NULL)
    {
        return;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteAtEnd(node *&head, node *&tail)
{
    if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
    }
    else if (head == NULL)
    {
        return;
    }
    else
    {
        node *temp = head;
        for (int i = 1; i < lengthLL(head) - 1; i++)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}

deleteAtMid(node *&head, node *&tail, int position)
{
    if (position == 0)
    {
        deleteAtFront(head, tail);
    }
    else if (position < lengthLL(head))
    {
        node *temp = head;
        for (int i = 1; i < position; i++)
        {
            temp = temp->next;
        }

        node *t = temp->next;
        temp->next = t->next;
        delete t;
    }
}

void printLL(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{

    node *head = NULL;
    node *tail = NULL;
    // insertAtFront(head, tail, 5);
    // insertAtFront(head, tail, 4);
    // insertAtFront(head, tail, 3);
    // insertAtFront(head, tail, 2);
    // insertAtFront(head, tail, 1);

    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 1);

    insertAtMiddle(head, tail, 10, 3);
    insertAtMiddle(head, tail, 11, 10);
    insertAtMiddle(head, tail, 9, 0);

    deleteAtFront(head, tail);
    deleteAtEnd(head, tail);
    deleteAtMid(head, tail, 3);

    printLL(head);
    return 0;
}