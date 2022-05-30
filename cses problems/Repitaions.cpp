#include<bits/stdc++.h>
using namespace std ;

int main(){
    string n ;
    cin>> n ;
    int count = 1;
    int ans  = 1 ;

    for(int i = 1 ; i <= n.length() ; i++){
        if( n[i] == n[i - 1]){
            count++ ;
        }
        else{
            ans =  max(ans, count) ;
            count =1 ;
        }
    }

    ans = max(ans , count);

    cout<<ans<<endl ;
    return 0;
}