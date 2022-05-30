#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int count = 0;
        int ans = 0;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                count++;
            }
            else if (a[i] < b[i])
            {
                ans += count;
                arr.push_back(a[i]);
                count = 0;
            }
            else
            {
                count = 0;
            }
        }
        ans += arr.size();
        cout << ans << endl;
    }

    return 0;
}