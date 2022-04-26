#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] %= m ;
    }
    sort(arr,arr+n);
    int q;
    cin >> q;
    while (q--)
    {
        long long x;
        cin >> x;
        x %= m ;
        long long *traverse =  upper_bound(arr , arr+n , m - x - 1) ;
        if(traverse != arr){
            traverse-- ;
        }
        cout<<max((arr[n-1] + x) % m  , (*traverse + x) % m)<<endl;
    }

    return 0;
}