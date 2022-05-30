#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int i;
        cin >> s;
        int n = s.length();
        int flag = 1;
        int count[100] = {0};

        for (i = 0; i < n / 2; i++)
        {
            count[s[i] - 'a']++;
        }
        for (i = (n + 1) / 2; i < n; i++)
        {
            count[s[i] - 'a']--;
        }
        for (i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                flag = 0;
            }

            count[i] = 0;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}