#include <iostream>
using namespace std;

bool binarySearch(int target, int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return true;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{   

    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int arr[n];
    int query[k];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin >> query[i];
        bool ans = binarySearch(query[i], arr, n);
        if (ans == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}