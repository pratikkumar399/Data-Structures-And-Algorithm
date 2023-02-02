// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int data;
    Tree *left;
    Tree *right;

    Tree(int data, Tree *left, Tree *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

// A pair class for making pairs of the tree and their state

// class Pair
// {
// public:
//     Tree *tree;
//     int state;

//     Pair(Tree *tree, int state)
//     {
//         this->tree = tree;
//         this->state = state;
//     }
// };

void display(Tree *root)
{
    if (root == NULL)
        return;

    string str = "";
    str += (root->left) ? '.' : root->left->data;
    str += "<-" + root->data;
    str += "->";
    str += (root->right) ? '.' : root->right->data;

    cout << str << endl;
    display(root->left);
    display(root->right);
}

/* जय भवानी । हर हर महादेव। */
int main()
{
    vector<int> arr = {50, 25, 12, NULL, NULL, 37, 30, NULL, NULL, NULL, 75, 62, NULL, 70, NULL, NULL, 87, NULL, NULL};
    stack<pair<Tree *, int>> st;
    Tree *root = new Tree(arr[0], NULL, NULL);
    st.push({root, 1});
    int index = 0;
    while (st.size() > 0)
    {
        pair<Tree *, int> rp = st.top();
        if (rp.second == 1)
        {
            index++;
            if (arr[index] != NULL)
            {
                rp.first->left = new Tree(arr[index], NULL, NULL);
                pair<Tree *, int> lp({rp.first->left, 1});
                st.push(lp);
            }
            else
            {
                rp.first->left = NULL;
            }

            rp.second++;
        }
        else if (rp.second == 2)
        {
            index++;
            if (arr[index] != NULL)
            {
                rp.first->right = new Tree(arr[index], NULL, NULL);
                pair<Tree *, int> rrp({rp.first->right, 1});
                st.push(rrp);
            }
            else
            {
                rp.first->right = NULL;
            }

            rp.second++;
        }
        else
        {
            st.pop();
        }
    }

    display(root);
    return 0;
}