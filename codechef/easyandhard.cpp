#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> t ;
while(t--){ 
int x , a , b ;
cin >> x >> a >> b ;

if(x <= (a*1 + b*2)){
    cout<<"Qualify"<<endl ;
}
else{
    
    cout<<"NotQualify"<<endl ;
}

}
    
    return 0;
}