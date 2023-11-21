#include <iostream>
#include <vector>

using namespace std;

class UnionFind
{
private:
    vector<int> parent;
    vector<int> rank;

public:
    UnionFind(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; ++i)
        {
            parent[i] = i;
        }
    }

    int findPar(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = findPar(parent[v]);
    }

    void rankUnion(int u, int v)
    {
        u = findPar(u);
        v = findPar(v);
        if (u != v)
        {
            if (rank[u] < rank[v])
            {
                swap(u, v);
            }
            parent[v] = u;
            if (rank[u] == rank[v])
            {
                rank[u]++;
            }
        }
    };

    int main()
    {
        int n, t;
        cin >> n >> t;

        UnionFind uf(n);

        while (t--)
        {
            int u, v;
            cin >> u >> v;
            uf.rankUnion(u, v);
        }

        if (uf.findPar(2) != uf.findPar(3))
        {
            cout << "Different component\n";
        }
        else
        {
            cout << "Same Component\n";
        }

        return 0;
    }
