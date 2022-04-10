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
        long long int a , b ;
        cin>> a >> b;
        if(a ==1 || b == 1){
            cout<< -1 << endl;
        }
        else {
            long long int ans =  __gcd(a,b);
            if(ans != 1){
                cout<<0<<endl ;
            }
            else cout<<1<<endl ;
        }
    }

    return 0;
}