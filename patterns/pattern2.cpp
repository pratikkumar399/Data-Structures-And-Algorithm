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
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << 5 - j + 1 << " ";
        }
        cout << endl;
    }

    // output
    /*
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << 5 - i + 1 << " ";
        }
        cout << endl;
    }

    // Output
    // 5 5 5 5 5
    // 4 4 4 4 4
    // 3 3 3 3 3
    // 2 2 2 2 2
    // 1 1 1 1 1

    return 0;
}