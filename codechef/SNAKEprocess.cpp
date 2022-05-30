#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int t, n;
    string s;

    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int flag = 1, check = 0, v = 1;
        int ch1 = 0, ch2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
                continue;
            else if (s[i] == 'H' && flag == 1)
                check = 1, flag = 0, ch1++;
            else if (s[i] == 'T' && check == 1)
                check = 0, flag = 1, ch2++;
            else
                v = 0;
        }
        if (v == 0 || ch1 != ch2)
            cout << "Invalid";
        else
            cout << "Valid";
        cout << endl;
    }
    return 0;
}