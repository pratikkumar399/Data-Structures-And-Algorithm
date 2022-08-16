//ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* है युद्ध अगर तो ललकार तु । तलवार न सही तो शब्दो से दहाड़ तु । देख लेने दे दुनिया को, कितना हैं खुंकार तु। जय भवानी । हर हर महादेव। */

const long long int mx = 1000;
bool grid[mx + 5][mx + 5], node[mx + 5];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int i, j, n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        grid[a][b] = true;
        grid[b][a] = true;
    }

    int need = n * (n - 1) / 4;
    int count = 0;
    i = 1;
    cout << n - 1 << endl;
    while (i <= n)
    {
        for (j = 1; j <= n; j++)
        {
            if (grid[i][j] && i != j)
                break;
        }
        if (j > n)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                grid[i][j] = true;
                grid[j][i] = true;
                count++;
                printf("%d %d\n", i, j);
            }
            break;
        }
        i++;
    }

    return 0;
}