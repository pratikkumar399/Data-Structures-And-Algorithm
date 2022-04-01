#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>> n ;
    string s ;
    cin>>s ;
    int count1 = 0 ;
    int count2 = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'N'){
            count1++ ;
        }
        else if(s[i] == 'T'){
            count2++ ;
        }
    }

    if(count1 > count2){
        cout<<"Nutan"<<endl ;
    }
    else if(count2 > count1){
        cout<<"Tusla"<<endl ;
    }
    return 0;
}   