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
        int a, b;
        cin >> a >> b;
        if (b < a*2)
        {
            cout << "-1"
                 << " "
                 << "-1" << endl;
        }
        else
        {
            cout << a << " " << a * 2 << endl;
        }
    }

    return 0;
}