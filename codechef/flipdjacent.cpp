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
        string s;
        cin >> s;

        int count = 0;
        int count1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                count1++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }

        if (count1 > 0 && count > 0)
        {
            cout << 2 << endl;
        }
        else if (count1 < 1 && count != 0)
        {
            cout << 1 << endl;
        }
        else if (count == 0)
        {
            cout << 0 << endl;
        }
    }

    return 0;
}