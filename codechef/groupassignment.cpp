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
        int ans = 2*n + 1 - x ;
        cout<<ans<< endl;
    }

    return 0;
}