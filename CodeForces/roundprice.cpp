#include <bits/stdc++.h>
using namespace std;

long long binary_expo(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long rsult = binary_expo(a, b / 2);
    if (b % 2)
        return rsult * rsult * a;
    else
        return rsult * rsult;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;

        string str = to_string(m);
        long long int length = str.size();

        long long ans = binary_expo(10, length - 1);
        cout << m - ans << endl;
    }

    return 0;
}