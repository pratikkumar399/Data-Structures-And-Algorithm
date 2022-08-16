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
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        int ans = 0;

        queue<int> dq, q;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
            dq.push(arr[i]);
        }
        while (!dq.empty())
        {
            if (dq.front() <= m)
            {
                dq.pop();
                q.pop();
            }
            else
            {
                dq.push(dq.front() - m);
                q.push(q.front());
                dq.pop();
                q.pop();
            }
            ans = q.back();
        }

        cout << ans << endl;
    }

    return 0;
}