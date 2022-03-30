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
        int n, k;
        cin >> n >> k;
        int array[n] ;
        for(int i = 0; i < n; i++){
            cin>>array[i] ;
        }

        sort(array,array+n) ;
        int ans =  array[min(k,n-1)] ;
        cout<<ans<<endl;
    }

    return 0;
}