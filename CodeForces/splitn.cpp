//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */
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

        bool flag = true;
        int split = -1;
        while (x > 0)
        {
            int i = 1;
            for (; i <= x;)
            {
                i *= 2;
            }
            flag = false;
            i /= 2;
            x -= i;

            // incrementing the counter
            split += 1;
        }
        cout << split << endl;
    }

    return 0;
}