#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int maximal = 0;

        int n, k, j;
        cin >> n;
        cin >> k;
        for (int i = 1; i <= k; i++)
        {
            /* code */
            j = n % i;

            if (j > maximal)
            {
                maximal = j;
            }
        }

        cout << maximal << endl;
    }
    return 0;
}