// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

bool isValid(int i, int j, int n, int m)
{
    if (i < 0 or i == n or j < 0 or j == m)
    {
        return true;
    }
    return false;
}

vector<pair<int, int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int islandPerimeter(vector<vector<int>> &grid)
{
    int row = grid.size();
    int col = grid[0].size();

    int perimeter = 0;

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (grid[r][c] == 0)
                continue;
            perimeter += 4;
            for (auto it : directions)
            {
                int nx = r + it.first;
                int ny = c + it.second;
                if (isValid(nx, ny, row, col) or grid[nx][ny] == 0)
                    continue;
                perimeter -= 1;
            }
        }
    }

    return perimeter;
}

int main()
{
    // lets take the number of edges and vertices
    int n, m;
    cin >> n >> m;

    // lets build an adjacency list
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}