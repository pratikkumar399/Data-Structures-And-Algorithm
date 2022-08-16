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
        int n;
        cin >> n;

        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ans[i]]++;
        }
        vector<int> arr;
        for (auto it : mp)
        {
            arr.push_back(it.second);
        }

        sort(arr.begin(), arr.end());
        // for (auto it : arr)
        // {
        //     cout << it << " ";
        // }
        int size = arr.size();
        if (arr[size - 1] != arr[size - 2])
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}