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
        long long n, m;
        string str;
        cin >> n >> m;
        int k = m;
        str.clear();
        string s;
        cin >> s;
        int i = 0;
        int j = k - 1;
        int ulta = 1;
        while (i <= j)
        {
            if (ulta)
            {
                str += s[i];
                i++;
            }
            else
            {
                str += s[j];
                j--;
            }
            ulta ^= 1;
        }
        reverse(str.begin(), str.end());
        for(int i = k; i < n; i++)str += s[i];
        cout << str << "\n";
    }

    return 0;
}