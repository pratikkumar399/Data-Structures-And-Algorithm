#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n] ;
    cin>>s ;
    char arr[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
   
    for (int i = 0; i < 9; i++)
    {   
        int ans  = s[i] ;
        if(ans > arr[ans]){
           swap(s[i] , arr[ans]) ;
        }
       
    cout<<ans;
    }

    return 0;
}