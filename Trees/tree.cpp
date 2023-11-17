#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main()
{
    // making the root node as 1
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);

    /*
            1     ------> root node   and ancestors of the previous node and also level 0
          /   \
         2     3  ------> parent  node nd ancestors of the previous node   also level 1
        / \   / \
       4   5  7  6   ------> leaf node and children node // a node with no child is called leaf node // level 2


    */

    return 0;
}