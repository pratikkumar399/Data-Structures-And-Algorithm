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

        int n, m;
        cin >> n >> m;
        vector<int> ans(n + 1, 0);
        while (m-- > 0)
        {
            int a, b, k;
            cin >> a >> b >> k;

            ans[a - 1] += k;
            ans[b] -= k;
        }

        long long sum = 0, maxi = 0;

        for (auto it : ans)
        {
            sum += it;
            maxi = max(sum, maxi);
        }
        cout << maxi << endl;
    }

    return 0;
}