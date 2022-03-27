#include<bits/stdc++.h>
using namespace std ;

void insertionSort(int n, int arr[])
{
    // Write your code here.
    for (int i = 1; i < n; i++)
    {
        int value = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > value)
        {

            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        insertionSort(n, arr);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}