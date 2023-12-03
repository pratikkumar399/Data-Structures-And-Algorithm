// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
// recursive dp + memoization

int ans;

int f(int n, int m, string &s, string &t, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    f(n - 1, m, s, t, dp);
    f(n, m - 1, s, t, dp);

    if (s[n - 1] == t[m - 1])
    {
        dp[n][m] = 1 + f(n - 1, m - 1, s, t, dp);
        ans = max(ans, dp[n][m]);
        return dp[n][m];
    }

    return dp[n][m] = 0;
}

int main()
{
    string s, t;
    cin >> s >> t;

    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, 0));
    // base case -> if the length of any of the string is 0 then the lcs is 0
    dp[0][0] = 0;

    int n = s.size(), m = t.size();
    int len = 0;
    // now we have to fill the dp table
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < 1; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                len = max(len, dp[i][j]);
            }
            else
            {
                // we have to take the max of the two
                dp[i][j] = 0;
            }
        }
    }

    cout << len << endl;
    // cout << ans << endl;
    return 0;
}