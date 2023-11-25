// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> coins(n);

    for (auto &it : coins)
        cin >> it;

    vector<int> dp(target + 1, 0);

    dp[0] = 1;

    set<int> s;

    for (int i = 1; i <= target; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
            {
                if (!s.count(dp[i - coins[j]]))
                {
                    dp[i] += dp[i - coins[j]];
                }
                else
                    continue;
                s.insert(dp[i - coins[j]]);
                dp[i] %= 1000000007;
            }
        }
    }

    cout << dp[target] << endl;

    return 0;
}