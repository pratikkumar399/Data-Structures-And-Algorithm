#include <bits/stdc++.h>
using namespace std;

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
        string str;
        cin >> str;
        map<char, int> mp;

        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }

        for (auto it : mp)
        {
            if (it.second > 1)
            {
                counter += it.second * 1 + 1;
            }
            else if (it.second == 1)
            {
                counter += it.second * 2;
            }
        }
        cout << counter << endl;
    }

    return 0;
}