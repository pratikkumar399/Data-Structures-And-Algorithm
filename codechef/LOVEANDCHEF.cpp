#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
cin >> t ;
while(t--){ 
  int n ,k ; 
  cin>>n >> k ;
  int a[n]; 

  for (int i = 0; i <n ; i++){ 
      cin >> a[i] ;
  }
  sort(a,a + n , greater<int>()); 
  int work  , ans , min_work; 

  for (int i = 0; i <n ; i++){ 
      min_work = a[i+1] + ans ;
      ans = a[i] / 2 ; 
      work = a[i] - ans ;
    //   min_work =a[i];
      
  }

  cout<<work<<endl;



}
    return 0;
}