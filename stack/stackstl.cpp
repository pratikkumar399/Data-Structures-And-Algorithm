#include<bits/stdc++.h>
using namespace std ;

void display_stack(stack <int>  s){
    while(!s.empty()){  
        cout<<'\t' <<s.top() ;
        s.pop() ;
    }
    cout<<endl ;
}

int main(){
    stack <int> s ;
    s.push(10) ;
    s.push(30) ;
    s.push(20) ;
    s.push(40) ;
    s.size();
    // s.pop() ;
    cout<<"The stack is : " ;
    display_stack(s) ;
    return 0;
}