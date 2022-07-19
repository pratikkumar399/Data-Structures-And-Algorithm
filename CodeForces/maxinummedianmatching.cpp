#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int boys[n], girls[n];

        for (int i = 0; i < n; i++)
        {
            cin >> boys[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> girls[i];
        }
    }

    return 0;
}