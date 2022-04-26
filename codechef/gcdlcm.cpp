#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if(a<b) swap(a,b) ;
        long long ans = gcd(a, b);
        cout << ans << " ";
        cout << a*b/ans << endl;
    }

    return 0;
}