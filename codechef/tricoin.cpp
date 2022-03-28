#include <bits/stdc++.h>
using namespace std;
int sum(int h)
{
    return (h * (h + 1) / 2);
}

void solve()
{
    int n;
    cin >> n;
    int h = 1;
    while (sum(h) <= n)
    {
        h++;
    }
    cout << h - 1 << "\n";
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}