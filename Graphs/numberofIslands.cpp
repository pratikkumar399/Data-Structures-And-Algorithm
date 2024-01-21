// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

class Solution
{

public:
    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void bfs(vector<vector<char>> &grid, int i, int j, int n, int m)
    {
        queue<pair<int, int>> q;
        q.push({i, j});

        while (!q.empty())
        {
            auto [x, y] = q.front();
            q.pop();

            for (auto it : dir)
            {
                int nx = x + it.first;
                int ny = y + it.second;
                if (nx < 0 or ny < 0 or nx >= n or ny >= m or grid[nx][ny] != '1')
                    continue;
                grid[nx][ny] = '2';
                q.push({nx, ny});
            }
        }
    }

    void dfs(vector<vector<char>> &grid, int i, int j, int n, int m)
    {
        if (i < 0 or j < 0 or i >= n or j >= m or grid[i][j] != '1')
            return;

        grid[i][j] = '2';
        dfs(grid, i + 1, j, n, m);
        dfs(grid, i - 1, j, n, m);
        dfs(grid, i, j + 1, n, m);
        dfs(grid, i, j - 1, n, m);
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    // dfs(grid, i, j, n, m);
                    bfs(grid, i, j, n, m);
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    Solution obj;
    cout << obj.numIslands(grid) << endl;

    return 0;
}