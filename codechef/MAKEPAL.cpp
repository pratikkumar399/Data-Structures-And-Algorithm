#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int occur;
        int count = 0;

        int i;
        for (i = 0; i < n; i++)
        {
            cin >> occur;

            if (occur % 2 == 1)
            {
                count++;
            }
           
        }

        cout << count / 2 << endl;
    }

    return 0;
}