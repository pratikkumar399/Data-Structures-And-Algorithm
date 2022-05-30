// Simple division question

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >>t ;
    while(t--){
        int n  , x , y ;
        cin >> n >> x >> y ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++){
            cin>>a[i] ;
        }
        int count = 0 ;
        for(int i= 0 ; i < n ; i++){
            if(a[i] <= x && a[i]%y == 0 ){
              count++ ;
            }
        }
        cout<<count<<endl ;
    }
    return 0;
}