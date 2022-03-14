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
        int x, y, z;
        cin >> x >> y >> z;
        if (x == y || x > y)
        {
            cout << "PIZZA" << endl;
        }
        else if (x == z || x > z)
        {
            cout << "BURGER" << endl;
        }
        else
        {
            cout << "NOTHING" << endl;
        }
    }

    return 0;
}