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
        int n = 3;
        string str[3][size];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cin >> str[i][j];
            }
        }

        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < size; j++)
            {
                string ans = str[i][j];
            }
        }
    }

    return 0;
}