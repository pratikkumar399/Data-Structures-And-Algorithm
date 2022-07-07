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
        int a;
        cin >> a;
        if (a == 0)
        {
            cout << '0' << endl;
        }
        else if (a % 3 == 0)
            cout << a / 3 << endl;
        else
        {
            cout << 3 - a % 3 << endl;
        }
    }

    return 0;
}