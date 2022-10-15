//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
void dfs(int s, vector<int> g[], bool *vis)
{
    vis[s] = true;
    cout << s << " ";
    for (int i = 0; i < g[s].size(); i++)
    {
        if (vis[g[s][i]] == false)
        {
            dfs(g[s][i], g, vis);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int N, E;
        cin >> N >> E;
        vector<int> g[N];
        bool visited[N];

        memset(visited, false, sizeof(visited));
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0, g, visited);
        cout << endl;
    }

    return 0;
}