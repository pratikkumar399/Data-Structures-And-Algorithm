#include <bits/stdc++.h>
using namespace std;

// Function to add an edge to the graph (undirected).
void addEdge(vector<vector<int>> &graph, int from, int to)
{
    graph[from].push_back({to});
    graph[to].push_back({from}); // Add the reverse edge for an undirected graph.
}

// Function to perform BFS and return the previous nodes for path reconstruction.
vector<int> bfs(const vector<vector<int>> &graph, int start)
{
    int n = graph.size();
    vector<int> prev(n, -1);
    vector<bool> visited(n, false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int node = q.front();
        cout << node << "->";
        q.pop();

        for (auto edge : graph[node])
        {
            int to = edge;
            if (!visited[to])
            {
                visited[to] = true;
                prev[to] = node;
                q.push(to);
            }
        }
    }
    cout << endl;

    return prev;
}

// Function to reconstruct the path from start to end using the previous nodes.
vector<int> reconstructPath(vector<int> &prev, int start, int end)
{
    vector<int> path;
    for (auto at = end; at != -1; at = prev[at])
    {
        path.push_back(at);
    }
    reverse(path.begin(), path.end());

    if (path[0] == start)
    {
        return path; // Path found
    }

    path.clear(); // No path found, return an empty vector.
    return path;
}

// Function to format the path as a string.
string formatPath(vector<int> &path)
{
    string result;
    for (int i = 0; i < path.size(); i++)
    {
        result += to_string(path[i]);
        if (i < path.size() - 1)
        {
            result += " -> ";
        }
    }
    return result;
}

int main()
{
    int n = 6; // Number of nodes in the graph
    vector<vector<int>> graph(n);

    // Add edges to the graph (undirected).
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);

    int start = 0;
    int end = 5;

    vector<int> prev = bfs(graph, start);
    vector<int> path = reconstructPath(prev, start, end);

    string formattedPath = formatPath(path);
    cout << "Path: " << formattedPath << endl;

    return 0;
}
