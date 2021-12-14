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
        long long n, k;
        cin >> n >> k;

        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = *max_element(a, a + n), sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum < 0)
                sum = 0;
            else
                ans = max(ans, sum);
        }
        if (k > 1)
        {
            long long max_sum = 0, s = 0, prefix = 0, suffix = 0;
            for (int i = 0; i < n; i++)
            {
                max_sum += a[i];
                s += a[n - 1 - i];
                prefix = max(prefix, max_sum);
                suffix = max(suffix, s);
            }
            if (prefix + suffix > 0)
            {
                long long sum = max(accumulate(a, a + n, 0ll), 0ll);
                ans = max(prefix + suffix + (k - 2) * sum, ans);
            }
        }
        cout << ans << endl;
    }

    return 0;
}