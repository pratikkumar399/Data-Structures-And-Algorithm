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
        long long x;
        cin >> x;
        long long arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        long long one = 1;
        long long two = 0;
        long long ans = 0;
        for (long long i = 0; i < x; i++)
        {

            if (arr[i] == 1)
            {
                ans += x - one;
                one++;
            }
            if (arr[i] == 2)
            {
                ans += two;
                two++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}