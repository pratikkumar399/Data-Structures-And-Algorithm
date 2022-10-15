//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

int knapSack(vector<int> &wt, vector<int> &profit, int n, int W, vector<vector<int>> &dp)
{

    if (n < 0 || W == 0)
        return 0;
    int pf1, pf2;

    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }

    if (wt[n] > W)
    {
        return dp[n][W] = knapSack(wt, profit, n - 1, W, dp);
    }
    pf1 = profit[n] + knapSack(wt, profit, n - 1, W - wt[n], dp);

    pf2 = knapSack(wt, profit, n - 1, W, dp);

    return dp[n][W] = max(pf1, pf2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int W = 50;
    // cin >> W;
    vector<int> wt = {60, 100, 120};
    vector<int> profit = {10, 20, 30};
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> wt[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> profit[i];
    // }

    cout << knapSack(wt, profit, n - 1, W, dp);

    return 0;
}