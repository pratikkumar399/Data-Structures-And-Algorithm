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

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int result = 0;
        bool ans = 0;
        set<int> st;

        for (int i = 1; i < n; i++)
        {
            st.insert(arr[i] - arr[i - 1]);
            if (arr[i] % arr[0] != 0)
                result++;
        }

        if (result > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}