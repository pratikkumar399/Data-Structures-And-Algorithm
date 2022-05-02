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
        if (x > z)
        {
            cout << "0" << endl;
        }
        else if (x + y > z)
        {
            cout << "1" << endl;
        }
        else if (x + y <= z)
        {
            cout << "2" << endl;
        }
    }

    return 0;
}