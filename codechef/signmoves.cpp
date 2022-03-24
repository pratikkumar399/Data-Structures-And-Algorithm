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
        int n;
        cin >> n;
        int ans = 0;

        if (n % 2 == 0)
        {
            ans = n / 2;
        }
        else if (n % 2 != 0)
        {
            ans = -(n / 2 + 1);
        }

        cout << ans << endl;
    }

    return 0;
}