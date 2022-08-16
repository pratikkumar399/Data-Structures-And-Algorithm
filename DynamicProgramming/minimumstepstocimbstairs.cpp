//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */

class Space_Optimized
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> dp(n);

        int prev = 0;
        int prev2 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int curi = 0;
            curi = cost[i] + min(prev, prev2);
            prev = prev2;
            prev2 = curi;
        }

        return min(prev, prev2);
    }
};

class Iterative
{
public:
    int minCost(vector<int> cost)
    {
        int n = cost.size();
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 0;
        int prev, prev2;

        for (int i = 2; i <= n; i++)
        {
            prev = cost[i] + min(dp[i], dp[i - 1]);
            prev2 = cost[i] + min(dp[i], dp[i - 2]);
        }

        return min(prev, prev2);
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
    }

    return 0;
}