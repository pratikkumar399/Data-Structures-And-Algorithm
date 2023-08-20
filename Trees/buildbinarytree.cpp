#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int val = 0;

    Node(int val)
    {
        left = nullptr;
        right = nullptr;
        this->val = val;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the value : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return nullptr;
    }

    cout << "Enter the value that you want to enter in the left of : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the value that you want to enter in the right : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

class BinaryTree
{
public:
    Node *root;
    BinaryTree()
    {
        root = nullptr;
    }

    void insert(int val)
    {
        if (root == nullptr)
        {
            root = new Node(val);
            return;
        }
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            auto top = q.front();
            q.pop();

            if (top->left == nullptr)
            {
                top->left = new Node(val);
                return;
            }
            else if (top->right == nullptr)
            {
                top->right = new Node(val);
                return;
            }
            else
            {
                q.push(top->left);
                q.push(top->right);
            }
        }
    }

    void levelorderTraversal(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        q.push(nullptr);

        while (!q.empty())
        {
            auto front = q.front();

            q.pop();

            if (front == nullptr)
            {
                cout << endl;
                if (!q.empty())
                {
                    q.push(nullptr);
                }
            }
            else
            {
                cout << front->val << " ";
                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }
        }
    }
};

void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        auto front = q.front();

        q.pop();

        if (front == nullptr)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << front->val << " ";
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
    }
}

vector<vector<int>> zigzagLevelOrder(Node *root)
{
    vector<vector<int>> ans;
    if (root == nullptr)
        return ans;

    queue<Node *> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            Node *front = q.front();
            q.pop();

            if (leftToRight)
            {
                level.push_back(front->val);
            }
            else
            {
                level.insert(level.begin(), front->val);
            }

            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
        }

        ans.push_back(level);
        leftToRight = !leftToRight; // Toggle the direction for the next level
    }

    return ans;
}

// check if both the trees are same or not
bool sameTree(Node *p, Node *q)
{
    if (p == nullptr || q == nullptr)
        return false;
    if (p == nullptr && q == nullptr)
        return true;
    if (p->val != q->val)
        return false;

    return sameTree(p->left, q->left) && sameTree(p->right, q->right);
}

// checking for symmetric tree
bool isSymmetric(Node *p, Node *q)
{
    if (p == nullptr || q == nullptr)
        return false;
    if (p->val != q->val)
        return false;
    if (p == nullptr && q == nullptr)
        return true;
    return isSymmetric(p->left, q->right) && (p->right, q->left);
}

int main()
{
    // BinaryTree tree;
    // tree.insert(1);
    // tree.insert(2);
    // tree.insert(3);
    // tree.insert(4);
    // tree.insert(5);
    // tree.insert(6);
    // tree.insert(7);

    // tree.levelorderTraversal(tree.root);

    Node *root = nullptr;
    root = buildTree(root);

    // levelorderTraversal(root);
    vector<vector<int>> level_order = zigzagLevelOrder(root);

    for (auto it : level_order)
    {
        for (auto i : it)
        {
            cout << i << " " << endl;
        }
    }

    return 0;
}
