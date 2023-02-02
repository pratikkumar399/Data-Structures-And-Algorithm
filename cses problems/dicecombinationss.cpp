// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

#define MOD 1000000007
#define MAXN 1000001

int answer(int n, vector<int> &dp)
{

    dp[0] = 1;
    if (dp[n] != 0)
        return dp[n];

    for (int i = 1; i <= 6; i++)
    {
        if (n - i >= 0)
        {
            dp[n] += answer(n - i, dp);
            dp[n] %= MOD;
        }
    }

    return dp[n];
}

int tabulation(int n, vector<int> &dp)
{
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6 and i - j >= 0; j++)
        {
            (dp[i] += dp[i - j]) %= MOD;
        }
    }

    return dp[n];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> dp(MAXN, 0);
    // cout << answer(n, dp);
    cout << tabulation(n, dp);
    return 0;
}