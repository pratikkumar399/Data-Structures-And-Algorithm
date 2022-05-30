#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int c[n +1], d[n +1];
        int sum[n +1]  ;
        sum[0] = 0 ;
        for (int i = 1; i <= n; i++)
        {
            cin >> c[i] >> d[i];
            sum[i] = sum[i-1] + c[i];
        }
        int profit = 0;
        for (int i = 1; i <= n; i++)
        {
            int maximum = d[i], minimum = d[i];
            for (int j = i; j <= n; j++)
            {
                maximum = max(maximum, d[j]);
                minimum = min(minimum, d[j]);
                profit = max(profit, (((j - i + 1) * a) - (sum[j] - sum[i-1]) - ((maximum - minimum) * (maximum - minimum))));
            }
        }

        cout << profit << endl;
    }

    return 0;
}