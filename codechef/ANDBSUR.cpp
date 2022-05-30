#include<bits/stdc++.h>
using namespace std ;

int largest_pow (int n){
    int p =1 ;
    while(p*2<= n ) p*= 2 ;
    return p ;
}

int main(){
    int t  ;
    cin>> t;
    while(t--){
        int n ;
        cin >> n ;
        int lp = largest_pow (n) ;
        int seclp = lp/2 ;
        int ans1 = n-lp+1 ;
        int ans2 = lp -seclp ;
        cout<<max(ans1,ans2) <<endl ;

     }
    return 0;
}