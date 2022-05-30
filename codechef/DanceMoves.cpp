#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
cin >> t ;
while(t--){ 
int x , y ; 
cin>>x>>y ; 

int ans = y- x ;

if( x <= y ){
    cout<<( y - x + 1) /2 +  ans %2 <<endl ;
}
else{
    cout<<(x-y) <<endl ;
}

}
    
    return 0;
}