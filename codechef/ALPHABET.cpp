#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    int n  ;
    cin >> s ;
    cin >> n ;
    while(n--){
        string z ;
         cin >> z ;
         int flag = 0 ;
         for (int i = 0; i < z.length(); i++)
         {
            for (int j = 0; j < s.length(); j++)
            {
                /* code */
                if(z[i] == s[j]) {
                       flag++ ;
                       break ;
                }
            }
            
         }
         if(flag == z.length()){
             cout<<"Yes" <<endl ;
         }
         else{
             cout<< "No" <<endl ;
         }
         
    }
    return 0;
}