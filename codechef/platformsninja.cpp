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
        int a[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        sort(a, a + n);
        sort(d, d + n);

        int count = 1, result = 1;

        for (int i = 1, j = 0; i < n, j < n;)
        {
            if (a[i] <= d[j])
            {
                count++;
                i++;
            }
            else if (a[i] > d[j])
            {
                count--;
                j++;
            }
            result = max(result, count);
        }
        cout << result << endl;
    }

    return 0;
}