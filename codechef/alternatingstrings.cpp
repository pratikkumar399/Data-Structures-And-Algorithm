#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> t ;
while(t--){ 
    int n;
    cin >> n ;
    string s ;
    cin >> s ;
    int count1 = 0 ;
    int count2 = 0 ;

    for(int i = 0 ; i < n; i++){
        if(s[i] == '0'){
            count1++ ;
        }
        else if(s[i] == '1'){
            count2++ ;
        }
    }
    int mina = (2*count1) + 1 ;
    int mino = (2*count2) + 1 ;
    if(count1 == count2){
        cout<<s.size()<<endl;
    }
    else if( count2 < count1 ){
        cout<<mino<<endl ;
    }
    else{
        cout<<mina<<endl;
    }
}
    
    return 0;
}