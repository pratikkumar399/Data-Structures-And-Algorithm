#include<bits/stdc++.h>
using namespace std ;

void sorting(int arr[] , int n  ){
    for (int i = 0; i < n -1 ; i++)
    { 
        int min = arr[i] ;
        int minIndex = i ;
        for (int j =  i +1 ; j < n ; j++)
        {
            /* code */

            if(arr[j] < min){
                min = arr[j] ;
                minIndex = j ; 
            }

        }

        if( minIndex != i ){
            arr[minIndex] = arr [i] ;
            arr[i] = min ;
        }

        
        
    }
    
}
int main(){
    int arr[5] = { 10 , 24 , 2 , 5, 15} ;
    sorting(arr , 5) ;
    for (int i = 0; i < 5 ; i++)
    {
        /* code */
        cout<< arr[i] << " " ;
    }
    cout <<endl ;

    return 0;
}

