// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

int lcs(string s, string t, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];

    if (s[n - 1] == t[m - 1])
    {
        dp[n][m] = 1 + lcs(s, t, n - 1, m - 1, dp);
    }
    else
    {
        dp[n][m] = max(lcs(s, t, n - 1, m, dp), lcs(s, t, n, m - 1, dp));
    }

    return dp[n][m];
}

int main()
{
    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size();

    // recursive dp + memoization
    // vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    // cout << lcs(s, t, n, m, dp) << endl;

    // iterative dp
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}

// time complexity: O(n*m)
// space complexity: O(n*m)