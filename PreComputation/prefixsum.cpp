#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int pf[N] ;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a[i];
        pf[i] = pf[i-1] + a[i]; 
    }
    while (t--)
    { 
        int l, r;
        cin >> l >> r;
        cout<<pf[r] - pf[l-1]<<endl;
        // long long sum = 0; //
        // for (int i = l; i <= r; i++)
        // {
        //     sum += a[i];
        // }
        // cout << sum << endl;
    }

    return 0;
}