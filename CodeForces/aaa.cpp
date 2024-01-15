// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // coordinates of square as input
        int k = 4;
        int maxi = INT_MIN, mini = INT_MAX; // Initialize maxi and mini with extreme values
        while (k--)
        {
            int x, y;
            cin >> x >> y;

            maxi = max(maxi, x);
            mini = min(mini, x);
        }
        int ans = maxi - mini;
        cout << ans * ans << endl;
    }

    return 0;
}
