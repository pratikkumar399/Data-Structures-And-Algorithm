#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
void notYou()
{
    int n;
    cin >> n;
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            zero++;
        }
        else if (x == 1)
        {
            one++;
        }
    }

    int ans = (zero > one) ? 0 : 1;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        notYou();
    }

    return 0;
}