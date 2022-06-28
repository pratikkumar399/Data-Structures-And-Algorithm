#include <bits/stdc++.h>
using namespace std;

void addEdge(int a, int b, vector<int> adj[])
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

int main()
{
    int t;
    cin >> t;
    int V, n, m, i;
    while (t--)
    {
        cin >> V >> n >> m;
        vector<int> adj[V + 1];
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            addEdge(a, b, adj);
        }

        int value[V + 1];
        int flag = 0, u;
        int ans[V + 1] = {0};
        bool visited[V + 1] = {false};
        int level[V + 1] = {0};
        for (int j = 0; j < m; j++)
        {
            int sr, x;
            cin >> sr >> x;
            queue<int> q;

            // memset(visited,false,sizeof(visited));
            q.push(sr);
            visited[sr] = true;
            // memset(value,-1,sizeof(value));

            // value[sr]=x;

            if (ans[sr])
                flag = 1;
            else
                ans[sr] = 1;
            level[sr] = 0;
            // memset(visited,false,sizeof(visited));
            while (flag == 0 && !q.empty())
            {
                u = q.front();
                q.pop();
                visited[u] = true;

                for (i = 0; i < adj[u].size(); i++)
                {
                    if (visited[adj[u][i]] == false)
                    {
                        visited[adj[u][i]] = true;
                        // value[adj[u][i]]=value[u]-1;

                        level[adj[u][i]] = level[u] + 1;
                        if (level[adj[u][i]] <= x)
                        {
                            q.push(adj[u][i]);
                            if (ans[adj[u][i]])
                            {
                                flag = 1;
                                break;
                            }
                            else
                                ans[adj[u][i]] = 1;
                        }
                    }
                }
            }
        }
        for (i = 1; i <= V; i++)
            if (ans[i] == 0)
                flag = 1;
        if (flag == 1)
            cout << "No\n";
        else

            cout << "Yes\n";
    }
}