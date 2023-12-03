// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
class BST
{
public:
    int data;
    BST *left;
    BST *right;

    BST(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

BST *insert(int data, BST *root)
{

    if (root == NULL)
    {
        root = new BST(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = insert(data, root->left);
    }
    else
    {
        root->right = insert(data, root->right);
    }

    return root;
}

BST *insertIterative(int data, BST *root)
{
    if (root == NULL)
    {
        root = new BST(data);
        return root;
    }

    BST *temp = root;
    while (temp != NULL)
    {
        // if (data == temp->data)
        // {
        //     // If the data is equal, handle duplicates (you can decide on your strategy)
        //     // For simplicity, let's increment a count variable.
        //     temp->count++;
        //     break;
        // }
        // else
        if (data < temp->data)
        {
            if (temp->left == NULL)
            {
                temp->left = new BST(data);
                break;
            }
            temp = temp->left;
        }
        else
        {
            if (temp->right == NULL)
            {
                temp->right = new BST(data);
                break;
            }
            temp = temp->right;
        }
    }
    return root;
}

void inOrder(BST *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{

    BST *root = nullptr;
    char choice;

    do
    {
        int data;
        cout << "Enter a value to insert into the BST: ";
        cin >> data;

        root = insert(data, root);

        cout << "Do you want to insert another node? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Inorder traversal of BST: " << endl;
    inOrder(root);
    // display(root);
    /*

            50
           /  \
          25   75
         /  \
        12  37
           /
          30

    */

    return 0;
}