#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    vector<int> adj[n + 1];
    // vector<vector<int>> adj(n)

    // for weighted graph  us the following line of code ;
    // vector<pair<int, int>> adj[n+1] ;
    // vector<vector<pair<int, int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v; // wt
        cin >> u >> v;

        //   for weighted graph
        // cin>>u>>v>>wt ;
        // adj[u].push_back({v,wt});
        // adj[u].push_back({u,wt});

        adj[u].push_back(v);
        adj[v].push_back(u); // for directed graph omit this line
    }

    // for (int i = 0; i < n + 1; i++)
    // {
    //     cout<< i << "is attached to : " ;
    //     for (auto x : adj[i])
    //         cout << x << "->";
    //     cout << endl;
    // }

    // adj[2][2] =  [[1,2] , [2,3]]

    for(auto it : adj){
        for (auto i : it){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}