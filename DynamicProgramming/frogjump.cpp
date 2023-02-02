// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

int solve(int ind, vector<int> &height, vector<int> &dp)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int stepTwo = INT_MAX;
    int stepOne = solve(ind - 1, height, dp) + abs(height[ind] - height[ind - 1]);
    if (ind > 1)
    {
        stepTwo = solve(ind - 2, height, dp) + abs(height[ind] - height[ind - 2]);
    }
    return dp[ind] = min(stepOne, stepTwo);
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
    vector<int> dp(n, -1);
    solve(n - 1, height, dp);
    return 0;
}