#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    int n  ;
    while (t--)
    {
        /* code */
        cin >> n ;
    int arr[100] ;
    for (int i = 0; i < n; i++)
   {
        /* code */
        cin>>arr[i] ;
    }
    int check = 1 ;
    int head = 0 ; 
    int tail = n -1 ;
     if(arr[0] != 1 && arr[n-1] != 1){
         cout<<"no"<<endl;
         continue ;
     }   
    while(head <  tail ){
        if(arr[head] != arr[tail]){
            check= 0 ;
            break ;
        }
        else if (arr[head] != arr[head+1] && arr[head+1] !=arr[head] +1 ){
            check = 0 ;
            break ;
        }
        head++ ; tail-- ;

    }
    if(arr[head] == 7 && check ==1){
        cout<<"yes"<<endl ;
    }
    else{
        cout<<"no"<<endl ;
    }
    }
    
    return 0;
}