#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        long long ans = 0;
        long long x, y;

        cin >> x >> y;

        if (x >= y)
        {
            cout << 0 << endl;
        }
        else if (x < y)
        {   
            ans = y / x;
            if( y % x ==0){
                ans = ans - 1 ; 
            }
            cout << ans << endl;
        }
    }

    return 0;
}