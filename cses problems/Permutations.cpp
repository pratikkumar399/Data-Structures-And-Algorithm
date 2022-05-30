#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // print no solution if the permutation doest exist
    if (n == 1)
    {
      cout<<1<< endl ; 
      return 0 ;  
    }

    else if(n < 4 ){
        cout<< "NO SOLUTION"<< endl ;
    }

    

    else if( n == 4 ){
        cout<<  "2 4 1 3"<<endl ;
    }

    else if(n%2 == 0 ) {
        for( int i = 1; i <= n; i =i+2){
            cout<<i<<" " ;
        }
        for(int i = 2; i <= n; i = i+2){
            cout<<i<<" " ;
        }
    }
    else{
        for( int i = n-1; i >  0; i -= 2){
            cout<<i<<" " ;
        }
        for( int i = n; i >  0; i -= 2){
            cout<<i<<" " ;
        }
    }

    return 0;
}
