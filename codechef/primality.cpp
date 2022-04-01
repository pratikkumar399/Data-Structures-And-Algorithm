#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    // bool prime = false; 
    if(n == 1){
        return false ;
    }
    for(int i = 2 ; i < n ; i++){
        if( n  % i == 0 ){
            return false ;
        }
    }
    return true ;
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n ;
        cin>> n;
        if(is_prime(n)){
            cout<<"yes" <<endl ;
        }
        else{
            cout<<"no" <<endl ;
        }

        
    }

    return 0;
}