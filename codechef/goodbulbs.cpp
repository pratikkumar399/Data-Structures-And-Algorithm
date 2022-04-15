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
        int n, x;
        cin>> n >> x;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i];
        }
        int ans = 0;
        if (sum >= (n * x))
        {
            cout << "0" << endl;
        }
        else if (sum < (n * x))
        {
            ans = n * x - (sum);
            cout << ans << endl;
        }
    }

    return 0;
}