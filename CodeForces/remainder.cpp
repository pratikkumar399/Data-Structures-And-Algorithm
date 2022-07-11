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
        long long a, b, c;
        cin >> a >> b >> c;

        int ans = c / a;

        if ((a * ans + b > c))
            cout << (a * ans + b) - a << endl;
        else
            cout << (a * ans + b) << endl;
    }

    return 0;
}