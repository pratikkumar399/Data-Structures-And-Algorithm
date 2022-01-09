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
        long long n;
        cin >> n;
        // long long arr[n];
        vector<long long>  arr(n) ;
        int ans = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        cout<<(arr[(int)arr.size() - 1] - arr[0]) * arr[(int)(arr.size() - 2)]<<endl;

        // cout << ans << endl;
    }

    return 0;
}