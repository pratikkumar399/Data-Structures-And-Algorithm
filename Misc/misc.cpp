#include<bits/stdc++.h>
using namespace std ;


//iterative method
int gcd(int a , int b){
	while(b){
		a  %= b ;
		swap(a,b) ;
	}
	return a ;
}


//recursive method
int gcd1(int a , int b )
{
	if(b== 0){   // 0 , 10 
		return a ;
	}

	return gcd(b , a %b) ;
}
int main(){
	int t ;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t ; 	
	while(t--){ 
		int a , b ;
		cin>>a>>b ;
		cout<<__gcd(a,b) <<endl ;
		cout<<gcd(a,b) <<endl;
		cout<<gcd1(a,b) <<endl ;
	}

	return 0;	
}