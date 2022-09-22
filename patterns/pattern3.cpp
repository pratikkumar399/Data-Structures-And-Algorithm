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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= i; j++)
        // {
        //     // cout << j * i << " ";
        //     // cout << j << " ";
        //     cout << " "
        //          << j;
        // }

        // for (int j = 1; j <= n; j++)
        // {
        //     // cout << j * i << " ";
        //     // cout << j << " ";
        //     if (j < n - i + 1)
        //     {
        //         cout << " ";
        //     }
        //     else
        //     {
        //         cout << "*"
        //              << " ";
        //     }
        // }
        for (int j = 1; j <= n; j++)
        {
            // cout << j * i << " ";
            // cout << j << " ";
            if (j > n - i + 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*"
                     << " ";
            }
        }
        // for (int j = 1; j <= n; j++)
        // {
        //     // cout << j * i << " ";
        //     // cout << j << " ";
        //     if (j < i)
        //     {
        //         cout << " ";
        //     }
        //     else
        //     {
        //         cout << "*"
        //              << " ";
        //     }
        // }
        cout << endl;
    }
    return 0;
}