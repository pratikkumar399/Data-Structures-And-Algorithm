#include<bits/stdc++.h>
using namespace std ;
int modulo = 1e9+7 ;

int main(){
int t ;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> t ;
while(t--){ 
long long n ;
cin >> n ;
long long count = 1 ;
long long occurence ;
vector<int>  arr(n);
unordered_map<int , int > p ; 
int ans = 1 ;
for(int i=0 ; i<n ; i++){ 
    cin >> arr[i] ;
}
for (int i : arr){
   p[i]++ ; // counting the subsequence of each key value 
}
for(auto it :  p){ //iterationg thorough the map 
  occurence =  it.second ;
  count *= (occurence +1) ;
  count %= modulo ;
}
  count = count -1 ;
cout<<count<<endl ;



}
    
    return 0;
}