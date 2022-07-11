#include <bits/stdc++.h>
using namespace std;

int counter(vector<int> arr)
{
    int count = 0;
    for (auto it : arr)
    {
        if (it > 0)
        {
            count++;
        }
    }
    return count;
}

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
        string str;
        cin >> str;
        int count = 0, flag = 0;
        vector<int> ans(26);
        for (int i = 0; i < str.size() - 1; i++)
        {
            ans[str[i] - 'a']++;
            if (counter(ans) > 3)
            {
                count++;
                i--;
            }
        }

        if (counter(ans) > 3)
        {
            count++;
        }
        cout << count << endl;
    }

    return 0;
}