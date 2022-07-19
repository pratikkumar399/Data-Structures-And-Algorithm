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
        int arr[n];
        map<int, int> mapping;
        int ans = 0;
        int counter = 0, count = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i)
        {
            mapping[arr[i]]++;
            ans = max(ans, arr[i]);
        }

        for (auto it : mapping)
        {
            if (it.second == 1)
                counter++;
            count = max(count, it.second);
        }

        if (counter % 2 == 0)
        {
            int res = counter / 2;
            cout << res << endl;
        }
        else
        {
            int res = (counter + 1) / 2;
            if (mapping[ans] == 1)
                if (count == 2)
                    res++;
            cout << res << endl;
        }
    }
    return 0;
}