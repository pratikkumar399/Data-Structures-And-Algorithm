#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    string str;
    cin >> str;
    int len = str.length();
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        char c = str.at(i);
        sum += (c - 'a') + 1;
    }

    if (len == 1)
    {
        cout << "Bob"
             << " " << sum << endl;
    }
    else
    {

        if (len % 2 == 0)
        {
            cout << "Alice"
                 << " " << sum << endl;
        }
        else
        {
            char first = str.at(0) - 'a';
            char last = str.at(len - 1) - 'a';
            int rmv = max((sum - first - 1), (sum - last - 1));
            int difference = sum - rmv;
            if (rmv > difference)
            {
                cout << "Alice"
                     << " " << rmv - difference << endl;
            }
            else
            {
                cout << "Bob"
                     << " " << difference - rmv << endl;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        lucifer();
    }
}