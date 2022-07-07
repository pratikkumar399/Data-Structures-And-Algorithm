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
        if (a <= 3)
        {
            cout << "-1" << endl;
            continue;
        }
        int thresh = 4;

        if (a < 10)
        {
            for (int i = a; i > thresh; i--)
            {
                cout << i << " ";
            }
            cout << "1 2 4 3";
        }
        else
        {
            for (int i = a; i > thresh; i--)
            {
                cout << i << " ";
            }
            cout << "1 2 4 3"
                 << " ";
            for (int i = 11; i < a; i++)
            {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}