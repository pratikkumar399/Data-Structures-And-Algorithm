//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long ans, ans1;

        if (n < 4)
        {
            cout << -1 << endl;
        }
        else if (n == 4)
        {
            cout << 3 << " " << 1 << " " << 4 << " " << 2 << endl;
        }
        else
        {
            ans = 1;
            (n % 2 == 0) ? (ans1 = n / 2 + 1) : (ans1 = n / 2 + 2);
            int i = 0;
            while (i < n)
            {
                if (i % 2 == 0)
                {
                    ans++;
                    cout << ans - 1 << " ";
                }
                else
                {
                    ans1++;
                    cout << ans1 - 1 << " ";
                }
                i++;
            }
            cout << endl;
        }
    }

    return 0;
}