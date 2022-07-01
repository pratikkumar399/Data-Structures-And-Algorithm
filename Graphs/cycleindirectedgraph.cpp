#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to detect cycle in a directed graph.

    // so the basic thing that needs to be taken care over here is that we make sure that if we do not find a back edge(or a cycle )  to a node from a node then we mark it with 2 while backtraking . This helps us in ensuring that those nodes are not considered while we continue to traverse the graph for finding a cycle

    bool checkCycle(int source, vector<int> graph[], vector<int> &visited)
    {
        visited[source] = 1;

        for (auto it : graph[source])
        {
            if (visited[it] == 0)
            {
                if (checkCycle(it, graph, visited))
                    return true;
            }
            else if (visited[it] == 1)
                return true;
        }
        visited[source] = 2;
        return false;
    }

    bool isCyclic(int V, vector<int> graph[])
    {
        // code here
        vector<int> visited(V, 0);

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (checkCycle(i, graph, visited))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends