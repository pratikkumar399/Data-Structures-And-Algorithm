//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */

int fibo(int n, vector<int> &dp)
{

    if (n <= 1)
        return n;

    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    // T.C -> O(n) and S.C = O(n) + O(n)
    // vector<int> dp(n + 1, -1);
    // cout << fibo(n, dp) << endl;

    // Doing space optimisation
    //  T.C -> O(n) and S.C ->O(1) ->linear space complexity
    int prev2 = 0;
    int prev = 1;

    for (int i = 2; i <= n; i++)
    {
        int currentI = prev + prev2;
        prev2 = prev;
        prev = currentI;
    }
    cout << prev;
    return 0;
}