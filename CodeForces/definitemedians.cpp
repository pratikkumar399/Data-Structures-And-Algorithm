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
        vector<int> arr(n);

        int left = 0, right = 0;

        arr[1] = 0;

        for (int i = 2; i <= n; i++)
        {
            int a = i % 2;
            if (i % 2 == 0)
            {
                arr[i] = right--;
            }
            else
            {
                arr[i] = left++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] - right + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}