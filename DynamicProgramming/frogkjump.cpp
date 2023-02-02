// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

int solveUtil(int n, vector<int> &height, vector<int> &dp, int k)
{
    if (n == 0)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }
    int miniSteps = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (n - i >= 0)
        {
            int jump = solveUtil(n - i, height, dp, k) + abs(height[n] - height[n - i]);
            miniSteps = min(jump, miniSteps);
        }
    }

    return dp[n] = miniSteps;
}

int solve(int n, vector<int> &height, int k)
{
    vector<int> dp(n, -1);
    return solveUtil(n - 1, height, dp, k);
}

/* जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    vector<int> height{30, 10, 60, 10, 60, 50};
    int n = height.size();
    int k = 5;
    solve(n - 1, height, k);
    return 0;
}