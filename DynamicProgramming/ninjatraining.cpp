// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

// memoization
int f(int days, int last, vector<vector<int>> &points, vector<vector<int>> &dp)
{

    // taking the maximum for the first day
    if (days == 0)
    {
        int maxi = 0;
        for (int i = 0; i <= 2; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, points[0][i]);
            }
        }
        return maxi;
    }

    int maxi = 0;

    // for other days we need to make sure that the current day is not equal to the last day
    for (int i = 0; i <= 2; i++)
    {
        if (i != last)
        {
            int activity = points[days][i] + f(days - 1, i, points, dp);
            maxi = max(maxi, activity);
        }
    }

    return maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4, -1));
    return f(n - 1, 3, points, dp);
}

/* जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif

    vector<vector<int>> points = {{10, 20, 30},
                                  {20, 30, 40},
                                  {30, 60, 90}};
    int n = points.size();
    cout << ninjaTraining(n, points) << endl;

    return 0;
}