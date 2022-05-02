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
        int x, y;
        cin >> x >> y;
        int a = x * 100;
        int b = y * 10;
        if (a == b)
        {
            cout << "CLOTH" << endl;
        }
        else if (a > b)
        {
            cout << "CLOTH" << endl;
        }
        else if (a < b)
        {
            cout << "DISPOSABLE" << endl;
        }
    }

    return 0;
}