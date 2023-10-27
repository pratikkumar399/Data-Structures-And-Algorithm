#include <bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// Function to perform BFS traversal of the given Graph
void BFS(vector<int> adj[], int V)
{
    // Initialize a boolean array
    // to keep track of visited vertices
    bool visited[V + 1];

    // Mark all vertices not-visited initially
    for (int i = 1; i <= V; i++)
        visited[i] = false;

    // Create a Queue to perform BFS
    queue<int> q;

    // Our source vertex is vertex
    // numbered 1
    int s = 1;

    // Mark S visited and Push to queue
    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        // Pop element at front and print
        int node = q.front();
        q.pop();

        cout << node << " ";

        // Traverse the nodes adjacent to the currently
        // poped element and push those elements to the
        // queue after marking them visited if are not already visited
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (visited[adj[node][i]] == false)
            {
                // Mark it visited
                visited[adj[node][i]] = true;

                // Push it to the Queue
                q.push(adj[node][i]);
            }
        }
    }
}

vector<int> bfs(vector<int> adj[], int V)
{
    vector<int> visited(V + 1, 0);
    visited[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bFs;
    while (!q.empty())
    {
        int top = q.front();
        q.pop();

        bFs.push_back(top);

        for (auto it : adj[top]) // iterating through every vector list at a particular node index
        {
            if (!visited[it])
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return bFs;

    // tc ->  O(n) + o(2*e)
}

// dfs traversal for finding bipartite graph

bool dfs(int n, vector<int> &visited, vector<vector<int>> &graph)
{
    visited[n] = 1;
    for (auto it : graph[n])
    {
        if (visited[it] == -1)
        {
            visited[it] = 1 - visited[n];

            if (!dfs(it, visited, graph))
            {
                return false;
            }
        }
        else if (visited[it] == visited[n])
        {
            return false;
        }
    }
    return true;
}

bool bfs(int src, vector<vector<int>> &graph, vector<int> &color)
{
    color[src] = 1;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto i : graph[u])
        {
            if (color[i] == -1)
            {
                // Assign alternate color to its neighbors.
                color[i] = 1 - color[u];
                q.push(i);
            }
            else if (color[i] == color[u])
                return false; // If neighbor is of same color returnn false.
        }
    }
    return true;
}
bool isBipartite(vector<vector<int>> &graph)
{

    int v = graph.size();

    vector<int> color(v, -1);
    for (int i = 0; i < v; i++)
    {
        if (color[i] == -1)
        {
            if (!bfs(i, graph, color))
                return false;
        }
    }
    return true;
}

// Driver code
int main()
{
    int V = 6;
    vector<int> adj[V + 1];
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);

    BFS(adj, V);

    return 0;
}
