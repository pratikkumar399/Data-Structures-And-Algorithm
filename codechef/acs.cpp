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

        if (a > 10 && a < 100)
        {
            cout << "-1" << endl;
        }
        else if (a <= 10)
        {
            cout << a << endl;
        }
        else
        {
            if (a / 100 + a % 100 > 10)
            {
                cout << -1 << endl;
            }
            else if (a % 100 == 0)
            {
                cout << a / 100 << endl;
            }
            else
            {
                cout << a / 100 + a % 10 << endl;
            }
        }
    }

    return 0;
}