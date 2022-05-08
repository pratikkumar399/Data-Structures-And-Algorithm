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
        long long a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        bool ans = false;

        if (c + a >= d)
        {
            if (a < d)
            {
                if (c + a - d + b - e >= 0)
                {
                    ans = true;
                }
            }
            else if (c + b - e >= 0)
            {
                ans = true;
            }
        }

        if (ans == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}