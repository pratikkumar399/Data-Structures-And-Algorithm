#include <bits/stdc++.h>
using namespace std;

int binarySearch(int k, int high, int arr[])
{

    int low = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    int ans = binarySearch(k, n, arr);
    if (ans != -1)
    {
        cout << "element found at index := " << ans <<endl ;
    }
    else
    {
        cout << "element not found " << endl;
    }

    return 0;
}