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
        int size;
        cin >> size;
        vector<int> arr(size);

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        set<int> s;
        for (int i = size - 1; i >= 0; i--)
        {
            if (s.find(arr[i]) != s.end())
            {
                break;
            }
            s.insert(arr[i]);
        }

        cout << size - s.size() << endl;
    }

    return 0;
}