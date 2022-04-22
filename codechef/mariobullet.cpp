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
        int x, y, z;
        cin >> x >> y >> z;

        int ans = y / x;

        if (ans >= z)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << z - ans << endl;
        }
    }

    return 0;
}