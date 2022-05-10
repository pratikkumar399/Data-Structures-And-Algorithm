#include <bits/stdc++.h>
using namespace std;

bool findSum(string str)
{
    int sum1 = 0;
    int sum2 = 0 ;

    bool ans = true ;
    for(int i = 0; i < str.length()/2; i++){
        if(isdigit(str[i])){
            sum1 += str[i] - '0' ;
        }
    }
    for(int i = str.size()/2; i < str.length(); i++){
        if(isdigit(str[i])){
            sum2 += str[i] - '0' ;
        }
    }
    
    if(sum1 != sum2){
        ans = false ;
        return false ;
    }
    else return true ;
    
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        string str ;
        cin >>str ;
        bool ans = findSum(str) ;
        if(ans == true){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }

    return 0;
}