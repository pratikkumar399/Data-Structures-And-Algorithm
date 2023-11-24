// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007;

int recur(int n, vector<int> &dp)
{

    if (n == 0)
        return 1;
    if (dp[n] != 0)
        return dp[n];

    for (int i = 1; i <= 6; i++)
    {
        if (n - i >= 0)
        {
            dp[n] += recur(n - i, dp);
            dp[n] %= MOD;
        }
    }

    return dp[n];
}

/* जय भवानी । हर हर महादेव। */
int main()
{
    int n;
    cin >> n;

    // vector<int> dp(n + 1);
    vector<int> dp(n + 1, 0);

    cout << recur(n, dp);
    // base case
    // dp[0] = 1;

    // // now we need to find number of ways to get to n

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= 6; j++)
    //     {
    //         // if the dice value is greater than the current value of i then we can't use it
    //         if (j > i)
    //             break;
    //         // else we can use it
    //         dp[i] = (dp[i] + dp[i - j]) % MOD;
    //     }
    // }

    // cout << dp[n] << endl;
    return 0;
}