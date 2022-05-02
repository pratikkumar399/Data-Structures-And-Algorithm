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
        if (z % x == 0 && z % y == 0)
        {
            cout << "ANY" << endl;
        }
        else if (z % x == 0)
        {
            cout << "CHICKEN" << endl;
        }
        else if (z % y == 0)
        {
            cout << "DUCK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }

    return 0;
}