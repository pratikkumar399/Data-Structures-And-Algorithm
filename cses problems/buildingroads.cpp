#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> visited;
vector<int> connect;
int c_c = 0;
int n, m;
void dfs(int vertex)
{
    visited[vertex] = true;

    for (auto it : g[vertex])
    {
        if (!visited[it])
        {
            dfs(it);
        }
    }
}

void process()
{
    for (auto i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            c_c++;
            connect.push_back(i);
            dfs(i);
        }
    }
}

int main()
{
    cin >> n >> m;
    g.resize(n + 1);
    visited.resize(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    process();

    cout << c_c - 1 << endl;

    if (c_c > 1)
    {
        int u = connect[0];
        int v;
        for (auto it = 1; it < connect.size(); it++)
        {
            v = connect[it];
            cout << u << " " << v << endl;
            u = v;
        }
    }

    return 0;
}