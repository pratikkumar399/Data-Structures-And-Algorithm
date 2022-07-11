#include <bits/stdc++.h>
using namespace std;

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
        int n;
        cin >> n;
        int arr[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0 && i % 2 != 0)
            {
                even++;
            }
            else if (arr[i] % 2 != 0 && i % 2 == 0)
            {
                odd++;
            }
        }
        if (even > odd || even < odd)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << even << endl;
        }
    }

    return 0;
}