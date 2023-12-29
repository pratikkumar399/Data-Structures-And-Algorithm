// lets build a binary search tree using an array

#include <bits/stdc++.h>
using namespace std;

// arr[100] = INT_MIN;
// arr[0]
// i = parent
// left child = 2 I + 1 ;
// right child = 2 I + 2;

class Node
{
public:
    int arr[100];
    int size;

    Node(int data)
    {
        for (int i = 0; i < 100; i++)
        {
            arr[i] = INT_MIN;
        }
    }

    void insert(int key)
    {
        if (size >= 100)
        {
            cout << "Overflow" << endl;
            return;
        }
        if (size == 0)
        {
            arr[0] = key;
            size++;
            return;
        }
        else
        {
            insertRecursively(0, key);
        }
    }

    void insertRecursively(int i, int key)
    {
        if (arr[i] == INT_MIN)
        {
            arr[i] = key;
            size++;
            return;
        }
        if (key < arr[i])
        {
            // go to left
            insertRecursively(2 * i + 1, key);
        }
        else
        {
            // go to right
            insertRecursively(2 * i + 2, key);
        }
    }

    void inorderRecursively(int i)
    {
        if (arr[i] == INT_MIN)
        {
            return;
        }
        inorderRecursively(2 * i + 1);
        cout << arr[i] << " " << endl;
        inorderRecursively(2 * i + 2);
    }

    void inorder()
    {
        inorderRecursively(0);
    }
};

int main()
{
    Node root(10);
    root.insert(5);
    root.insert(15);
    root.insert(2);
    root.insert(7);
    root.insert(12);

    root.inorder();

    return 0;
}