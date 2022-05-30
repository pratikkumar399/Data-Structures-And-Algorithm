#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
cin >> t ;
while(t--){ 
long long x ,k ;
cin >> x >> k;

cout<<2*x<<" " ;
cout<<x*k*(x*k-1)<<endl ;
}
    
    return 0;
}