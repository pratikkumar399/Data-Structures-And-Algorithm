//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
vector<int> arr;

long long int solve(vector<int> &coins, int amount, vector<vector<int>> &dp, int n)
{

    if (amount == 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return INT_MAX;
    }
    if (dp[n][amount] != -1)
        return dp[n][amount];
    long long int best;
    if (coins[n - 1] > amount)
    {
        best = solve(coins, amount, dp, n - 1);
    }
    else
    {
        best = min(solve(coins, amount, dp, n - 1), 1 + solve(coins, amount - coins[n - 1], dp, n));
    }

    return dp[n][amount] = best;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int n, sum;
    cin >> n >> sum;
    arr.resize(n);

    // vector<int> dp(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    int ans = solve(arr, sum, dp, n);

    // dp[0] = 0;
    cout << ((ans == INT_MAX) ? -1 : ans) << endl;
}