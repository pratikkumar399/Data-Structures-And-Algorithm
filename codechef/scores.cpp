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
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        if (a <= c && b <= d)
        {
            cout << "POSSIBLE " << endl;
        }
        else
        {
            cout << "IMPOSSIBLE " << endl;
        }
    }

    return 0;
}