//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;
#define int int64_t

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
        string str;
        cin >> str;
        stack<char> st;
        int count = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (st.empty() || str[i] == '(')
            {
                st.push(str[i]);
            }
            else
            {
                if (st.top() == '(' && str[i] == ')')
                {

                    st.pop();
                    count++;
                }
            }
            //     (()))(   =>
        }
        cout << 2 * count << endl;
    }

    return 0;
}