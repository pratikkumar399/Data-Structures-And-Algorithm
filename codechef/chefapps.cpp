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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = a - (b + c);
        int mini = min(b, c);

        if (x >= d)
        {
            cout << 0 << endl;
        }

        else if (a - mini < d)
        {
            cout << 2 << endl;
        }
        else if (a - mini >= d)
        {
            cout << 1 << endl;
        }
    }

    return 0;
}