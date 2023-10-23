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

// LL to integer
int Integer(Node *head, Node *tail, int n)
{
    if (n != 0)
    {
        int multiple = 1;
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            multiple *= 10;
        }

        while (multiple >= 1)
        {
            head->data *= multiple;
            sum += head->data;
            head = head->next;
            multiple /= 10;
        }
        return sum;
    }
    else
    {
        return 0;
    }
}

void Sum(Node *&head, Node *&tail, int sum)
{
    while (sum > 0)
    {
        int lastDigit;
        lastDigit = sum % 10;
        insertAtFront(head, tail, lastDigit);
        sum /= 10;
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
    Node *firstHead = NULL;
    Node *firstTail = NULL;
    Node *secondHead = NULL;
    Node *secondTail = NULL;
    Node *head = NULL;
    Node *tail = NULL;
    int n1, n2;

    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
    {
        int value;
        cin >> value;
        insertAtEnd(firstHead, firstTail, value);
    }

    for (int i = 0; i < n2; i++)
    {
        int value;
        cin >> value;
        insertAtEnd(secondHead, secondTail, value);
    }

    Sum(head, tail, Integer(firstHead, firstTail, n1) + Integer(secondHead, secondTail, n2));
    printLL(head);

    return 0;
}