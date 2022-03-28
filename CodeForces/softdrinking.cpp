#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int amount = k * l;
    int toast1 = amount / nl;
    int toast2 = c * d;
    int toast3 = p / np;
    int ans;
    ans = min({toast1, toast2, toast3}) / n;

    cout << ans << endl;
    return 0;
}