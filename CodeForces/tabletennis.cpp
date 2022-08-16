//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

#define int long long

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */
int32_t main()
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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        int count = 1;
        queue<int> st;
        int res = max(arr[0], arr[1]); // 4 1 2 3 , (4,1) res= 4
        if (n == 2)
        {
            ans = max(arr[0], arr[1]);
        }
        for (int i = 2; i < n; i++)
        {
            int sol = res;
            res = max(res, arr[i]); // 3 1 2 4  => (3,1) res = 3 , (3,2) res= 3 || 4 1 2 3 (4,2) , res = 4
            if (res == sol)
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if (count == m)
            {
                ans = res;
                break;
            }
            else if (i == n - 1)
            {
                ans = res;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

// 1 3 4 2 , (1,3) res = 3 , (3,4) , res = 4 , max(4,2) , res =  4 ;

// 8 1 9 2 3 10 4 5 6 7 ,  max(8,1) , res = 8 , max(8 , 9) , res = 9 , max(9 ,2) res = 9 , max(9 ,3) res = 9 , max()