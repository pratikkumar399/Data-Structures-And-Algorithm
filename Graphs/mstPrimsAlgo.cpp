#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pi> adj[n];

    int u, v, wt;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    int parent[n], key[n];
    bool mstSet[n];

    for (int i = 0; i < n; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    priority_queue<pi, vector<pi>, greater<pi>> pq;

    key[0] = 0;
    parent[0] = -1;
    pq.push({0, 0});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        mstSet[u] = true;
        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;
            if (mstSet[v] == false && weight < key[v])
            {
                parent[v] = u;
            }
            key[v] = weight;
            pq.push({key[v], v});
        }
    }

    for (int i = 1; i < n; i++)
        cout << parent[i] << " - " << i << " \n";

    return 0;
}