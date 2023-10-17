#include <iostream>
using namespace std;
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

class node
{
public:
    int data;
    node *left, *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *createTree()
{
    node *root = NULL;
    int data;
    cin >> data;

    if (data == -1)
    {
        return root;
    }
    else
    {
        root = new node(data);
        root->left = createTree();
        root->right = createTree();
    }
    return root;
}

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int countNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}

int main()
{
    node *root = NULL;
    root = createTree();

    cout << "PRE: ";
    preOrder(root);
    cout << endl;
    cout << "IN: ";
    inOrder(root);
    cout << endl;
    cout << "POST: ";
    postOrder(root);

    cout << endl;
    cout << "Total Nodes: " << countNodes(root);

    return 0;
}