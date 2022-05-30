#include <bits/stdc++.h>
using namespace std;

bool is_even(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // sort(a, a + n);
        int count = 0;
        int ans = -1 ;

        for (int i = 0; i < n; i++)
        {
            /* code */
            if (is_even(a[i]) )
            {
                count++;
                ans = max(count ,ans);
            }
            else{
                count = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}