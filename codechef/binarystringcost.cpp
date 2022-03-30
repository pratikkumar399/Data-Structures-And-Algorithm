#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;

        int count0 = 0;
        int count1 = 0;
        string str, rev_str;
        str = s;

        // sorting the string in increasing order
        sort(str.begin(), str.end());
        // reverse the sorted string
        rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        n--;

        int a = 0, b = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                if (str[i + 1] == '1')
                    a++;
            }

            else if (str[i] == '1')
            {
                if (str[i + 1] == '0')
                    b++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (rev_str[i] == '0' && rev_str[i + 1] == '1')
            {
                count0++;
            }
            else if (rev_str[i] == '1' && rev_str[i + 1] == '0')
            {
                count1++;
            }
        }

        int ans1 = x * count0 + y * count1;
        int ans2 = y * b + x * a;
        if (ans1 < ans2)
        {
            cout << ans1 << endl;
        }
        else
        {
            cout << ans2 << endl;
        }
    }

    return 0;
}