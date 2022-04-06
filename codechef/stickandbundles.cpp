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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr,arr+n) ;
        if (n == 1)
        {
            cout << 3 << endl;
        }
        if (n == 2)
        {
            cout << 2 << endl;
        }
        if (n == 3)
        {
            cout << 1 << endl;
        }
        int ans = 0;
        if (n >= 4)
        {
            ans = n % 4;
            cout << ans << endl;
        }
    }

    return 0;
}