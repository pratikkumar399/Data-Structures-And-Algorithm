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
        int a, b;
        cin >> a >> b;
        int flor1, flor2;
        if (a < 10)
        {
            flor1 = 1;
        }
        else
        {
            flor1 = (flor1 % 10 == 0) ? flor1 / 10 : flor1 / 10 + 1;
        }

        if (b < 10)
        {
            flor2 = 1;
        }
        else
        {
            flor2 = (flor2 % 10 == 0) ? flor2 / 10 : flor2 / 10 + 1;
        }
        cout << flor2 - flor1 << endl;
    }

    return 0;
}