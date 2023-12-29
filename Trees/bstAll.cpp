// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// time complexity of insertion :
Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }

    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

Node *deleteNode(Node *root, int data)
{
    if (root == NULL)
        return NULL;

    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

bool search(Node *root, int target)
{
    if (root == NULL)
        return false;
    Node *temp = root;

    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return true;
        }
        else if (temp->data > target)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}

void print(Node *root)
{
    if (root == NULL)
        return;

    print(root->left);
    print(root->right);
    cout << root->data << " " << endl;
}

/* जय भवानी । हर हर महादेव। */
int main()
{

    Node *root = NULL;
    root = insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 4);
    insert(root, 2);
    insert(root, 7);

    print(root);

    return 0;
}