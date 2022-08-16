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

    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    int q;
    cin >> q;
    vector<string> query(q);

    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
    }
    vector<int> ans;

    for (int i = 0; i < q; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (query[i] == str[j])
            {
                count++;
            }
        }
        ans.push_back(count);
    }

    for (auto it : ans)
    {
        cout << it << endl;
    }

    return 0;
}