#include<bits/stdc++.h>
using namespace std ;
int fibo(int n){

    // base case 
    if(n <=1) return n ;
    

    return fibo(n-1) + fibo(n-2) ;
}

int main(){
    int n  = 8 ;
    cout<<fibo(n)<<endl;
    return 0;
}