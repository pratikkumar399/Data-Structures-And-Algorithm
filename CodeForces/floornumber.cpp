#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int result = n / x;
        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            int ans = (n-3) /x + 2;
            cout << ans << endl;
        }
    }

    return 0;
}