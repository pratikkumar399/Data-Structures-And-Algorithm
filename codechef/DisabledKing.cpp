#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
cin >> t ;
while(t--){ 
     int n ; 
     cin >> n ;
     int ans = 0 ; 
     ans = n % 2 ;

     if( ans == 0 ){
         cout<<n << endl;
     }
     else{
         cout<< n -1 << endl;
     }

}
    
    return 0;
}