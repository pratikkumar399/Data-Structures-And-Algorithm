#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    string s;
    while (t--)
    {

        cin >> s;
        int size = s.length();

        if (size > 10 )
        {
            cout << s[0] << (size - 2) << s[size - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}