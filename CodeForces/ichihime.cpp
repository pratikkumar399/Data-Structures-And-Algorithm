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
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long x, y, z;
        x = (a >= b) ? a : b;
        y = (b>= c) ? b : c;
        z = (c <= d) ? c : d;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }

    return 0;
}