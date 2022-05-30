#include<iostream>
using namespace std ;

int main(){
     long long n ;
     cin >>  n ;

     int arr[n] ; 

     for(int i=0 ; i<n-1 ; i++){
         cin>> arr[i] ;
     }

     int sum1 = (n*(n+1))/2 ;
     int sum2 = 0 ;

     for(int i = 0 ; i < n-1 ;i++){
         sum2  += arr[i] ; 
     }

     cout<<sum1- sum2<<endl;


    return 0;
}