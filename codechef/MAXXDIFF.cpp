#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int diff;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int w[n];
        if (k > n / 2)
        {
            k = n - k;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        sort(w, w + n);
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < k; i++)
        {
            sum1 += w[i];
        }

        for (int i = k; i < n; i++)
        {
            sum2 += w[i];
        }

        diff = sum2 - sum1;
        cout << diff << endl;
    }

    return 0;
}