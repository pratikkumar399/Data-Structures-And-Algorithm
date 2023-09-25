#include <bits/stdc++.h>
using namespace std;

void bfsTraversal(vector<vector<int>> &adj, vector<int> &vis, int source)
{
    // mark the source node as visited
    vis[source] = 1;
    // we are using a queue so that we can be able to explore the nodes on the same level
    // or adjacent nodes
    queue<int> q;
    // push in the queue
    q.push(source);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << " ";
        for (int neighbor : adj[front])
        {
            if (!vis[neighbor])
            {
                // is a neighbour is unvisited the mark it visited and push it in the queue
                vis[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }
}

void dfs(vector<vector<int>> &adj, vector<int> visited, int source)
{
    // mark the node as visited
    visited[source] = 1;

    for (auto node : adj[source])
    {
        if ((!visited[node]))
        {
            dfs(adj, visited, node);
        }
    }
}

void cycle_detectioon(vector<vector<int>> &graph, vector<int> visited, int source)
{
    queue<pair<int, int>> q;
    q.push({source, -1});
    while (!q.empty())
    {
        auto child = q.front().first;
        auto parent = q.front().second;
        q.pop();
        visited[source] = 1;
        for (auto it : graph[child])
        {
            if (!visited[it])
            {
                q.push({it, child});
            }
            else
            {
                if (parent != it)
                {
                    cout << "Cycle found" << endl;
                    return;
                }
            }
        }
    }
    cout << "No cycle found" << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> visited(n, 0);

    // doing the iteration n times because we have n nodes
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfsTraversal(adj, visited, i);
        }
    }

    return 0;
}
