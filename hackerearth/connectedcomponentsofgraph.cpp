#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, m;
vector<int> graph[N]; // graph represented as an adjacency list

bool visited[N];
// int count = 0;

vector<vector<int>> connected;
vector<int> ans;

void dfs(int vertex)
{
    visited[vertex] = true;
    ans.push_back(vertex);

    for (int it : graph[vertex])
    {
        if (!visited[it])
        {
            dfs(it);
        }
    }
}

void connected_graph(int &count)
{
    for (auto i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            ans.clear();
            dfs(i);
            connected.push_back(ans);
            count++;
        }
    }
}
int main()
{
    // Writing output to STDOUT

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int count = 0;

    connected_graph(count);
    cout << count << endl;
    for (auto it : connected)
    {
        for (int it1 : it)
        {
            cout << it1 << " ";
        }
        cout << endl;
    }
    int *ptr = new int[11];

    // cout << count << endl;
}