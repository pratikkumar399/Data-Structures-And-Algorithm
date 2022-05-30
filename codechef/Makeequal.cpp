#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans3 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans3 += a[i];
        }

        int ans = *max_element(a, a + n);
        int ans2 = *min_element(a, a + n);

        int count = ans - ans2;

        cout << count << endl;
    }

    return 0;
}