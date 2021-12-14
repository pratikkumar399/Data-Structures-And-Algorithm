#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    string n;
    while (t--)
    {
        cin >> n;
        int count1 = 0;
        int count2 = 0;
        int ans = 0;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == 'N')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if (count2 > count1)
        {
            cout << 0 << endl;
            // continue ;
        }
        else
        {
            count2 += 2;
            count1 -= 2;
            ans = count2 / count1;
            cout << ans % (int)(10e6) << endl;
        }
    }

    return 0;
}