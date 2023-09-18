// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

int fn(int i, vector<int> &wt, vector<int> &profit, int capacity, vector<vector<int>> &dp)
{

    // lets sa if the capacity becomes zero or the items gets used up , then there is no possibility
    //  therefore we return 0 for the base case...
    if (i == 0)
    {
        if (wt[0] <= capacity)
            return profit[0];
        else
            return 0;
    }

    if (dp[i][capacity] != -1)
        return dp[i][capacity];

    // now we have two options either we pick an item or not pick it
    int notPick = fn(i - 1, wt, profit, capacity, dp);
    // now we can only pick
    int pick = INT_MIN;
    if (wt[i] <= capacity)
        pick = profit[i] + fn(i - 1, wt, profit, capacity - wt[i], dp);

    return dp[i][capacity] = max(pick, notPick);
}

int main()
{
    // in this we are given an arra of item and an arra of their value , and we have a bag of capacit C,
    // and we have to pick items such that the bag gets filled and the profit gets maximized

    int W = 5;
    // cin >> W;
    vector<int> wt = {1, 2, 4, 5};
    vector<int> val = {5, 4, 8, 6};

    // make a dp array to memoize the result
    // this is for recursive dp
    int n = wt.size();

    vector<vector<int>> dp(n, vector<int>(W + 1, -1));
    // cout << fn(n - 1, wt, val, W, dp);
    return 0;
}