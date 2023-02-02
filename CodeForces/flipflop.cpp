// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("E:/CoderISP/DataStructures/inputf.txt", "r", stdin);
    freopen("E:/CoderISP/DataStructures/outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (auto &it : arr)
        {
            cin >> it;
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);

        int temp = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == -1 && arr[i + 1] == -1)
            {
                temp = 1;
                break;
            }
        }
        if (temp)
            cout << sum + 4 << endl;
        else
        {
            if (sum == n)
                cout << sum - 4 << endl;
            else
                cout << sum << endl;
        }
    }

    return 0;
}