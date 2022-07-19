#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cin >> t ;
    while(t--){ 
        int  n  , l , r ;
        cin>> n >> l>> r ;
        int arr[1000000] ;
        bool flag =  1 ; 
        for(int i = 1 ; i <= n ; i++){
            arr[i] = ((l-1)/ i +1 )*1 ;
            flag =  arr[i] <= r &&  flag ;
        }

        if(flag == 1 ){
            cout<<"YES"<<endl ;
            for(int i = 1 ; i<= n ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    return 0;
}