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
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        int ans = *max_element(a, a + n);

        if (a[n - 2] < ans)
        {
            cout << "peace:)" << endl;
        }
        else if (a[n - 2] == ans)
        {
            cout << "fight:(" << endl;
        }
    }

    return 0;
}