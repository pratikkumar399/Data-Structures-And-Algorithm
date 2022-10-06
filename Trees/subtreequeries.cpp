//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;
#define N 10000005
vector<int> g[N], depth(N), height(N), subtree(N), even_ct(N);

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */

void dfs(int vertex, int par = 0)
{

    if (vertex % 2 == 0)
        even_ct[vertex]++;

    subtree[vertex] += vertex;
    for (int child : g[vertex])
    {

        // take action on child before entering the child node
        if (child == par)
            continue;

        // depth[child] = depth[vertex] + 1;

        dfs(child, vertex);
        // height[vertex] = max(height[vertex], height[child] + 1);
        // -> as we return we will add the values
        subtree[vertex] += subtree[child];
        even_ct[vertex] += even_ct[child];
        // take action on child after exiting the child node
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << subtree[i] << " " << even_ct[i] << endl;
    }

    return 0;
}