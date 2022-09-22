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
        int n, h, m;
        cin >> n >> h >> m;
        int ans1 = 0, ans2 = 0;
        map<int, int> mp;
        while (n--)
        {
            int ah, am;
            cin >> ah >> am;

            mp[ah * 60 + am]++;
        }
        int t1 = 0;
        while (!mp[(h * 60 + m + t) % (1440)])
        {
            t1++;
            
        }
        cout << t1 << endl;
        t1 %= 1440;
        cout << t1 / 60 << " " << t1 % 60 << endl;
    }

    return 0;
}

// learnings from this problem:

// in clock problems i can convert hours in terms of total time to get the required answer

// lets run a testcase for this
/*
2 23 35
20 15
10 30

mp = {20 * 60 + 15, 1} == 1215 , 1
mp = {10 * 60 + 30 , 1} == 630 , 1

mp[23*60 +35] = mp[1415 % 1440] t++ ;

t= 25 then mp = 0


*/

// 1 6 13  => 8 00 -  6 13 => 1  47