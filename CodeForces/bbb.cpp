// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        if (n == 1)
        {
            int x = arr[0] - 0;
            int y = k - arr[0];
            int maxi = max(x, 2 * y);
            cout << maxi << endl;
            continue;
        }

        int maxi = arr[0] - 0;
        for (int i = 1; i < n; i++)
        {
            ans = arr[i] - arr[i - 1];
            maxi = max(maxi, ans);
        }
        int last = k - arr[n - 1];
        maxi = max(maxi, 2 * last);

        cout << maxi << endl;
    }
    return 0;
}