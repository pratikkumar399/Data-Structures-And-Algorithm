#include<bits/stdc++.h>
#define int32_t
using namespace std;
#define span(a) begin(a), end(a)

void solve(){
        
    int n,i,j=0;
    cin>>n;
    int l[0];

    for (int i = 1; i < 100000; i++)
    {
        if (i%2!=0)
        {
            n=n-1;
            cout<<i<<" ";
            if(n<=0)
            break;
        }
        
    }
    cout<<endl;
}

signed main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}