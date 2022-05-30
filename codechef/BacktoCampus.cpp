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
       
        int ans = n / k;
        int count = n % k;

        if ( count != 0)
        {
            ans++ ;
        }
        cout << ans << endl;
    }

    return 0;
}