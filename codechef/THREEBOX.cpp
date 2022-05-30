#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >>t;
    while(t--){
        int a , b , c, d ;
        cin >> a >> b >> c >>d ;
        int sum = a + b +c ;
        int ans = 0 ;
        if(sum <= d){
          ans = 1 ;
        }
        else if(a+b <= d || b+c <= d || c+a <= d)
        {
         ans = 2 ;   
        }
        else{
            ans = 3 ;
        }

        cout<<ans <<endl ;
    }
    return 0;
}