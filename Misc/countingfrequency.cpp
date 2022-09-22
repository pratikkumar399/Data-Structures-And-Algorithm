#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n ;
	cin >>  n ;

	vector<int> arr(n) ;

	map<int,int> mp ;

	for(int i = 0 ; i < n ; i++)
	{
		cin>>arr[i] ;
	}

	for(auto it :  arr){
		mp[it]++ ;
	}

	for(auto it :  mp){
		cout<<it.first<<" "<<it.second <<endl;
	}


	return 0;
}