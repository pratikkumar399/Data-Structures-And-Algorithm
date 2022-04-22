#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int target, int k)
{
    int s = 0;
    int end = k - 1;
    int ans = 0 ;

    while (s < end)
    {
        int mid = s + (s - end) / 2;
        if (target == mid)
        {
            ans = mid;
        }
        else if (target > mid)
        {
            s = mid + 1;
        }
        else if (target < mid)
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, s, k;
        cin >> n >> s >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = binary_search(arr, s, k);

    }

    return 0;
}