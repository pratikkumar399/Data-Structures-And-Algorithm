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
        bool k;
        cin >> n >> k;

        if(k != 1)
        {
            if (n % 4 == 0)
            {
                cout << "OFF" << endl;
            }
            else
            {
                cout << "ON" << endl;
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << "ON" << endl;
            }

            else
            {
                cout << "Ambiguous" << endl;
            }
        }
    }

    return 0;
}