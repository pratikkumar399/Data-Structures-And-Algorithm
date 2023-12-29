#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

// now from the child element find out its parent and compare them
void heapify(int arr[], int n, int i)
{
    // finding the parent
    int parent = (i - 1) / 2;

    // checking if the parent exists
    if (parent >= 0)
    {
        // For Max-Heap
        // If current node is greater than its parent
        // Swap both of them and call heapify again
        // for the parent
        if (arr[i] > arr[parent])
        {
            swap(arr[i], arr[parent]);
            heapify(arr, n, parent);
        }
    }
}

void heapsort(int arr[], int n)
{
    // build heap
    for (int i = 0; i < n; i++)
    {
        heapify(arr, n, i);
    }

    // extract element one by one
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// increase size by 1 and put the key at last
void insertNode(int arr[], int &n, int key)
{
    n = n + 1;
    arr[n - 1] = key;
    heapify(arr, n, n - 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{
    int arr[MAX] = {10, 5, 3, 2, 4};
    heapify(arr, 5, 0);

    int n = 5;
    int key = 15;

    insertNode(arr, n, key);

    printArray(arr, n);
    return 0;
}
