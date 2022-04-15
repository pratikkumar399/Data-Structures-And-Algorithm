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
        int n, x;
        cin >> n >> x;

        int half = n / 2;
        if (n == 1)
        {
            for (int i = x - half; i < x + half + 1; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int i = x - half; i <= x + half + 1; i++)
            {
                if (i != x)
                    cout << i << " " ;
            }
        }
        cout << ""<<endl;
    }

    return 0;
}