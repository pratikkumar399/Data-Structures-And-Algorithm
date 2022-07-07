#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int flag = 0;
        vector<int> res(n);
        map<int, int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> res[i];
            ans[res[i]]++;
        }

        for (int i = 0; i < k; i++)
        {
            if (ans[i] == 0)
            {
                flag = 1;
            }
        }
        if (m >= k && flag != 1 && ans[k] <= (n - m))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}