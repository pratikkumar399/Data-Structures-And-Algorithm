#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;

    vector<int> ans(n), arr(m);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    ll count = 0;
    sort(ans.begin(), ans.end());

    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll i = 0, j = 0;
    while (i < n and j < m)
    {
        if (ans[i] - k > arr[j])
            j++;
        else if (ans[i] + k < arr[j])
            i++;
        else
        {
            i++, j++, count++;
        }
    }
    cout << count << endl;

    return 0;
}