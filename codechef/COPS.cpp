#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x, y;
        cin >> m;
        cin >> x;
        cin >> y;
        int m_no;
        int head;
        int tail;
        int houses[101] = {0};
        for (int i = 1; i <= m; i++)
        {
            cin >> m_no;
            head = m_no - (x * y);
            tail = m_no + (x * y);
            for (int i = m_no; i <= tail && i <= 100; i++)
            {
                houses[i]++;
            }
            for (int i = m_no; i >= head && i > 0; i--)
            {
                houses[i]++;
            }
        }
    
    int ans = 0;
    for (int i = 1; i < 101; i++)
    {
        if (houses[i] == 0)
        {
            ans++;
        }
    }
        cout << ans << endl;
    }

    return 0;
}