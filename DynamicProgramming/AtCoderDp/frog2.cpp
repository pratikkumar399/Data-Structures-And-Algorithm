//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;

/* जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> dp(n, INF);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= i + k; j++)
        {
            if (j < n)
                dp[j] = min(dp[j], dp[i] + abs(arr[i] - arr[j]));
        }
    }

    cout << dp[n - 1];
    return 0;
}