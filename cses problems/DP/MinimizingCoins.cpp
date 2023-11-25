#include <bits/stdc++.h>
using namespace std;

int minimizingCoins(int n, vector<int> &coins, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    if (dp[n] != -2)
        return dp[n];
    int ans = INT_MAX;          // Change 1e9 to INT_MAX
    for (int i = 0; i < n; i++) // Change n to m
    {
        int val = minimizingCoins(n - coins[i], coins, dp);
        if (val >= 0)
            ans = min(ans, val + 1); // Change dp[n] to ans
    }
    if (ans == INT_MAX) // Change 1e9 to INT_MAX
        return dp[n] = -1;
    return dp[n] = ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> coins(m); // Change n to m

    for (auto &it : coins)
        cin >> it;

    // vector<int> dp(m + 1, -2);
    vector<int> dp(m + 1, 1e9);

    // int result = minimizingCoins(m, coins, dp);
    dp[0] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }

    cout << (dp[m] == 1e9 ? -1 : dp[m]) << endl; // Change 1e9 to INT_MAX
    // cout << (result == INT_MAX ? -1 : result) << endl; // Change 1e9 to INT_MAX

    return 0;
}
