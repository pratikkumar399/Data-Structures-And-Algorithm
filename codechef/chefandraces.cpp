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
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        int count = 2;

        if (x == a || x == b)
        {
            count--;
        }
        if (y == b || y == a)
        {
            count--;
        }
        cout << count << endl;
    }

    return 0;
}