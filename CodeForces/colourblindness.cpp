//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */

string replace(string s, char c1, char c2)
{
    int l = s.length();

    // loop to traverse in the string
    for (int i = 0; i < l; i++)
    {

        // check for c1 and replace
        if (s[i] == c1)
            s[i] = c2;
    }
    return s;
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
        int size;
        cin >> size;

        string str, str1;
        cin >> str >> str1;

        if (str == str1)
            cout << "YES" << endl;
        else
        {
            string a = replace(str, 'G', 'B');
            string b = replace(str1, 'G', 'B');
            // cout << a << " " << b << endl;
            // cout << a << " " << str1 << endl;
            if (a == b)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}