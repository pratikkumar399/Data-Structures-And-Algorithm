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
        int a, b;
        cin >> a >> b;

        if (a < b)
        {
            cout << "NO" << endl;
        }
        else if (a >= b)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}