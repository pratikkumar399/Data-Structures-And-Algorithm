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
        long long x, y;
        cin >> x >> y;
        long long ans = abs(x - y);

        cout << ans << endl;
    }

    return 0;
}