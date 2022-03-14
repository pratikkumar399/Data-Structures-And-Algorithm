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
        int ch = 0;
        for (int i = 0; i < n; i++)
        {
            if (ch == 26)
            {
                ch = 0;
            }
            cout << char(ch + 97);
            ch++;
        }

        cout << endl;
    }

    return 0;
}