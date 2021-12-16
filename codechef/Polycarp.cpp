#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin >> t;
        long long  arr[7] ;
    while (t--)
    {
        for(int i = 0; i < 7; i++){
            cin>>arr[i];
        }
        int x = arr[0]+ arr[1] ;
      
        int max = arr[6] ;
        int ans = max - x ;
        int ans2 =arr[1] ;
        int ans3 = max - arr[5] ;
        cout<<ans<<" "<<ans2<<" "<<ans3<<endl;

        
    }
return 0;
}

