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
        int n, m;
        cin >> n >> m;
        if (m % n == 0)
        {
            cout << "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }

    return 0;
}