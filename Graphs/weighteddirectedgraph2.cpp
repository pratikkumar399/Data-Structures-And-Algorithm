// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;

        adj[u].push_back({v, wt});
    }

    for (auto it : adj)
    {
    }
    return 0;
}