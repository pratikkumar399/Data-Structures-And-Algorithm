#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
cin >> t ;
while(t--){ 
       int  x  , y ;
       cin >> x >> y ;
       int ans = 0 ;
       ans = x+ y ;
       if(ans %2 == 0 ){
           cout<<"Bob" <<endl ;
       }
       else{
           cout<<"Alice"<<endl ;
       }
}
    
    return 0;
}