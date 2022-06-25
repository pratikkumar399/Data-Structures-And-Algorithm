#include <bits/stdc++.h>
using namespace std;

signed main()
{

    // 1  2 3 4 5 6  -->   Total sum  : n (n+1) /2
    // we  need to divide the array into two sets such that sum of both the sets are equal

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if ((n * (n + 1)) % 4 == 0)
    {
        cout << "YES\n";
        set<int> a, b;
        for (int i = 1; i <= n; ++i)
            a.insert(i);
        int x = (n * (n + 1)) / 4;

        for (int i = n; i >= 1; --i)
            if (i <= x)
            {
                x -= i;
                a.erase(i);
                b.insert(i);
            }
        cout << a.size() << '\n';
        for (auto &x : a)
            cout << x << " ";
        cout << '\n';
        cout << b.size() << '\n';
        for (auto &x : b)
            cout << x << " ";
        cout << '\n';
    }
    else
        cout << "NO\n";

    return 0;
}