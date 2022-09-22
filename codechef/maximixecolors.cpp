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
        int red, green, blue;

        cin >> red;
        cin >> green;
        cin >> blue;

        int maxi = max(red, green);
        maxi = max(maxi, blue);

        // int mini = min(red, green, blue);

        if (red == 1 && green == 1 && blue == 1)
        {
            cout << 3 << endl;
        }
        else if (red == 0 && green == 0 && blue == 0)
        {
            cout << 0 << endl;
        }
        else if (red == 0 || green == 0 || blue == 0 && red < 2 && green < 2 && blue < 2)
        {
            cout << maxi + 1 << endl;
        }
        else if (red > 1 && green > 1 && blue > 1)
        {
            cout << maxi + 1 << endl;
        }
        else
        {
            cout << maxi << endl;
        }
    }

    return 0;
}