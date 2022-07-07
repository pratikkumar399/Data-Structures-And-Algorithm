#include <bits/stdc++.h>
using namespace std;

int parent[100000];
vector<int> rank;
int n;

void makeSet(int rank[])
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findPar(int node)
{
    if (node == parent[node])
    {
        return node;
    }

    return parent[node] = findPar(parent[node]);
}

void union_H(int u, int v)
{
    int rank[n];
    u = findPar(u);
    v = findPar(v);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[u] < rank[v])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int u, v;
        union_H(u, v);
    }

    if (findPar(2) != findPar(3))
    {
        cout << "Different component " << endl;
    }
    else
    {
        cout << "Same Component" << endl;
    }

    return 0;
}