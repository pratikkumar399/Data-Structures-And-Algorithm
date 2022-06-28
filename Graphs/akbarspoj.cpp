#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct node
{
    ll name, dis, prev;
};

vector<long> adj[1000002];
int flag[1000002];

bool bfs(ll s, ll d, ll prev)
{
    bool result = true;

    node temp;
    temp.name = s;
    temp.dis = d;
    temp.prev = prev;
    queue<node> q;
    q.push(temp);

    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        flag[temp.name]++;

        if (flag[temp.name] == 1)
            result = true;

        if (temp.dis > 0)
        {
            vector<long>::iterator ii;
            for (auto it = adj[temp.name].begin(); it != adj[temp.name].end(); ++it)
            {
                if (*it == temp.prev)
                    continue;

                node temp1;
                temp1.prev = temp.name;
                temp1.name = *it;
                temp1.dis = temp.dis - 1;
                q.push(temp1);
            }
        }
    }
    return result;
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int nodes, roads, m_soldiers;
        cin >> nodes >> roads >> m_soldiers;
        for (ll i = 0; i <= nodes; i++)
        {
            flag[i] = 0;
            adj[i].clear();
        }

        while (roads--)
        {
            ll s, d;
            cin >> s >> d;
            adj[s].push_back(d);
            adj[d].push_back(s);
        }

        bool res = false;

        while (m_soldiers--)
        {
            ll s, d;
            cin >> s >> d;
            if (!res)
            {
                if (bfs(s, d, -1))
                {
                    res = true;
                }
            }
        }
        if (res)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}