#include <bits/stdc++.h>
using namespace std;

auto solve()
{
    int n;
    cin >> n;

    vector<int> s(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        ans[i] = i;
    }

    for (int i = 0, j = 0; i < n; i = j)
    {
        while (j < n && s[i] == s[j])
        {
            j++;
        }
        if (i + 1 == j)
        {
            cout << "-1\n";
            return;
        }
        rotate(ans.begin() + i, ans.begin() + i + 1, ans.begin() + j);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] + 1 << " \n"[i == n - 1];
    }
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}