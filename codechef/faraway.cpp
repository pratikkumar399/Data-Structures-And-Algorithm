//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */
int32_t main()
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
        int a, b;
        cin >> a >> b;

        vector<int> arr(a), arr1;

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < a; i++)
        {
            if (abs(arr[i] - b) > abs(1 - arr[i]))
            {
                arr1.push_back(b);
            }
            else if (abs(arr[i] - b) == abs(1 - arr[i]))
            {

                arr1.push_back(1);
            }
            else
            {
                arr1.push_back(1);
            }
        }

        int ans = 0;

        for (int i = 0; i < a; i++)
        {
            ans += abs(arr[i] - arr1[i]);
        }
        cout << ans << endl;
    }

    return 0;
}