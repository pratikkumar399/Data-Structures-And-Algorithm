#include<bits/stdc++.h>
using namespace std ;

int main(){
    string hello = "Aur bhai kya hal hain" ;
    int res = hello.find("bhai") ;

    if(res == string ::  npos){
        cout<<"String maujud nahi hain abhir"<<endl;
    }
    else{
        cout<<"First occurence at index : " <<res<<endl;
    }
    
    return 0;
}