#include <iostream>
using namespace std;

int binarySearch(int target, int arr[], int n)
{
    int start = -1;  // arr[i] <= target
    int end = n;
    while (start +1 < end)
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
        int ans = binarySearch(query[i], arr, n);
        cout << ans << endl;
    }
    return 0;
}