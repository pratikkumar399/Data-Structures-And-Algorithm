#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }

    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

// void bottomUpHeapify(int arr[], int n, int i)
// {
//     int parent = (i - 1) / 2;

//     if (parent >= 0)
//     {
//         if (arr[i] > arr[parent])
//         {
//             swap(arr[i], arr[parent]);
//             bottomUpHeapify(arr, n, parent);
//         }
//     }
// }

void heapsort(int arr[], int n)
{

    // extract element one by one
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// 15 10 4 3 2 5

// 5 10 4 3 2 |  15

// 10 5 4 3 2 | 15

// 2 5 4 3 | 10 15

// 2 3 4 5 10 15

void deleteRoot(int arr[], int &n)
{

    // get the last element
    int lastElement = arr[n - 1];

    arr[0] = lastElement; // replace the root with the last lastElement

    n = n - 1;
    heapify(arr, n, 0);
    // bottomUpHeapify(arr, n, n - 1);
}

void insertIntoHeap(int arr[], int &n, int key)
{
    // Insert the new element at the end
    n++;
    int i = n - 1;
    arr[i] = key;

    // Perform top-down heapify to restore the heap property
    while (i > 0)
    {
        int parent = (i - 1) / 2;
        if (arr[i] > arr[parent])
        {
            swap(arr[i], arr[parent]);
            i = parent;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {10, 5, 3, 2, 4};
    heapify(arr, sizeof(arr) / sizeof(int), 0);
    // int key = 15;

    int n = sizeof(arr) / sizeof(int);
    // insertIntoHeap(arr, n, key);
    // heapify(arr, n, key);

    heapsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}

// 10 5 3 2 4 15

// 10 5 15 2 4 3

//