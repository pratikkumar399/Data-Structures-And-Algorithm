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
        int x;
        cin >> x;

        if (x % 10 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << x % 10 << endl;
        }
    }

    return 0;
}