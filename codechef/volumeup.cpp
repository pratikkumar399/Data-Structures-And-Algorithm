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
        int x , y ;
        cin>> x>>y ;

        int ans = abs(x-y) ;

        cout<< ans << endl;

    }

    return 0;
}