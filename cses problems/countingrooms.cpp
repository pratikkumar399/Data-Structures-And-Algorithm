#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<bool>> visited;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y)
{
    if (x < 0 or x >= n or y < 0 or y >= m)
        return false;
    if (visited[x][y])
        return false;
    return true;
}
void dfs(int i, int j)
{
    visited[i][j] = true;
    for (int k = 0; k < 4; k++)
    {

        int nx = i + dx[k];
        int ny = j + dy[k];
        if (isValid(nx, ny))
        {
            dfs(nx, ny);
        }
    }
}

void connected_graph(int &count)
{
    for (auto i = 0; i < n; i++)
    {

        for (auto j = 0; j < m; j++)
        {
            if (!visited[i][j])
            {
                dfs(i, j);
                count++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    visited.resize(n);

    for (int i = 0; i < n; i++)
    {
        visited[i].resize(m);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;

            if (ch == '#')
                visited[i][j] = true;
        }
    }

    connected_graph(count);
    cout << count << endl;
    return 0;
}