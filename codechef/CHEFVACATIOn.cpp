#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
cin >> t ;
while(t--){ 
     int x , y , z ;
     cin>> x >> y >> z ;
     int ans = x+ y ;
     if( ans <= z ){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }

}
    
    return 0;
}