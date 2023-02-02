// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

void tabulation(vector<vector<int>> &dp, string str, string bob)
{
    int size = str.size();
    reverse(str.begin(), str.end());
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (str[j - 1] == bob[i - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }

    cout << dp[size][size] / 2 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;
        vector<vector<int>> dp(size + 1, vector<int>(size + 1, 0));
        // storing the string in another to use it further
        string bob = str;
        tabulation(dp, str, bob);
    }

    return 0;
}