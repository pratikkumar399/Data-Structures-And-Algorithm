#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        int res = 1;

        int sol = a;
        for (int i = 0; i < a; ++i)
        {
            if (i % 2 == 0)
            {
                cout << sol-- << " ";
            }
            else
                cout << res++ << " ";
        }
        cout << endl;
    }

    return 0;
}