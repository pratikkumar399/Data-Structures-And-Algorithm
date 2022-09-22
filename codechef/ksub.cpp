//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */

int gcdAll(vector<int> &arr, int index)
{
    if (index == arr.size() - 1)
    {
        return arr[index];
    }
    int a = arr[index];
    int b = gcdAll(arr, index + 1);
    return __gcd(a, b);
}

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
        int a, b;
        cin >> a >> b;
        vector<int> arr(a);

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        int gcd = gcdAll(arr, 0);

        int count = 0, gc = 0;

        for (int i = 0; i < a; i++)
        {
            gc = __gcd(gc, arr[i]);
            if (gc == gcd)
            {
                count++;
                gc = 0;
            }
        }

        if (count >= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}