#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int ans = abs(n - m);
        int ans2;
        if (m < n)
        {
            ans2 = n + ans;
            cout << ans2 << endl;
        }
        else if (m >= n)
        {
            ans2 = n;
            cout << ans2 << endl;
        }
    }

    return 0;
}