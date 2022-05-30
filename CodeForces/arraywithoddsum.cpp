#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool odd = false , even = false;
        int sum = 0 ;
        int arr[n] ;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x ;
            if(x%2 != 0 ) odd = true ;
            if(x%2 == 0) even = true ;
            
        }

        if (sum%2 != 0 || (odd&&even))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}