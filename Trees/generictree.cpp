#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    vector<Node *> children;

    Node(int val)
    {
        data = val;
    }
};

void buildTree(Node *&root, vector<int> &arr)
{ // Pass root by reference
    stack<Node *> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == -1)
        {
            st.pop();
        }
        else
        {
            Node *t = new Node(arr[i]);

            if (!st.empty())
            {
                st.top()->children.push_back(t);
            }
            else
            {
                root = t;
            }
            st.push(t);
        }
    }
}

void display(Node *node)
{
    string str = to_string(node->data) + " -> ";
    for (auto it : node->children)
    {
        str += to_string(it->data) + ", ";
    }
    cout << str << endl;

    for (auto it : node->children)
    {
        display(it);
    }
}

void levelOrder(Node *node)
{
    queue<Node *> q;
    q.push(node);

    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();
        cout << t->data << " ";
        for (auto child : t->children)
        {
            q.push(child);
        }
    }
    cout << "." << endl;
}

// size of generic tree
int size(Node *node)
{
    int s = 0;
    for (auto child : node->children)
    {
        int cs = size(child);
        s += cs;
    }
    s = s + 1;
    return s;
}

// maximum in a generic tree
int maxi(Node *node)
{
    int m = INT_MIN;
    for (auto child : node->children)
    {
        int child_max = maxi(child);
        // updating the max value from the child nodes
        m = max(m, child_max);
    }
    // comparing the max value from the child nodes with the current node
    m = max(m, node->data);

    return m;
}

// calculate height based on edges
int height(Node *node)
{
    int h = -1;
    for (auto child : node->children)
    {
        int ch = height(child);
        h = max(h, ch);
    }
    h += 1;
    return h;
}

// pre post traversal

void traversal(Node *node)
{
    cout << "Node Pre " << node->data << endl;
    for (auto child : node->children)
    {
        // cout << "Edge Pre " << node->data << "--" << child->data << endl;
        traversal(child);
        // cout << "Edge Post " << node->data << "--" << child->data << endl;
    }
    // cout << "Node Post " << node->data << endl;
}

int main()
{

    vector<int> arr = {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110,
                       -1, -1, 90, -1, -1, 40, 100, -1, -1, -1};

    Node *root = nullptr;
    buildTree(root, arr); // Pass root by reference

    display(root);

    cout << size(root) << endl;
    cout << maxi(root) << endl;
    cout << height(root) << endl;
    traversal(root);

    return 0;
}
