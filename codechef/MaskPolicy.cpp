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
        int n, a;
        cin >> n >> a;
        int m = n - a;
        if (a < m)
        {
            cout << a << endl;
        }
        else if (a > m)
        {
            cout << m << endl;
        }
        else if (a == m)
        {
            cout << a << endl;
        }
    }

    return 0;
}