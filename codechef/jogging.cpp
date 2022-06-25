#include <bits/stdc++.h>
using namespace std;

#define int long long

int mod = 1000000007;
#define endl "\n"

int solution(int sol, int b)
{
    sol %= mod;
    int ans = 1;
    while (b > 0)
    {
        if (b % 2)
            ans = ans * sol % mod;
        sol = sol * sol % mod;
        b >>= 1;
    }
    return ans;
}

int32_t main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;
        if (n == 1)
        {
            cout << x % mod << endl;
            continue;
        }
        int ans = x * solution(2LL, n - 1) % mod;
        cout << ans % mod << endl;
    }

    return 0;
}
