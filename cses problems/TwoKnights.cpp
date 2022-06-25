#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        long long a = k * k;
        long long ans = a * (a - 1) / 2;
        if (k > 2)
            ans = ans - 4 * (k - 1) * (k - 2);
        cout << ans << endl;
    }

    return 0;
}
