#include <bits/stdc++.h>
using namespace std;

class nodes
{
public:
    int _x, _y, _time;

    nodes(int x, int y, int time)
    {
        _x = x;
        _y = y;
        _time = time;
    }
};

class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        queue<nodes> q;
        int countOranges = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push(nodes(i, j, 0));
                }
                if (grid[i][j] != 0)
                    countOranges++;
            }
        }

        int ans = 0;
        int count = 0;
        while (!q.empty())
        {
            int x = q.front()._x;
            int y = q.front()._y;
            int time = q.front()._time;
            q.pop();
            count++;
            ans = max(ans, time);

            int dx[] = {-1, 0, 1, 0};
            int dy[] = {0, 1, 0, -1};
            for (int i = 0; i < 4; i++)
            {
                int newX = x + dx[i];
                int newY = y + dy[i];

                if (newX >= 0 && newX < n && newY >= 0 && newY < m && grid[newX][newY] == 1)
                {
                    grid[newX][newY] = 2;
                    q.push(nodes(newX, newY, time + 1));
                }
            }
        }
        if (count == countOranges)
            return ans;
        return -1;
    }
};

int bfsSolve(int start, int end, int arr[], int n)
{
    int visited[end + 1];
    visited[start] = 1;

    queue<pair<int, int>> q;
    q.push({start, 0});
    while (!q.empty())
    {
        int node = q.front().first;
        int steps = q.front().second;
        if (node == start)
            return steps;

        q.pop();

        for (int i = 0; i < n; i++)
        {
            int dest = node * arr[i];
            if (dest <= end && visited[dest] == false)
            {
                q.push({dest, steps + 1});
                visited[dest] = true;
            }
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    // int arr[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // bfsSolve(1, 100, arr, n);

    return 0;
}