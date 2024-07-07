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
        // checking if the first node is a null pointer or not
        if (root == nullptr)
        {
            // if it is a null pointer then we will create a new node and assign it to the root
            root = new Node(val);
            return;
        }
        // traverse the tree and insert the node at the first available position
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            // taking the front element of the queue
            auto top = q.front();
            q.pop();
            // checking if the left or the right child of the node is a null pointer or not
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
            // if the left and the right child of the node is not a null pointer then we will push the left and the right child of the node in the queue -> this will help us to traverse the tree
            else
            {
                q.push(top->left);
                q.push(top->right);
            }
        }
    }
};

void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    // pushing the root node in the queue to start the traversal
    q.push(root);
    // Pushing a nullptr to indicate the end of the first level
    q.push(nullptr);

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();

        if (front == nullptr)
        {
            // A nullptr indicates the end of a level, so we print a new line
            cout << endl;
            if (!q.empty())
            {
                // If there are more nodes in the queue, push another nullptr to
                // separate the next level.
                q.push(nullptr);
            }
        }
        else
        {
            // If the front node is not nullptr, print its value
            cout << front->val << " ";
            // Enqueue the left and right child nodes if they exist
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
    }
}


vector<vector<int>> levelOrder(Node* root){
    if(root == nullptr) return {{}};
    vector<vector<int>> treeLevels;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int>ans;
       
        int size = q.size();
        for(int i = 0 ; i < size; i++){
            auto top = q.front();
            q.pop();
            if(top->left) q.push(top->left);
            if(top->right) q.push(top->right);
            ans.push_back(top->val);
        }
        treeLevels.push_back(ans);
     }

     return treeLevels;
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

vector<int> topView(Node *root)
{
    // Your code here
    vector<int> ans;
    if (root == NULL)
        return {};
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    map<int, int> mp;
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        Node *node = it.first;
        int line = it.second;
        if (mp.count(line) == 0)
            mp[line] = node->val;

        if (node->left != NULL)
        {
            q.push({node->left, line - 1});
        }
        if (node->right != NULL)
        {
            q.push({node->right, line + 1});
        }
    }

    for (auto it : mp)
    {
        ans.push_back(it.second);
    }

    return ans;
}

int main()
{
    BinaryTree tree;
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
    // tree.insert();
    levelorderTraversal(root);
    // vector<vector<int>> level_order = zigzagLevelOrder(root);

    // for (auto it : level_order)
    // {
    //     for (auto i : it)
    //     {
    //         cout << i << " " << endl;
    //     }
    // }

    return 0;
}
