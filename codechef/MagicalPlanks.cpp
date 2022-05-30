#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        int n ;
        cin >> n;
        string s;
        cin>>s ;
        float count1 = 0;
        
        for (int i = 1; i < n; i++)
        {
            if(s[i-1] != s[i]){
                count1 = count1 + 0.5 ;
            }
        }  
        cout<<ceil(count1)<<endl ;
       
         
    }

    return 0;
}