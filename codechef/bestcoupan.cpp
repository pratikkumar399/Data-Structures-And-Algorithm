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
        int x;
        cin >> x;
        int ans = 0;
        ans = x * (0.1);
        if (ans > 100)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "100" << endl;
        }
    }

    return 0;
}