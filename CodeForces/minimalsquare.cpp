#include <bits/stdc++.h>
using namespace std;

int main()
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
        int a, b;
        cin >> a >> b;
        int c = min(a, b);
        int d = max(a, b);
        if (c * 2 < d)
            cout << d * d << endl;
        else
        {
            cout << 4 * c * c << endl;
        }
    }

    return 0;
}