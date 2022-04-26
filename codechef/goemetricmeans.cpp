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
        int co_pos = 0;
        int co_neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                co_neg++;
            }
            else
            {
                co_pos++;
            }
        }
        int ans = abs(co_pos - co_neg);

        if (ans == 1 || ans == 0)
        {
            cout << "Yes" << endl;
        }

        else if (ans == 2)
        {
            if (co_neg % 2 == 0 && co_pos % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else if (ans > 2)
        {
            cout << "No" << endl;
        }
    }

    return 0;
}