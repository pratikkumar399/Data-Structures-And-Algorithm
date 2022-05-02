#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int target, int arr[], int n)
{
    int start = -1; // arr[i] <= target
    int end = n;
    while (start + 1 < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] <= target)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    return start + 1;
}

int binarySearchleft(int target, int arr[], int n)
{
    int start = -1; // arr[i] <= target
    int end = n;
    while (start + 1 < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < target)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    return end + 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int k;
    cin >> k;
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        int ans = binarySearch(r, arr, n);
        int ans2 = binarySearchleft(l, arr, n);
        // cout << ans << " " << ans2 << endl;
        // cout<<ans2<<endl ;
        cout << ans - ans2 + 1 << " ";
    }
    return 0;
}