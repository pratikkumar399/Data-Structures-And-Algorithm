#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int final = 2 * (n - k);

        final += 2*((k - 1) / 2);

        cout << final << endl;
    }

    return 0;
}