//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */

void dfs(int start, vector<int> graph[], vector<int> &dfsTraversal, vector<int> &visited) {
    visited[start] = 1;
    dfsTraversal.push_back(start);

    for(auto it : graph[start]) {
        if(visited[it] == 0) {
            dfs(it, graph, dfsTraversal, visited);
        }
    }
}

vector<int> bfs(vector<int> graph[], int V, int start) {
    vector<int> visited(V + 1, 0);
    queue<int> q;
    q.push(start);
    visited[start] = 1; // Mark the starting node as visited
    vector<int> bfsTraversal;
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        bfsTraversal.push_back(front);
        for(auto it : graph[front]) {
            if(visited[it] == 0) {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return bfsTraversal;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> graph[n + 1];
    vector<int> visited(n + 1, 0); // Corrected spelling

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> dfsTraversal;
    dfs(1, graph, dfsTraversal, visited); // Changed starting node to 1

    for(auto it : dfsTraversal) cout << it << " ";
    cout << endl;

    return 0;
}
