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
        set<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        int count = 0;
        int count2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count++;
            }
            else
            {
                count = 0;
            }
            count2 = max(count, count2);
        }
        cout << n - (count2 + 1) << endl;
    }

    return 0;
}