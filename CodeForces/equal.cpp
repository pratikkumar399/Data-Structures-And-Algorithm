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
        long n;
        cin >> n;
        long long arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int minimum = *min_element(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        int ans = sum - (n * minimum);
        cout << ans << endl;
    }

    return 0;
}