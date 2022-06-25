#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void printPostOrder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printPostOrder(node->left);
    printPostOrder(node->right);
    cout << node->data << " ";
}
void printInOrder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printInOrder(node->left);
    cout << node->data << " ";
    printInOrder(node->right);
}
void printPreOrder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    printPreOrder(node->left);
    printPreOrder(node->right);
}

void level__Order__Traversal__BT(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.size())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *p = q.front();
            q.pop();
            if (p->left != NULL)
                q.push(p->left);
            if (p->right != NULL)
                q.push(p->right);
            cout << p->data << " ";
        }
    }
}

void pre_order_traversal_iteative_Version(Node *r)
{

    stack<Node *> s;
    s.push(r);
    while (s.size())
    {
        Node *temp = s.top();
        s.pop();
        cout << temp->data << " ";

        if (temp->right != NULL)
            s.push(temp->right);
        if (temp->left != NULL)
            s.push(temp->left);
    }
}

void insert(struct Node *temp, int key)
{
    queue<struct Node *> q;

    q.push(temp);
    // do level order traversal until we find an empty place to

    while (!q.empty())
    {
        struct Node *temp = q.front();
        q.pop();

        if (!temp->left)
        {
            temp->left = new Node(key);
            break;
        }
        else
        {
            q.push(temp->left);
        }

        if (!temp->right)
        {
            temp->right = new Node(key);
            break;
        }
        else
        {
            q.push(temp->right);
        }
    }
}

int main()
{

    struct Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);

    cout << "Preorder traversal of binary tree is \n";
    printPreOrder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInOrder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    insert(root, 9);
    printPostOrder(root);
    cout << endl;

    return 0;
}