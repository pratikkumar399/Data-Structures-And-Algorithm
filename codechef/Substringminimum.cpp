#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long N, M, ans, a, b, c;
        cin >> N >> M;
        a = N - M;
        if (a <= M + 1)
            cout << a;
        else
        {
            b = a / (M + 1);
            c = (a) % (M + 1);
            long long count1 = (M + 1) - c;
            ans = count1 * (b) * (b + 1) / 2 + c * (b + 1) * (b + 2) / 2;
            cout << ans;
        }
        cout << endl;
    }
}