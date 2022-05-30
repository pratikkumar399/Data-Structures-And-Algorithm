#include<bits/stdc++.h>
using namespace std ;

int main(){
    int  t;
    cin>> t ;
    
    for (int i =  0 ; i < t; i++)
    {
        /* code */
        int a , b ;
        cin  >> a ;
        
        cin>> b ;

        
        if(a == 0 ){
            cout<<"Liquid"<<endl ;
        }
        else if(b == 0){
            cout<<"Solid"<<endl ;
        }
        else{
            
            cout<<"Solution"<<endl ;
        
        }
    }
    
    return 0;
}