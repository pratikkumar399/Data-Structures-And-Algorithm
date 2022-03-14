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
        double a, b, c, d;
        cin >> a >> b >> c >> d;

        double car1 = c /a ;
        double car2 = d/b ;

        if ( car1 < car2){
            cout<< -1 <<endl ;
        }
        else if ( car1 > car2){
            cout<<1 <<endl ;
        }
        else{
            cout<< 0 <<endl ;
        }
    }

    return 0;
}