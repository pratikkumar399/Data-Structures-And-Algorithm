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
        int n ;
        cin>> n ;
        long long arr[n] ;
        for(long long i = 1; i <= n; i++){
            cin>>arr[i] ;
        }
        for(long long i = 1; i <= n; i++){
            if(arr[1] % 2 != 0  && arr[n] %2 != 0 || arr[1] %2 == 0 && arr[n] %2 == 0){
                cout<<"1"<<endl ;
                break ;
            }
            else if(arr[1] % 2 != 0  && arr[n] %2 == 0 || arr[] %2 == 0 && arr[n] %2 != 0){
                cout<<"2"<<endl ;
                break;
            }
            if(n==1){
                cout<<"0"<<endl ;
                break ;
            }
        }
    }

    return 0;
}