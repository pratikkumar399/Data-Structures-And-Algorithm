#include<iostream>
using namespace std ;

int main(){
    int n , k;
    cin>> n >> k;
    int array[n] ;
    int count = 0 ;
    for(int i=0; i<n; i++){
        cin>> array[i] ;
        if(array[i] > k){
            count = count +2 ;
        }
        else if(array[i] <= k){
            count++ ;
        }
    }
    cout<<count<<endl;
    return 0;
}