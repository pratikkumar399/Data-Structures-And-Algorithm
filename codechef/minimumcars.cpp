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

        if (n <= 4)
        {
            cout << 1 << endl;
        }
        else if (n % 4 != 0)
        {
            int ans = n / 4;
            cout << ans + 1 << endl;
        }
        else{
            int ans = n/4 ;
            cout<<ans << endl;
        }
    }


    return 0;
}