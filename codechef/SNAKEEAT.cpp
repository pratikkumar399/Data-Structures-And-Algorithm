#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q ,k;
        cin >> n, q;

        int arr[n] ;
        int query[n] ;

        
        for (int i = 0; i < n; i++){
            cin>> arr[i] ;
        }
        for(int i = 0; i < q; i++){
            cin>> query[i] ;
            cout<<endl ;
        }
        
        sort(arr,arr+n) ;


    }

    return 0;
}