#include<bits/stdc++.h>
using namespace std ;

void printOccurence(string bhai , string khoj){
    int milgya = bhai.find(khoj) ;

    while( milgya != string :: npos){
        cout<<milgya<<endl;

        milgya = bhai.find(khoj , milgya +1 ) ;
    }
}

int main(){
    string bhai = "bhai  bhai " ;
    string khoj = "bhai" ;

    printOccurence(bhai ,khoj) ;
    return 0;
}