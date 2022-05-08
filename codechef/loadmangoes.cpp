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
        int a, b, c;
        cin>>a>>b>>c ;

        int ans =  c - b ;

        cout<<ans/a <<endl;
    }

    return 0;
}