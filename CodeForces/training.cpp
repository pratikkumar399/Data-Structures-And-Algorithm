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
        int n, k;
        cin >> n >> k;
        vector<int> u(n);
        for (int i = 0; i < n; i++)
        {
            cin >> u[i];
        }
        map<int, int> first;
        map<int, int> last;
        for (int i = 0; i < n; i++)
        {
            if (first.find(u[i]) == first.end())
            {
                first[u[i]] = i;
            }
            last[u[i]] = i;
        }
        while (k--)
        {
            int x, y;
            cin >> x >> y;
            if (first.find(x) == first.end() || last.find(y) == last.end())
            {
                cout << "NO" << '\n';
                continue;
            }
            x = first[x];
            y = last[y];
            cout << (x <= y ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
