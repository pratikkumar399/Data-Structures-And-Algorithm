#include<bits/stdc++.h>
using namespace std ;
int t = 1000001 ;


int main(){
    int a, arr[t] = {0} , b ;

    cin>>a ;
    while(a--){
        cin>> b ;
        arr[b]++;
    }
    for(int i=0 ; i<t ; i++){
        while(arr[i] > 0 ){
            cout<<i<< endl;
            arr[i]--;
        }
    }

    
    return 0;
}

// for(int i=0 ; i<t ; i++){
//         sort(arr,arr+ t) ;
//     }

//     for(int i=0 ; i<t ; i++){
//         cout<<arr[i]<<endl;
//     }