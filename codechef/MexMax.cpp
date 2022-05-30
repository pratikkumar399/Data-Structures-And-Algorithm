#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i , k , x , val;
        cin >> n >> k;
        set <int> S;
        for ( i = 0; i < n; i++)
        {
            cin >> x;
            S.insert(x) ;
        }
        k = k +1 ;
        i = 0 ;
        while(k != 0 ){
           if(S.count(i) == 0) {
            val = i ; 
            k-- ;
           }
           i++ ;
        }
        cout<<val <<endl ;
    }
    return 0;
}