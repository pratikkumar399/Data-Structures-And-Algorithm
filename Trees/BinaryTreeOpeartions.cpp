#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

// void inOrder(TreeNode *root)
// {
//     if (root == NULL)
//         return;
//     inOrder(root->left);
//     cout << root->val << " ";
//     inOrder(root->right);
// }

void inOrder(TreeNode *root, vector<int> &ans)
{

    if (root == NULL)
        return;
    inOrder(root->left, ans);
    ans.push_back(root->val);
    inOrder(root->right, ans);
}

vector<int> inOrder_Iterative(TreeNode *root)
{
    vector<int> inorder;
    TreeNode *node = root;
    stack<TreeNode *> st;
    while (true)
    {
        if (node != NULL)
        {

            st.push(node);
            node = node->left;
        }

        else
        {
            if (st.empty() == true)
                break;
            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;
        }
    }
    return inorder;
}

vector<int> preOrderTraversal_Iterative(TreeNode *root)
{
    vector<int> preorder;

    if (root == NULL)
        return preorder;
    stack<TreeNode *> st;
    st.push(root);

    while (!st.empty())
    {
        root = st.top();
        st.pop();
        preorder.push_back(root->val);
        if (root->right != NULL)
            st.push(root->right);
        if (root->left != NULL)
            st.push(root->left);
    }
    return preorder;
}

int widthOfBinaryTree(TreeNode *root)
{

    if (root == NULL)
        return 0;

    // so basically what we need to do when we are finding the height of  a binary tree is that we need to find the reght height of the binary
    //  tree  and then we can find the height of the left tree and then return the max of them while considering the root also that is why we add 1 to
    // the return value

    int leftHeight = widthOfBinaryTree(root->left);
    int rightHeight = widthOfBinaryTree(root->right);

    return max(leftHeight, leftHeight) + 1;
}

bool isSymmetric_bfs_iterative(TreeNode *root)
{
    if (root == NULL)
        return true;
    queue<pair<TreeNode *, TreeNode *>> q;
    q.push(make_pair(root->left, root->right));
    while (!q.empty())
    {
        pair<TreeNode *, TreeNode *> p = q.front();
        q.pop();
        if (!p.first && !p.second)
            continue;
        if (!p.first || !p.second)
            return false;
        if (p.first->val != p.second->val)
            return false;
        q.push(make_pair(p.first->left, p.second->right));
        q.push(make_pair(p.first->right, p.second->left));
    }
    return true;
}

// Function to delete the deppest TreeNode in the binary TreeNode

void deleteeppestTreeNode(TreeNode *root, TreeNode *d_TreeNode)
{
    queue<TreeNode *> q;
    q.push(root);

    // Again doing level order traversal until the last TreeNode
    TreeNode *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp->right)
        {
            if (temp->right == d_TreeNode)
            {
                temp->right = NULL;
                delete (d_TreeNode);
                return;
            }
            else
            {
                q.push(temp->right);
            }
        }
        if (temp->left)
        {
            if (temp->left == d_TreeNode)
            {
                temp->left = NULL;
                delete (d_TreeNode);
                return;
            }
            else
            {
                q.push(temp->left);
            }
        }
    }
}

void deletion(TreeNode *root, int key)
{
    queue<TreeNode *> q;
    q.push(root);
    TreeNode *sentinel;
    TreeNode *key_TreeNode = NULL;

    while (!q.empty())
    {
        sentinel = q.front();
        q.pop();
        if (sentinel->val == key)
            key_TreeNode = sentinel;
        if (sentinel->left)
            q.push(sentinel->left);
        if (sentinel->right)
            q.push(sentinel->right);
    }
    int x = sentinel->val;
    deleteeppestTreeNode(root, sentinel);
    key_TreeNode->val = x;
}

void rightView(TreeNode *root, vector<int> &ans, int level, int &maxLevel)
{

    if (root == NULL)
        return;
    if (maxLevel < level)
    {
        ans.push_back(root->val);
        maxLevel = level;
    }
    rightView(root->right, ans, level + 1, maxLevel);
    rightView(root->left, ans, level + 1, maxLevel);
}
vector<int> rightSideView(TreeNode *root)
{
    vector<int> ans;
    int maxLevel = 0;
    rightView(root, ans, 1, maxLevel);
    return ans;
}

void topView(TreeNode *root, int hori_dist, int level, map<int, pair<int, int>> m)
{
    if (root == NULL)
        return;

    if (m.find(hori_dist) == m.end() || level < m[hori_dist].second)
    {
        m[hori_dist] = {root->val, level};
    }
    topView(root->left, hori_dist - 1, level + 1, m);
    topView(root->right, hori_dist + 1, level + 1, m);
}

vector<int> topView(TreeNode *root)
{
    // Your code here
    vector<int> ans;
    if (root == NULL)
        return {};
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    map<int, int> mp;
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        TreeNode *node = it.first;
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

void bottomview(TreeNode *root, int distance, int level, map<int, pair<int, int>> &m)
{
    if (root == NULL)
        return;

    if (level >= m[distance].second)
    {
        m[distance] = {root->val, level};
    }
    bottomview(root->left, distance - 1, level + 1, m);
    bottomview(root->right, distance + 1, level + 1, m);
}

vector<int> bottomView(TreeNode *root)
{
    // Your Code Here
    vector<int> ans;
    map<int, pair<int, int>> mp;
    bottomview(root, 0, 0, mp);
    for (auto it : mp)
    {
        ans.push_back(it.second.first);
    }
    return ans;
}

int main()
{
    //              1
    //            2   3
    //          4  6 7  9
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(2);
    // root->right->right = new TreeNode(3);
    // root->left->right = new TreeNode(4);

    // cout << "Inorder traversal of the TreeNode is : ";

    vector<int> ans;
    // inOrder(root, ans);

    // deletion(root, 2);
    // inOrder(root);

    // vector<int> ans = rightSideView(root);
    // for (auto it : ans)
    // {
    //     cout << it << " ";
    // }
    cout << "If the TreeNode is symmetric or not" << endl;
    // isSymmetric(root);

    return 0;
}