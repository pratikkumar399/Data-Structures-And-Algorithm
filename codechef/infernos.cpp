#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void notYou()
{
    int n, x;
    int res = 0;
    int jayada_wala = INT_MIN;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        jayada_wala = max(a[i], jayada_wala);
        res += (a[i] / x);
        if (a[i] % x)
        {
            res++;
        }
    }
    cout << min(res, jayada_wala) << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}