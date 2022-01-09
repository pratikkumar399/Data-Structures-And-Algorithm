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
        int n;
        cin >> n;
        int ans = 0;
       for(int i = 1 ; i* i <= n - 1 ; i++){
            if ((n - 1) % i == 0)
        {
            if((n-1)/i == i) ans++ ;
            else ans += 2 ;
        }
       }
        cout << ans << endl;
    }

    return 0;
}