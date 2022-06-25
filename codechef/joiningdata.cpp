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
        int n, k;
        cin >> n >> k;

        int a = n % 5 != 0 ? n % 5 + 1 : n % 5;
        int b = k % 5 != 0 ? k % 5 : k % 5;
        cout << a - b;
    }

    return 0;
}