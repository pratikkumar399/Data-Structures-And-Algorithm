#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        long long ans = 0;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int minimum = arr[0];
        for (int i = 0; i < n; i++)
        {
            minimum = min(minimum, arr[i]);
        }

        ans = x / minimum + (x % minimum != 0);

        cout << max(n, ans) << endl;
    }

    return 0;
}