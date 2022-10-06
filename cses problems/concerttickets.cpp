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
    int n, m;
    cin >> n >> m;
    multiset<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        auto it = s.upper_bound(t);
        if (it == s.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *(--it) << endl;
            s.erase(it);
        }
    }

    return 0;
}