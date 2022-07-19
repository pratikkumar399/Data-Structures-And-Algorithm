#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        string a = "";
        string b = "";
        cin >> str;

        for (int i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {
                a += str[i];
            }
            else
            {
                b += str[i];
            }
        }

        // sort the strings
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        }

    return 0;
}